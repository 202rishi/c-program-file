// wap to check weather a matrix is identy matrix or not.
/*
1 0 0
0 1 0
0 0 1
*/
#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("enter value of m(row)");
    scanf("%d",&m);
    printf("enter value of n(column)");
    scanf("%d",&n);
    int a[m][n];
    printf("enter values");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
    }
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j && a[i][j]==1){
            sum=sum+1;

        }
    }
}
printf("sum %d ",sum);
if(sum==n){
    printf("it is identry matrix");

}
else
printf("its not indenty matrix");
return 0;


}