#include<stdio.h>

int main(){
	int i, n, a[50];
	printf("To read and display elements of an array\n");
	printf("\nEnter the size of array: \n");
	scanf("%d", &n);
	printf("\nEnter the elements: \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("\nElements of array are: \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	printf("\n");
	return(0);
}
