//Write a program in c to find sum of all even number in user given range.
#include<stdio.h>
int main(){
    int a,b,d=0;
    printf("Enter range of number");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%2==0){
            d+=i;
        }
    }
    printf("sum of even no. is %d",d);
    return 0;

    }
