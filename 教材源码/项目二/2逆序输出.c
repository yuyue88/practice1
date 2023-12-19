#include <stdio.h>
main()
{
	int a,b,c,d,x;
	printf("请输入一个四位数:");
	scanf("%d",&x);
	if (x>1000&&x<9999)
	{
		a=x/1000;     //计算千位
		b=x/100%10;   //计算百位
		c=x/10%10;    //计算十位
		d=x%10;       //计算个位
	}
	printf("逆序输出四位数：%d\n",(d*1000+c*100+b*10+a));
}
