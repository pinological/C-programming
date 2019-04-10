#include<stdio.h>
void main(){
	float rate, quantity, total;
	rate = 100;
	printf("The Rate of Potato is 100 per KG \n");
	printf("please enter the quatity of potato you want to buy :");
	scanf("%f", &quantity);
	total = rate*quantity;
	if (total >= 3000) {
		total = total - (total*0.1);
		printf("you total is %f :",total);
	} 
	else {
		printf("you total is %f :",total);
	}
	
}
