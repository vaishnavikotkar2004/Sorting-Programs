#include<stdio.h>
#include<string.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100],t;
int main()
{
 int i,n,pass;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n students info");
 for(i=0;i<n;i++)
 {
  printf("enter roll no name percentage");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 for(pass=1;pass<n;pass++)
 {
   for(i=0;i<n-pass;i++)
   {
     if(s1[i].per<s1[i+1].per)
     {
       t=s1[i];
       s1[i]=s1[i+1];
       s1[i+1]=t;
     }
   }
  }
 printf("\n display student info \n");
 for(i=0;i<n;i++)
 {
   printf("\n%d\t%s\t%f",s1[i].rno,s1[i].name,s1[i].per);
 }
}
