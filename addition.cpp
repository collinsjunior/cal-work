#include<stdio.h>



void add(int a, int b){
	
int sum;
sum = a+b;
printf("%d", sum);
}
int main(){
	int Number1, Number2;
 
 
 printf("Enter Number1=");
 scanf("%d",&Number1);
 
 printf("Enter Number2=");
 scanf("%d",&Number2);
 add(Number1, Number2);
 return 0;
}
 
