/*���������������ֱ���ڱ���x,y,z�С��������������*/ 
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
		printf("��������������������ǣ�%d",max);
	return 0;
}

