#include<stdio.h>
#include<string.h>
int main(){
int year,month;
int a,b;
int month2;
scanf ("%d%d",&year,&month);
a=year%4;
b=year%400;
if (a==0 && b==0)//�ж��Ƿ�Ϊ����
    month2=29;
    else
    month2=28;
switch (month)//�ж��·�
{//31�յ��·�
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:printf("31");
    break;
case 4://30�յ��·�
case 6:
case 9:
case 11:printf("30");
    break;
case 2:printf("%d",month2);//2��
    break;
default:printf("������һ����Ч���·�");//�������
    break;
}
    return 0;
}