#include<stdio.h>
int main()
{
    int num[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day,sum;
    scanf("%d-%d-%d",&year,&month,&day);
    sum=0;
    if((year%4==0&&year%100!=0)||year%400==0)
    {
    	for(int i = 0; i < month-1; i++)
    	{
     		if(i==1)//�����Ҷ��£�����Ҫ�������е�28��������һ��29
     	    	sum = sum + 29;
     		else
        		sum = sum + num[i];
    	}
    	sum = sum + day;
   			printf("%d\n",sum);
    }
    else
    {//ƽ��Ļ��������
        for(int i = 0; i < month-1; i++)
            sum = sum + num[i];
        sum = sum + day;
        printf("%d\n",sum);
    }
    return 0;
}
