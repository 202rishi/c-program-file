//wap in c to check weather 2 matrix are equal or not .
#include<stdio.h>
int main(){
    int n;
    printf ("enter vale of n: ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("enter value of A matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter value of B matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("A\n");
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
    }
    printf("B\n");
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d ",b[i][j]);
    printf("\n");
    }
    int m=0,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==b[i][j]){
                m++;

            }
            else{
            k++;
            }
        }
    }

if(k>0){
    printf("It is not equal matrix");
}
else{
printf("it is equal matrix");
}
return 0;
}