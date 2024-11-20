/*
Name:Zoya Ayub Shaikh
UIN:241A016
Class:FE
Branch:AI-DS
*/
#include<stdio.h>
intfactorialIterative(intnum){
int prod = 1;
for(inti=1; i<= num; i++){
        prod *=i;
}
        return prod;
}
int main(){
intnum;

printf("\t\t\t***ITERATIVE FACTORIAL FUNCTION***\n\n");
printf("Enter Number:");
scanf("%d",&num);
printf("FACTORIAL of %d is %d",num, factorialIterative(num));

   return 0;
}
