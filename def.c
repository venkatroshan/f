#include <stdio.h>
int main{
	int miniutes;
	int h,m;
	scanf("%d",&miniutes);
	h=min/60;
	m=min%60;
	printf("the hour  %d\n",h);
	if(min%60==0)
	{
	printf("the minutes  0" );
	}
	else
	printf("the minutes  %d",m);
	return 0;
}
