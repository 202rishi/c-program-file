//wapc to print an array using function.

#include<stdio.h>
void printar(int b[],int N){
    for(int i=0;i<N;i++){
        printf("%d ",b[i]);
    }
}
int main(){
    int n;
    printf("enter N");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printar(a,n);
    return 0;
}