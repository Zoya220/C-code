/*
Name:Zoya Ayub Shaikh
UIN:241A016
Class:FE
Branch:AI-DS
*/
//AIM:find the large value of arrray
#include <stdio.h>
int main(){

int n,i,a[100],large;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
printf("Enter a value: ");
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<=n-1;i++)
{
    if(large<a[i])
        large=a[i];

}
printf("The largest number is %d",large);
return 0;



}
