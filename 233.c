#include<stdio.h>
#include<string.h>
int main(){
int year,month;
int a,b;
int month2;
scanf ("%d%d",&year,&month);
a=year%4;
b=year%400;
if (a==0 && b==0)//判断是否为闰年
    month2=29;
    else
    month2=28;
switch (month)//判断月份
{//31日的月份
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:printf("31");
    break;
case 4://30日的月份
case 6:
case 9:
case 11:printf("30");
    break;
case 2:printf("%d",month2);//2月
    break;
default:printf("请输入一个有效的月份");//输入错误
    break;
}
    return 0;
}