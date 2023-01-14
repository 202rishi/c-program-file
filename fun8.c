// wap in c to scan an array from user and also print it using functons.
#include<stdio.h>
void scanar(int b[],int N){
    printf("enter value of array");
    for(int i=0;i<N;i++){
        scanf("%d",&b[i]);
    }
} 
void printar(int b[],int N){
    printf("array is\n");
    for(int i=0;i<N;i++){
        printf("%d  ",b[i]);
    }
}
int main(){
    int n;
    printf("enter value of N");
    scanf("%d",&n);
    int a[n];
    scanar(a,n);
    printar(a,n);
    return 0;
}