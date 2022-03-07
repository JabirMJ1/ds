#include<stdio.h>

int main()

{
    int sum=0,i,n[20],a;

        printf("Input numbers\n");
        for(i=0;i<5;i++)
        {
            scanf("%d", &n[i]);
            sum=sum+n[i];
        }
    a=sum/5;
    printf("\nThe sum is %d", sum);
    printf("\nThe average is %d", a);

    return(0);
}