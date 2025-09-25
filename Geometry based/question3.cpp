#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter the three values of three sides:\n");
	scanf("%f\n%f\n%f",&a,&b,&c);
	if(c*c==a*a+b*b){
		printf("the triangle is a right angled one");
	}
	else{
		printf("the triangle is not a right angled one");
	}
	return 0;
	
	
}