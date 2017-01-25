
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(a,b) {a^=b;b^=a;a^=b;}

#if 0
void sort_insert(int a[],int len)
{
	int i,j,t;

	printf("11111111\n");
	for(i=1;i<len;i++){
		j=i-1;
		t=a[i];
		while(t<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
}
#else
void sort_insert(int a[],int len)
{
	int i,j,t;

	printf("222222222222\n");
	for(i=0;i<len;i++){
		j=i;
		t=a[i];
		while(t<a[j-1] && j>=0){
			a[j]=a[j-1];
			j--;
		}
		a[j]=t;
	}
}
#endif

void bubble_sort(int s[],int len)
{
	int i,j,t;
	for(i=0;i<len;i++)
		for(j=0;j<len-1;j++){
			if(s[j]>s[j+1])
				swap(s[j],s[j+1]);
		}
}

int main(int argc, char *argv[])
{
	int s[6]={5,4,7,6,1,9};
	int i;
	bubble_sort(s,6);
	for(i=0;i<6;i++){
		printf("%d ",s[i]);
	}
	printf("\n");
	return 0;
}
