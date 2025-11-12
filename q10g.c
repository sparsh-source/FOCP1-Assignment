#include <stdio.h>
int main(){
    int nt,num,found=0;

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

    for(int i=0;i<nt;i++){
        if(arr[i]==num){
            printf("number %d found at index %d\n",num,i+1);
            found+=1;
        }
    }
    if(found==0){
        printf("number not found");
    }else{
        printf("number found %d times",found);
    }
    return 0;
}