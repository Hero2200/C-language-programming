#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(a,b) {a^=b;b^=a;a^=b;}
int main(int argc, char *argv[])
{
	int a,b,c;

	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++){
				if(a!=1 && c!=1  && c!=3)
					if(a!=b && b!=c && a!=c)
					printf("A-%d B-%d C-%d\n",a,b,c);
			}
	return 0;
}
