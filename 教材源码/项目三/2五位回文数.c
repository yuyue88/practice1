#include<stdio.h>
main()
{
	int a,b,c,d,e,x;
	printf("����һ��5λ����������");
	scanf("%d",&x);
	if(x>9999&&x<100000)
	{
		a=x/10000;
		b=x/1000%10;
		c=x/100%10;
		d=x/10%10;
		e=x%10;
	}
	printf("���������λ����%d\n",(e*10000+d*1000+c*100+b*10+a));
}
