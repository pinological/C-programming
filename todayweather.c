#include<stdio.h>
void main(){
	int temp;
	printf("Please Enter a temeprature in C :");
	scanf("%d", &temp);
	if ( temp > 25){
	printf("Today is hot");	
	}
	else {
		printf("Today is cold");
	}
}
