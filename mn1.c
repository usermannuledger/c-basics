#include<stdio.h>
void main()
{
	int  m, h;
	printf("enter the value of the m ");
	scanf("%d",&m);
	h = m/60;
	m = m%60; 
	
	printf("hours  is %d", h);
	printf("minutes is %d",m);
}
