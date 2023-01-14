// wap in c to input an elemnt with position and add it in array.

#include<stdio.h>
int main(){
    int n,e,p;
    printf("enter element");
    scanf("%d",&e);
    printf("element position");
    scanf("%d",&p);
    printf("enter Value of N");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(int i=n;i>=p;i--){
        a[i]=a[i-1];       
    }
    a[p-1]=e;
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}