#include<stdio.h>
void main(){
	int a, b, c;
	printf("enter your first number :");
	scanf("%d", &a);
	printf("Enter your second number :");
	scanf("%d", &b);
	printf("Enter your third number :");
	scanf("%d", &c);
	if ((a>b)&&(a>c)) {
		printf("The grater number is : %d",a);
	}
	if ((b>a)&&(b>c)){
		printf("The grater number is : %d",b);
	}
	if ((c>a)&&(c>a)){
		printf("The grater number is : %d",c);
	}
	
}
