#include<stdio.h>
main()
{
	int a,b;
	for(a=200;a<300;a++)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0)break; //�����������ѭ������������
		}	
			if(b>=a)         //���b>=a��Ϊ�����������
			printf("%d\t",a);
			
		
	}
	
	
	
}
