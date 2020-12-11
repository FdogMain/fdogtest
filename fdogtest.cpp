/*输入三个整数，分别存在变量x,y,z中。编程输出最大数。*/ 
#include<stdio.h>
int main(void)
{
	int i;
	int j[3];
	int max;
	max=j[0];
	for(i=0;i<=2;i++)
	{ 
	scanf("%d",&j[i]); 
	} 
	for(i=0;i<=2;i++)
	{
		if(max<j[i])
		{ 
			max=j[i];
		}
	} 
		printf("你输入的三个数中最大的是：%d",max);
	return 0;
}

