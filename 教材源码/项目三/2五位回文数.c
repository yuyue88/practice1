#include<stdio.h>
main()
{
	int a,b,c,d,e,x;
	printf("输入一个5位的正整数：");
	scanf("%d",&x);
	if(x>9999&&x<100000)
	{
		a=x/10000;
		b=x/1000%10;
		c=x/100%10;
		d=x/10%10;
		e=x%10;
	}
	printf("逆序输出四位数：%d\n",(e*10000+d*1000+c*100+b*10+a));
}
