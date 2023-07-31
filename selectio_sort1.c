// descending order...
#include<stdio.h>
#include<string.h>
int main()
{
 int i,n,a[20],index,max,j,t;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  max=a[i];
  index=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]>max)
   {
    max=a[j];
    index=j;
   }
  }
  t=a[i];
  a[i]=a[index];
  a[index]=t;
 }
 printf("\n descending order");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
