#include<stdio.h>
#include<string.h>
int main()
{
 char t[20],s1[20][20],min[20];
 int i,n,j,index;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n names");
 for(i=0;i<n;i++)
 scanf("%s",&s1[i]);
 for(i=0;i<n;i++)
 {
  strcpy(min,s1[i]);
  index=i;
  for(j=i;j<n;j++)
  {
    if(strcmp(s1[j],min)<0)
    {
      strcpy(min,s1[j]);
      index=j;
    }
  }
  strcpy(t,s1[i]);
  strcpy(s1[i],s1[index]);
  strcpy(s1[index],t);
 }
 printf("\n names are sorted order");
 for(i=0;i<n;i++)
 printf("%s\t",s1[i]);
}
