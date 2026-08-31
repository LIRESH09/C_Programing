//Number pyramid
#include<stdio.h>
int main(){
    int n;
    printf("Enter No.of Lines :");
    scanf("%d",&n);
    int nsp = n - 1;
    for(int i=1;i<=n;i++){
          
        for(int q=1;q<=nsp;q++){     // For Spaces
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){       // Number Triangle
            printf("%d",j);
        
        }
        int a = i -1;
        for(int k=1;k<=i-1;k++){
            printf("%d",a);         // For Extra Numbers 
            a--;
        }
        printf("\n");
    }



    return 0;
}