//print a rectangle box
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Number of Rows :");
    scanf("%d",&n);
    printf("Enter Number of Columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int a = n/2 + 1;
            if(i==n && j==m) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}