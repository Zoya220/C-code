#include <stdio.h>

int main() {
    int start, end, sum = 0;

    
    printf("*** Sum of Odd Numbers ***\n");

  
    printf("Enter Start Number: \n");
    scanf("%d", &start);
    printf("Enter Ending Number:\n ");
    scanf("%d", &end);

    
    if (start > end) {
        printf("Start number should be less than or equal to ending number.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) { 
            sum += i;
        }
    }

    
    printf("Sum of all the Odd Numbers between %d and %d = %d\n", start, end, sum);

    return 0;
}
