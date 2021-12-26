#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool isDelimiter(char ch)
{
    if(ch == ' ' || ch == '+' || ch == '-' ||
        ch == '*' || ch == '/' || ch == ',' ||
        ch == ';' || ch == '>' || ch == '<' ||
        ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
            return true;
    return false;
}

bool isKeyword(char* str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
            !strcmp(str, "while") || !strcmp(str, "do") ||
            !strcmp(str, "break") ||
            !strcmp(str, "continue") || !strcmp(str, "int")
            || !strcmp(str, "double") || !strcmp(str, "float")
            || !strcmp(str, "return") || !strcmp(str, "char")
            || !strcmp(str, "case") || !strcmp(str, "char")
            || !strcmp(str, "sizeof") || !strcmp(str, "long")
            || !strcmp(str, "short") || !strcmp(str, "typedef")
            || !strcmp(str, "switch") || !strcmp(str, "unsigned")
            || !strcmp(str, "void") || !strcmp(str, "static")
            || !strcmp(str, "struct") || !strcmp(str, "goto"))
        return true;
    return false;
}

char* subStr(char* str, int left, int right)
{
    int i;
    char* subString = (char*)malloc(sizeof(char) * (right - left + 2));
    for (i = left; i <= right; i++)
        subString[i - left] = str[i];
    subString[right - left + 1] = '\0';
    return (subString);
}

void perseString(char* str)
{
    int len = strlen(str);
    int left = 0, right = 0;

    while(right<=len && left<=right){
        if(isDelimiter(str[right]) == false)right++;

        if(isDelimiter(str[right]) == true && left == right){
            right++;
            left = right;
        }
        else if(isDelimiter(str[right]) == true && left!=right || (right == len && left!=right)){
            char* subString = subStr(str, left, right-1);
            if(isKeyword(subString) == true){
                printf("%s is a keyword.\n", subString);
            }
            else printf("%s is not a keyword.\n", subString);
            left = right;
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a line for parsing\n");
    scanf("%[^\n]", &str);
    perseString(str);
    return 0;
}
