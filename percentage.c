#include<stdio.h>
void main(){
	float a, b, c, d, e, sum, per;
	printf("first subject :");
	scanf("%f",&a);
	printf("second subject :");
	scanf("%f",&b);
	printf("third subject :");
	scanf("%f",&c);
	printf("forth subject :");
	scanf("%f",&d);
	printf("fifth subject :");
	scanf("%f",&e);
    sum = a+b+c+d+e;
    per = (sum/500)*100;
    printf("your percentage is %f",per);
	
}
