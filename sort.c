#include<stdio.h>

void main(){
    int i, j, temp, limit, numbers[20];

    printf("Enter the number of values in array\n");
    scanf("%d", &limit);

    printf("Enter the numbers:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < limit; i++) {
        for (j = 0; j < limit; j++) {
            if(numbers[i] < numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("The numbers in ascending order\n");

    for (i = 0; i < limit; i++) {
        printf("%d\n", numbers[i]);
    }
}