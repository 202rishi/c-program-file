// Using function find sum of two digit .

#include<stdio.h>
int sum(int,int);
int main(){
    int x,y,z;
    printf("enter value of x,y");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("sum is :%d",z);
    return 0;
}
int sum(int a,int b){
return (a+b);
}