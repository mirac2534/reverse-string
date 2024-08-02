#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseString(char[]);

int main()
{
 char inputString[51];
 printf("Enter a string (up to 50 characters):");
 fgets(inputString,sizeof(inputString),stdin);
 reverseString(inputString);
 printf("Reversed string: %s\n",inputString);
    return 0;
}

void reverseString(char str[])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    int start=0;
    int end=length-1;

    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
