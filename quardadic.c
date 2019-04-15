#include<stdio.h>
#include<math.h>
void main(){
	float a, b, c, lol, XD, mathboi;
	printf("inter  a :");
	scanf("%f", &a);
	printf("inter  b :");
	scanf("%f", &b);
	printf("inter  c :");
	scanf("%f", &c);
	lol = ((b*b)-(4*a*c));
	XD = 2*a;
	mathboi = sqrt(lol/XD);
	if (mathboi > 0) {
		printf("the number you wrote is real \n");
		printf("you answer is :%d", mathboi);
	}  
	else if (mathboi == 0) {
		printf("the number you wrote is real and equal \n");
		printf("you answer is :%d", mathboi);
	}
	else {
		printf("the number you wrote is not real \n");
		printf("you answer is :%d", mathboi);
	}
}
