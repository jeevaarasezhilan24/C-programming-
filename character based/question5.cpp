#include <stdio.h>

int main() {
    char a,b;   
    scanf("%c", &a); 	     
    scanf("%c",&b);

    if (a==b) {
        printf("Both characters are same");
    } else {
        printf("both are not same");
    }

    return 0;
}
