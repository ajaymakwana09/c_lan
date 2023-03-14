#include<stdio.h>
main(){
	
	int a;//200
	int b;//300
	
	printf("enter the tewo value :-");
	scanf("%d %d",&a ,&b);
	
	a=a*b; //200*300
	b=a/b; //60000/300
	a=a/b; //60000/200
	
	printf("a=%d b=%d",a ,b);
}