#include<stdio.h>
int main()
{
 int a[50],b[50],c[100],i,j,k,n1,n2,n3;
 printf("enter limit of first array");
 scanf("%d",&n1);
 printf("enter n numbers");
 for(i=0;i<n1;i++)
  scanf("%d",&a[i]);
 printf("enter limit of second array");
 scanf("%d",&n2);
 printf("enter n numbers");
 for(i=0;i<n2;i++)
 scanf("%d",&b[i]);
 n3=n1+n2;
 i=j=k=0;
 while(i<n1&&j<n2)
 {
  if(a[i]<b[j])
   c[k++]=a[i++];
  else
   c[k++]=b[j++];
 }
 while(i<n1)
 c[k++]=a[i++];
 while(j<n2)
 c[k++]=b[j++];
 printf("merge array");
 for(i=0;i<n3;i++)
 printf("%d\t",c[i]);
}

