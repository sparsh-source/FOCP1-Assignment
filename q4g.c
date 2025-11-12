#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("numbers are a=%d and b=%d\n",a,b);

    int x=a,y=b;

    temp=a;   
    a=b;
    b=temp;
    printf("after swapping a=%d and b=%d\n",a,b);

    a=x;
    b=y;

    a=a+b; 
    b=a-b;
    a=a-b;
    printf("after swapping a=%d and b=%d\n",a,b);

    a=x;
    b=y;

    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping a=%d and b=%d\n",a,b);

    a=x;
    b=y;

    int *p=&a;
    int *q=&b;
    *p=*q;
    *q=temp;
    printf("after swapping a=%d and b=%d",a,b);

}