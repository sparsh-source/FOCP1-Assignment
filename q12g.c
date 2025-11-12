#include <stdio.h>
#include <windows.h>
int main(){
    int terms;

    printf("how many terms you want to add in array");
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
    printf("\n");
    int max=arr[0],min=arr[0];
    for(int i=0;i<terms;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("max value is :%d\n",max);
    printf("min value is :%d",min);
}