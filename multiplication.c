#include<stdio.h>

void Multiply(int a, int b){
	
int Multiply;
Multiply = a*b;
printf("%d", Multiply);
}
int main(){
	int Number1, Number2;
 
 
 printf("Enter Number1=");
 scanf("%d",&Number1);
 
 printf("Enter Number2=");
 scanf("%d",&Number2);
 Multiply(Number1, Number2);
 return 0;
}
 
