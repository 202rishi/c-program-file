// write a c program to rake m x n matrix from user and show out put like this
/*
1 2 3 | 6
4 5 6 | 15
7 8 9 | 24
******
12 15 18

*/
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
    for(int j=0;j<n;j++){
    sumr=sumr+a[i][j];
    sumc=sumc+a[j][i];
    printf("%d ",a[i][j]);
    }
    printf(" | %d\n",sumr);
    sumc=0;

}
printf("*******\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sumc=sumc+a[j][i];
    }
    printf("%d ",sumc);
    sumc=0;
}
return 0;


}

