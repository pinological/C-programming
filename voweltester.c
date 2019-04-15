#include<stdio.h>
void main(){
	char letter;
	printf("please inter a letter :");
	scanf("%c", &letter);
	if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ) {
		printf("The letter you enter is a vowel");
	}
	else {
		printf("Ther letter you enter is consoenent");
	}
}
