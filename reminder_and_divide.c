#include<stdio.h>
void main(){
	int rem, q, a, b;
	printf("Inter the number you want to divide with :");
	scanf("%d", &a);
	printf("inter the number you want to divide :");
	scanf("%d", &b);
	q = a/b;
	rem = a%b;
	printf("the answer is :%d \n", q);
	printf("the reminder is :%d", rem);
}
