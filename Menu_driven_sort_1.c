#include<stdio.h>
int main()
{
  int i,n,ch,a[100];
  void insertion(int a[100],int n);
  void bubble(int a[100],int n);
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  do
  {
    printf("\n1-insertion \n2-bubble \nenter choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insertion(a,n);
              break;
      case 2:bubble(a,n);
             break;
      default:printf("invalid choice");
              break;
     }
   }while(ch<3);
}
void insertion(int a[100],int n)
{
  int i,j,t,num;
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
   printf("insertion sorted");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}
void bubble(int a[100],int n)
{
  int pass,i,t;
  for(pass=1;pass<n;pass++)
  {
   for(i=0;i<n-pass;i++)
   {
    if(a[i]>a[i+1])
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
  }
 }
 printf("\n bubble sorted");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
