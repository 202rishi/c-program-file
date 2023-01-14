// wac to check weahter given number is perfect square or not. Flag(1 or 0) and countervalrable(1++ or 1--)
#include<stdio.h>
int psq(int a){
    for(int i=1;i<a;i++){
        if(a==i*i){
            return 1;
        }
        
        
    }
    return 0;
}
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(psq(n)==1){
        printf("is perfect square");

    }
    if(psq(n)==0){
        printf("notperfect square");
    }
    return 0;
}