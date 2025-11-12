#include <stdio.h>
int main() {
    int a, b,temp;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("a:%d b:%d",a,b);
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }

    printf("\nhcf is %d",a);
    return 0;
}