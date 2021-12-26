#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isConstant(char *buffer)
{
    int len = strlen(buffer);

    for(int i = 0; i < len; i++) {
        if(!isdigit(buffer[i])) return false;
    }
    return true;
}

bool isKeyword(char *buffer)
{
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
        "do","double","else","enum","extern","float","for","goto",
        "if","int","long","register","return","short","signed",
        "sizeof","static","struct","switch","typedef","union",
        "unsigned","void","volatile","while"};

    int i, flag = 0;
    for(i = 0; i < 32; ++i){
        if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
        }
    }
    return flag;
}

bool isOperator(char ch)
{
    char Operators[6] = "+-*/%=";

    for(int i = 0; i < 6; i++) {
        if(ch == Operators[i]) return true;
    }
    return false;
}

bool isDelimiter(char ch)
{
    if(ch == ' ' || ch == ';') {
        return true;
    }
    return false;
}

void ParserFun(char *str)
{
    int left = 0, right = 0;
    int len = strlen(str);

    while(right < len && left <= right) {
        if(isDelimiter(str[right]) == false) {
            right++;
        }
        else {

            int idx = 0, lft = left, rgt = right-1;
            char word[rgt-lft+1];

            while(lft <= rgt) {
                word[idx] = str[lft];
                idx++;
                lft++;
            }

            if(strlen(word) == 1 && isOperator(word[0])) {
                printf("%s is an Operator\n", word);
            }
            else if(isKeyword(word)) {
                printf("%s is a Keyword\n", word);
            }
            else if(isConstant(word)) {
                printf("%s is a Constant\n", word);
            }
            else {
                printf("%s is an Identifier\n", word);
            }

            right++;
            left = right;
        }

    }

}

int main()
{
    char str[111];
    printf("Enter a string\n");

    scanf("%[^\n]", str);

    ParserFun(str);

    return 0;
}
