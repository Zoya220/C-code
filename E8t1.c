/*
Aim : WAP to find the length of a string without using library function.
Name:Zoya Ayub Shaikh
UIN:241A016
Class:FE
Branch:AI-DS
*/
#include<stdio.h>
int main()
{
    char str[100];
    int length=0;   //variable
    printf("\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String : ");
    gets(str);

    while(str[length] !='\0')
    {
        length++;

    }

    printf("string length: %d Characters",length);
    return 0;
}
