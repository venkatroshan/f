#include<stdio.h>
int main()
{
int n,temps,i,j,a[20];
printf("enter array  numbers");
scanf("%d",&n);
printf("enter  numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<=n;i++)
{
    printf("%d%d",a[i],i);
}
}
