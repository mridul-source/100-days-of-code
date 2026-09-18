#include<stdio.h>
int main()
{
int n;
int i=1;
int sum=0;
printf("enter an integer");
scanf("%d" ,&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("integer %d" ,sum);
return 0;
}
