#include<stdio.h>
int main()
{
  int x;
  printf("\n Enter a number ");
  scanf("%d",&x);
  int dig=0;
  int i=0;
  int arr[20];
  while(x!=0)
  {
    dig=x%2;
    arr[i]=dig;
    i++;
    x=x/2;
  }
  for(int k=i-1;k>=0;k--)
  {
    printf("%d",arr[k]);
  }
}
