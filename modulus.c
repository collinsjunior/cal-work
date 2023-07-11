#include<stdio.h>

void modulus(int a, int b){
	
int Divide;
Divide = a%b;
printf("%d", Divide);
}
int main(){
	int Number1, Number2;
 
 
 printf("Enter Number1=");
 scanf("%d",&Number1);
 
 printf("Enter Number2=");
 scanf("%d",&Number2);
 modulus(Number1, Number2);
 return 0;
}
 
