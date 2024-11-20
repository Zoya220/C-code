/*
Name:Zoya Ayub Shaikh
UIN:241A016
Class:FE
Branch:AI-DS
*/

int main (){

#include <stdio.h>
void counter(){
    static int count = 0;
count++;
printf("counter function called :%d\t\n",count);


printf("\n\t\t\t****storage classes******\t\t\t");
counter();
return 0;
}
