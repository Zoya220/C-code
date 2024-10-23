#include <stdio.h>

int main() {
    int p, c, m ,  avg;     
           

    printf("Enter Physics Marks:\n");
    scanf("%d", &p);
    printf("Enter Chemistry Marks:\n");
    scanf("%d", &c);
    printf("Enter Maths Marks:\n");
    scanf("%d", &m);


    avg = (p + c + m) / 3;  

    
    printf("PCM Average = %d\n", avg);

    
    avg >= 50 ? printf("You are Eligible for Admission\n") : printf("You are NOT Eligible for Admission\n");

    return 0;
}

