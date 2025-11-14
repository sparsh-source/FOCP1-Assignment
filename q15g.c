#include <stdio.h>
int main(){
    int terms;
    printf("enter no of terms");
    scanf("%d",&terms);

    int arr[terms];

    for(int i=0;i<terms;i++){
        printf("enter terms");
        scanf("%d",&arr[i]);
    }
    printf("your array is :");                                
    for(int i=0;i<terms;i++){
        printf("%d ",arr[i]);
    }
    int last=arr[terms-1];
    for(int i=terms-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("\nyour new array is :");
    for(int i=0;i<terms;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}