#include<stdio.h>
main()
{
	int a,b;
	for(a=200;a<300;a++)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0)break; //如果可以跳出循环，不是素数
		}	
			if(b>=a)         //如果b>=a则为素数，并输出
			printf("%d\t",a);
			
		
	}
	
	
	
}
