#include<stdio.h>
main(){
	
	int a=10;
	int b=30;
	
	printf("enter the first number:-",a);
	scanf("%d",&a);
	
	printf("enter the second number:-",b);
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A=%d\n",a);
	
	printf("B=%d",b);
		
}