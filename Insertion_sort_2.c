#include<stdio.h>
int main()
{
 int a[100],i,n;
 void insertion(int a[100],int n);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 insertion(a,n);
}
void insertion(int a[100],int n)
{
 int i,j,num,t;
 for(i=1;i<n;i++)
 {
   num=a[i];
   for(j=i-1;j>=0&&num<a[j];j--)
   {
     t=a[j+1];
     a[j+1]=a[j];
     a[j]=t;
   }
  }
  printf("sorted order");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
