#include <stdio.h>
int main(){
    int nt,num;

    printf("enter the no of terms\n");
    scanf("%d",&nt);

    int arr[nt];

    for(int i=0;i<nt;i++){
    printf("enter %d term",i+1);
    scanf("%d",&arr[i]);
    }
    printf("your array is :");
    for(int i=0;i<nt;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
    printf("which number you want to search :\n");
    scanf("%d",&num);

    int found=-1;
    for(int i=0;i<nt;i++){
        if(arr[i]==num){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("number %d found at index %d",num,found+1);
    }else{
        printf("number not found");
    }
    return 0;
}