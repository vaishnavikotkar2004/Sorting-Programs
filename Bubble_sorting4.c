#include<stdio.h>
#include<string.h>
int main()
{
 int i,n,pass;
 char s1[10][10],t[10];
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n cities");
 for(i=0;i<n;i++)
 scanf("%s",&s1[i]);
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(strcmp(s1[i],s1[i+1])>0)
   {
    strcpy(t,s1[i]);
    strcpy(s1[i],s1[i+1]);
    strcpy(s1[i+1],t);
    }
  }
 }
 printf("sorted order");
 for(i=0;i<n;i++)
 printf("\n%s",s1[i]);
}
