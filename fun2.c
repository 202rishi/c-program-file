// write a program in c to print all number which are prime between given range using user define function.

#include<stdio.h>
int prime(int);
int main(){
    int a,b;
    printf("enter the range from to thhis ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(prime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}
int prime(int x){
    int s=0;
    for(int i=1;i<=x;i++){
        if(x%2==0){
            s++;
        }
    }
    if(s<=2){
        return(1);
    }
    else{
        return(0);
    }
        
    }
