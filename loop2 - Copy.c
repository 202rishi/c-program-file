#include<stdio.h>
int main(){
    int n,i;
    int a=0;
    printf("Enter Value Of 'n'");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a+=i;
    }
    printf("sum of n natural no. is %d \n",a);
    for ( i=n;i>=1;i--){
        printf("%d \n",i);
    }
    return 0;

}