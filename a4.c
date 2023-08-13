#include<stdio.h>
void accept(int a[100],int n)
{
 int i;
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("enter random array");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void disp(int a[100],int n)
{
 int i;
 printf("\n sorted array");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void selection(int a[100],int n)
{
 int i,min,index,t,j;
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
}
int main()
{
 int a[100],i,n;
 printf("enter limit");
 scanf("%d",&n);
 accept(a,n);
 selection(a,n);
 disp(a,n);
}
