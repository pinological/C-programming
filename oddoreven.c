#include<stdio.h>
void main(){
	int num, ans;
	printf("Enter a number :");
	scanf("%d",&num);
	ans = num%2;
	if (ans == 0){
		printf("%d is a even number", num);
	}
	else {
		printf("%d is a odd number",num);
	}
}
