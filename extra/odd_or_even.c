#include<stdio.h>

void main(){
    int i, number;

    printf("Enter the number\n");
    scanf("%d", &number);
      
    if(number%2==0){
        printf("%d is Even\n", number);
    }
    else printf("%d is Odd\n", number);
}