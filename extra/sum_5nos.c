#include<stdio.h>

void main(){
    int i, numbers[5];
    float sum = 0, average;

    printf("Enter the numbers\n");

    for(i=0; i<5; i++){
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    average = sum / 5;

    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);
}