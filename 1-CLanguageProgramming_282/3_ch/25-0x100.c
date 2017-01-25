#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(a,b) {a^=b;b^=a;a^=b;}
int main(int argc, char *argv[])
{
	int s[0x100];
	int i,j,t;
	
	for(i=0;i<0x100;i++){
		s[i]=rand()%100;
	}

	for(j=0;j<0x10;j++){
		t=j*0x10;
		printf("0X%2X %2X %2X %2X %2X %2X %2X %2X %2X : %2X %2X %2X %2X %2X %2X %2X %2X\n",
				t,s[t+0],s[t+1],s[t+2],s[t+3],s[t+4],s[t+5],s[t+6],s[t+7],s[t+8],
				s[t+9],s[t+10],s[t+11],s[t+12],s[t+13],s[t+14],s[t+15]);
	}
	return 0;
}
