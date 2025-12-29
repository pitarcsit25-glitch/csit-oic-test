#include <stdio.h>

int main() {
    int start, end, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        if(i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }

    printf("Sum of Even Numbers = %d\n", evenSum);
    printf("Sum of Odd Numbers = %d\n", oddSum);

    return 0;
}
