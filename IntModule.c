#include<stdio.h> 
int InputData()
{
	int num;
	printf("ют╥б : ");
	scanf("%d",&num);
	
	return num;
}
void IntSum(int a,int b)
{
	printf("%d+%d=%d",a,b,a+b);
}
void IntSub(int a,int b)
{
	printf("%d-%d=%d",a,b,a-b);
}
void IntMul(int a,int b)
{
	printf("%d*%d=%d",a,b,a*b);
}
void IntDiv(int a,int b)
{
	printf("%d/%d=%d",a,b,a/b);
}
