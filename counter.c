#include<stdio.h>
void main(){
	int n, i;
	printf("enter a number");
	scanf("%d", &n);
	for (i=n;i>=2;i--){
		printf("%d*",i);
	}
	printf("1");
}
