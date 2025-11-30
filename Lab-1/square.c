#include<stdio.h>
int main() 
{
int s=0;
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  s+=i*i;
}
printf("square :%d",s);
}
