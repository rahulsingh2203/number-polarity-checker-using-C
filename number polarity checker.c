#include<stdio.h>
#include<conio.h>

void main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a > 0){
		printf("\n entered number is positive integer.");
	}
	else if(a == 0){
		printf("\n entered number has value equals to zero");
	}
	else{
		printf("\n entered number is negative integer");
	}
}
