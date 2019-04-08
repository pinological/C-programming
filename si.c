#include<stdio.h>
void main(){
	float p, t, r, si;
	printf("enter principle :");
	scanf("%f", &p);
	printf("enter time(Year) :");
	scanf("%f", &t);
	printf("enter rate :");
	scanf("%f", &r);
	si = (p*t*r)/100;
	printf("simple intress is %f",si);
}
