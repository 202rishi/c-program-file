// wap in c to input an 2d array and print the sum and average of all the elements.


#include<stdio.h>
int main(){
    int m,n,sum=0,avg=0;
    printf("enter value of m(row)");
    scanf("%d",&m);
    printf("enter value of n(column)");
    scanf("%d",&n);
    int a[m][n];
    printf("enter values");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&a[i][j]);
    sum=sum+a[i][j];
    }
}

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
    }
    printf( "sum=%d \n avg= %d",sum,sum/2);
return 0;


}