#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z'){
		printf("the entered character is an alphabet");
	}
	else if(ch>='A'&&ch<='Z'){
		printf("the entered character is an alphabet ");
	}
	else {
		printf("the entered character is not an alphabet ");
	}
	return 0 ;
}