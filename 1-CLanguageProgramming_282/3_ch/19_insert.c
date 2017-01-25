
#include <stdio.h>

void sort_insert(int a[],int len)
{
	int i,j,t;

	for(i=1;i<len;i++){
		t=a[i];
		j=i;
		while(t<a[j-1] && j>0){
			a[j]=a[j-1];
			j--;
		}
		a[j]=t;
	}
}



int main(int argc, char *argv[])
{
	int s[6]={5,4,7,6,1,9};
	int i;

	sort_insert(s,6);
	for(i=0;i<6;i++){
		printf("%d ",s[i]);
	}
	printf("\n");
	return 0;
}
