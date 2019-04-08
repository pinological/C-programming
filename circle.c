#include<stdio.h>
void main(){
	int radius, area, cir, pie;
	pie = 22/7;
	printf("Please enter the radius :");
	scanf("%d", &radius);
	cir = radius*pie*2;
	area = pie*radius*radius;
	printf("area of circle is : %d \n",area);
	printf("circumference is : %d",cir);
	}
