#include<stdio.h>
void main(){
	int i, n, m;
	printf("Enter a number you want multiplication of :");
	scanf("%d", &n);
	for ( i = 1; i <= 10; i++ ) {
		m = n*i;
		printf("Number : %d * %d = %d \n", n,i,m);
	}
}
