#include <stdio.h>
int main(){
    int n,t1=0,t2=1,nextnum;
    printf("enter no of terms");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%d,",t1);
    nextnum=t1+t2;
    t1=t2;
    t2=nextnum;
    }
    return 0;
}