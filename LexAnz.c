#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isDelimiter(char ch)
{
    char delimiter[] = " +-*/,;><=(){}[]";

    int len = strlen(delimiter);

    for(int i = 0; i < len; i++) {
        if(delimiter[i] == ch) return true;
    }
    return false;
}

bool isOperator(char ch)
{
    char oper[] = "+-*/><=";
    int len = strlen(oper);

    for(int i = 0; i < len ; i++) {
        if(oper[i] == ch) return true;
    }
    return false;

}

bool validIdentifier(char* str)
{
    if(isdigit(str[0]) || isDelimiter(str[0])) return false;
    return true;
}

bool isKeyword(char* str)
{
	char keywords[32][10] = {"auto","break","case","char","const","continue","default",
        "do","double","else","enum","extern","float","for","goto",
        "if","int","long","register","return","short","signed",
        "sizeof","static","struct","switch","typedef","union",
        "unsigned","void","volatile","while"};

    int i, flag = 0;
    for(i = 0; i < 32; ++i){
        if(strcmp(keywords[i], str) == 0){
            flag = 1;
            break;
        }
    }
    return flag;
}

bool isInteger(char* str)
{
	int i, len = strlen(str);

	if (len == 0)
        return false;

	for (i = 0; i < len; i++) {
		if (!isdigit(str[i]) || (str[i] == '-' && i > 0))
			return false;
	}
	return true;
}

bool isRealNumber(char* str)
{
	int i, len = strlen(str);
	bool hasDecimal = false;

	if (len == 0)
		return false;

	for (i = 0; i < len; i++) {
		if ((str[i] != '.' && !isdigit(str[i])) || (str[i] == '-' && i > 0))
			return false;

		if (str[i] == '.')
			hasDecimal = true;
	}
	return hasDecimal;
}

char* subString(char* str, int left, int right)
{
	int i;
	char* subStr = (char*)malloc(sizeof(char) * (right - left + 2));

	for (i = left; i <= right; i++)
		subStr[i - left] = str[i];

	subStr[right - left + 1] = '\0';

	return subStr;
}

void parse(char* str)
{
	int left = 0, right = 0;
	int len = strlen(str);

	while (right <= len && left <= right)
    {
        //printf("left %d right %d\n", left, right);
		if (isDelimiter(str[right]) == false)
        {
            right++;
        }
		if (isDelimiter(str[right]) == true && left == right)
        {
			if (isOperator(str[right]) == true)
			{
			    printf("'%c' IS AN OPERATOR\n", str[right]);
			}
            right++;
			left = right;

		}
		else if (isDelimiter(str[right]) == true && left != right
				|| (right == len && left != right))
        {
			char* subStr = subString(str, left, right - 1);

			if (isKeyword(subStr) == true)
				printf("'%s' IS A KEYWORD\n", subStr);

			else if (isInteger(subStr) == true)
				printf("'%s' IS AN INTEGER\n", subStr);

			else if (isRealNumber(subStr) == true)
				printf("'%s' IS A REAL NUMBER\n", subStr);

			else if (validIdentifier(subStr) == true
					&& isDelimiter(str[right - 1]) == false)
				printf("'%s' IS A VALID IDENTIFIER\n", subStr);

			else if (validIdentifier(subStr) == false
					&& isDelimiter(str[right - 1]) == false)
				printf("'%s' IS NOT A VALID IDENTIFIER\n", subStr);
            //printf("Check ee left %d right %d\n", left, right);
			left = right;
		}
	}
	return;
}

int main()
{
	//char str[100] = "int sum = a + b + 1c + 2d; ";
	char str[100];// = "double sum = a + 15.6-b +c+10.3;";

	scanf("%[^\n]", str);

	parse(str);

	return (0);
}
