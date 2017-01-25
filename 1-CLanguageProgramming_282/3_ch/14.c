/* ************************************************************************
 *       Filename:  14.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月08日 15时57分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/



/*************************************************************************
    > File Name: 14.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年10月08日 星期六 15时57分37秒
 ************************************************************************/

#include <stdio.h>
int mons[12]={31,28,31,30,31,30,
			31,31,30,31,30,31
};

int mon_day[12]={0,31,59,90,120,151,
				181,212,243,273,304,334
};

int loop_year(int y)
{
	if(y%4==0 && y%400!=0 || y%100==0)
		return 1;
	
	return 0;
}

int total(int y,int m,int d)
{
	int ret;
	if(d > mons[m]){
		printf("Mon %d not %d\n",m,d);
		return -1;
	}
	if(loop_year(y) && m>2 ){
		ret=mon_day[m]+d+1;
	}else{
		ret=mon_day[m]+d;
	}

}

int main(int argc, char *argv[])
{
	int year,mon,day;
	int count;

	printf("Input year:mon:day\n");
	scanf("%d %d %d",&year,&mon,&day);
	if(mon>12 & day > 31){
		printf("data no avild\n");
	}

	count=total(year,mon,day);
	printf("%d\n",count);
	return 0;
}
