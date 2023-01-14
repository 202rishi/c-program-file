//wap in c to input an 2d array and find the sum of indivisula row and indivisula column.
#include<stdio.h>
#include<stdio.h>
int main(){
    int m,n,sumr=0,sumc=0;
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
        sumr=sumr+a[i][j];
    }
    printf("%d th row sum is %d \n",i+1,sumr);
    sumr=0
    ;
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sumc=sumc+a[j][i];
    }
    printf("%d th column sum is %d \n",i+1,sumc);
    sumc=0
    ;
}
return 0;


}

