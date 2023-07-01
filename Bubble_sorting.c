#include<stdio.h>
int main()
{
  int n,i,pass,a[100],t;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(pass=1;pass<n;pass++)
  {
   for(i=0;i<n-pass;i++)
   {
     if(a[i]<a[i+1])
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
}
   printf("sorted numbers");
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
}
