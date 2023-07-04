// Accept n numbers array and display array sorted order using insertion sort.

#include<stdio.h>
void main()
{
 int i,k,n,key,a[20],t;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
   key=a[i];
   for(k=i-1;k>=0&&key<a[k];k--)
   {
     t=a[k+1];
     a[k+1]=a[k];
     a[k]=t;
   }
    a[k+1]=key;
  }
  printf("sorted list");
  for(i=0;i<n;i++)
  printf("\t%d",a[i]);
}
