#include<stdio.h>
main()
{
int i,n,a[10];
printf("enter the number of terms");
scanf("%d",&n);
//printf("enter the elements");

a[0]=0;
a[1]=1;
for(i=2;i<n;i++)
{
a[i]=a[i-1]+a[i-2];
}
printf("the fibonacci series is\t");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
