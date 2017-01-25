/* ************************************************************************
 *       Filename:  13-任意次方的最后三位数.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月08日 15时44分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/



/*************************************************************************
    > File Name: 13-任意次方的最后三位数.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年10月08日 星期六 15时44分00秒
 ************************************************************************/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,s=1;
	int i;
	int a[3]={0};

	printf("Input x^y\n");
	scanf("%d %d",&x,&y);
	printf("%d %d\n",x,y);
	for(i=0;i<y;i++)
		s*=x;
	printf("x^y=%d\n",s);

//	if(s<1000)
//		printf("%d\n",s);
//	else
//		printf("%d\n",s%1000);
	if(s<1000){
		for(i=0;i<3;i++){
			a[i]=s%10;
			a[i]/=10;
		}
	}else{
		for(i=0;i<3;i++){
			a[i]=s%10;
			printf("%d ",a[i]);
			a[i]/=10;
		}
	}

	return 0;
}

