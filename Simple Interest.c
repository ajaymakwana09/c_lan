#include<stdio.h>
main(){
	
	float b;
	float hb;
	float hbb;
	float total;
	
	
	printf("enter the Base value=");
	scanf("%f",&b);
	
	printf("enter the Height value=");
	scanf("%f",&hb);
	
	printf("enter the Height value=");
	scanf("%f",&hbb);
	
	total = b * hb * hbb/100;
	printf("enter the triangle area value of =%f",total);
}