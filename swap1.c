#include<stdio.h>
main(){
	
	int a;
	int b;
	int temp;
	
	printf("enter  first num :-");
	scanf("%d",&a);
	
	printf("enter  second num :-");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("A=%d\n",a);
	
	printf("B=%d",b);
}