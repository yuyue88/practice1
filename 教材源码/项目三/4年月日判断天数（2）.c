#include<stdio.h>
int main()
{
	int year,month,day;
	int s=0;
	scanf("%d-%d-%d", &year,&month,&day);
	switch(month)
	{//caseƥ�䵽��û��break�Ļ�����ִ�е����� 
		case 12:  s+=30;      //����11�µ�30��
		case 11:  s+=31;      //����10�µ�31��
		case 10:  s+=30;      
		case  9:  s+=31; 
		case  8:  s+=31; 
		case  7:  s+=30;
		case  6:  s+=31; 
		case  5:  s+=30;
		case  4:  s+=31; 
		case  3:  s+=28;      //�Ȱ�ƽ���㣬����2�µ�28��
		case  2:  s+=31;      //���� 1�µ�31��
		case  1:  s+=day;     //���ϵ�������
	}
	if((year%4==0 && year%100!=0 || year%400==0) && month>=3) 
         s++;//����Ļ����һ��
	printf("%d\n",s);
	return 0;
}
