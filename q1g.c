#include<stdio.h>
int main(){
    int a,b,rem,arm=0;
    printf("enter number");
    scanf("%d",&a);
    b=a;
    while(b>0){
        rem=b%10;
        arm=rem*rem*rem+arm;
        b=b/10;
    }
    if(arm==a){
        printf("armstrong");
    }else{
        printf("not armstrong");
    }
    return 0;
}