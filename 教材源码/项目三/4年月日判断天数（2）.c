#include<stdio.h>
int main()
{
	int year,month,day;
	int s=0;
	scanf("%d-%d-%d", &year,&month,&day);
	switch(month)
	{//case匹配到且没有break的话，会执行到结束 
		case 12:  s+=30;      //加上11月的30天
		case 11:  s+=31;      //加上10月的31天
		case 10:  s+=30;      
		case  9:  s+=31; 
		case  8:  s+=31; 
		case  7:  s+=30;
		case  6:  s+=31; 
		case  5:  s+=30;
		case  4:  s+=31; 
		case  3:  s+=28;      //先按平年算，加上2月的28天
		case  2:  s+=31;      //加上 1月的31天
		case  1:  s+=day;     //加上当月天数
	}
	if((year%4==0 && year%100!=0 || year%400==0) && month>=3) 
         s++;//闰年的话多加一天
	printf("%d\n",s);
	return 0;
}
