//Take 4 postive integers input and print the greatest of them
#include<stdio.h>
  int main()
{
  int a;
  int b;
  int c;
  int d;
  printf("Enter a 1st Number :");
   scanf("%d",&a);
  printf("Enter a 2nd Number :");
   scanf("%d",&b);
  printf("Enter a 3rd Number :");
   scanf("%d",&c);
  printf("Enter a 4th Number :");
   scanf("%d",&d);

  if(a>b && a>c && a>d)
  {
    printf("%d is greatest ",a);
  }
  if(b>a && b>c && b>d)
  {
    printf("%d is greatest ",b);
  }
  if(c>a && c>b && c>d)
  {
    printf("%d is greatest ",c);
  }
  if(d>a && d>b && d>c)
  {
    printf("%d is greatest ",d);
  }

    return 0;
}