#include<stdio.h>
void disp(int a[100],int n)
{
 int i;
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("enter n random numbers");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void insertion(int a[100],int n)
{
 int i,num,j,t;
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
 printf("\n sorted list");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
int main()
{
 int a[100],i,n;
 printf("enter limit");
 scanf("%d",&n);
 disp(a,n);
 insertion(a,n);
}
