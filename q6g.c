#include <stdio.h>
int main(){
    char dorb;
    char d,b;
    long long binary,decimal=0,base=1,rem,normal,normaln=0,place=1,num;

    printf("to convert binary to decimal (type d)\n");
    printf("to convert decimal to binary (type b)\n");
    printf("enter d or b");
    scanf(" %c",&dorb);

    if(dorb=='d'){
        printf("enter binary number\n");
        scanf("%lld",&binary);

        int extra=binary;

        while(binary!=0){
            rem=binary%10;
            decimal+=rem *base;
            binary/=10;
            base*=2;
        }
        printf("%lld in decimal",decimal);
    }

    else if(dorb=='b'){
        printf("enter decimal number\n");
        scanf("%lld",&normal);

        int extra=normal;

        while(normal!=0){
            rem=normal % 2;
            normaln+=rem * place;
            normal/=2;
            place*=10;
        }
        printf("%lld in binary",normaln);
    }else{
        printf("invalid input");
    }
    return 0;
}