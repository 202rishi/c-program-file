#include<stdio.h>
int main(){
    int n,f=0,s=1,t=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",t);
        f=s;
        s=t;
        t=f+s;
    }
    return 0;
}