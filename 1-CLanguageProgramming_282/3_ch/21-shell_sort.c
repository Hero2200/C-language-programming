
#include <stdio.h>
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

void shell_sort(int s[],int len)
{
	int i,j,t,d;
	d=2/len;
	while(d>=1){
		for(i=d;i<len;i++){
			j=i-d;
			t=s[i];
			while(t<s[j] && j>0){
				s[j+d]=s[j];
				j--;
			}
			s[j+d]=t;
		}
		d/=2;
	}
}


int main(int argc, char *argv[])
{
	int s[6]={5,4,7,6,1,9};
	int i;

	shell_sort(s,6);
	for(i=0;i<6;i++){
		printf("%d ",s[i]);
	}
	printf("\n");
	return 0;
}
