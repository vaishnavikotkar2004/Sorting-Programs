#include<stdio.h>
int main()
{
 int a[100],n,i,j,t,index,min;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
   min=a[i];
   index=i;
   for(j=i;j<n;j++)
   {
     if(a[j]<min)
      {
       min=a[j];
       index=j;
      }
   }
   t=a[i];
   a[i]=a[index];
   a[index]=t;
  }
  printf("sorted order of array");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
