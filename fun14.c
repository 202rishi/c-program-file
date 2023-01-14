// wap in to find max and min between two given number using function.

#include<stdio.h>
int max_min(int a,int b){
    if(a>b){
        return 1;
    }
    else
    return 0;
}
int main(){
    int a,b;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    if(max_min(a,b)){
        printf("%d is max and %d is min",a,b);
    }
    else
    printf("%d is max and %d is min",b,a);
    return 0;
}