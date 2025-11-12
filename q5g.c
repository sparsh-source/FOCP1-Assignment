#include <stdio.h>
int main(){
    float x,y;
    printf("enter value of x and y");
    scanf("%f %f",&x,&y);
    
    if(x>0 && y>0){
        printf("point lies in 1 quadrant");
    }
    else if(x<0 && y>0){
        printf("point lies in 2 quadrant");
    }
    else if(x>0 &&y<0){
        printf("point lies in 3 quadrant");
    } 
    else if(x<0 && y<0){
        printf("point lies in 4 quadrant");
    }    
    else if(x==0 && y==0){
        printf("point lies on origin");
    }    
    else if (x == 0){
        printf("The point lies on the Y-axis.\n");
    }    
    else if (y == 0){
        printf("The point lies on the X-axis.\n");
    }
    return 0;
}