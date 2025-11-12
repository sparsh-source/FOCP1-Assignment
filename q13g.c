#include <stdio.h>
int main(){
    int num;
    printf("enter no of elements :");
    scanf("%d",&num);

    int arr[num];

    for(int i=0;i<num;i++){
    printf("enter elements");
    scanf("%d",&arr[i]);
    }

    printf("your array is :\n");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<num;i++){
        if((i==0 || arr[i]>=arr[i-1]) && (i==num-1 || arr[i]>=arr[i+1])){
            printf("\npeak element is %d at index %d",arr[i],i);
        }
    }
    return 0;
}