#include<stdio.h>

void subtract(int a, int b){
	
int subtract;
subtract = a-b;
printf("%d", subtract);
}
int main(){
	int Number1, Number2;
 
 
 printf("Enter Number1=");
 scanf("%d",&Number1);
 
 printf("Enter Number2=");
 scanf("%d",&Number2);
 subtract(Number1, Number2);
 return 0;
}
 
