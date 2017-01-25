#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(a,b) {a^=b;b^=a;a^=b;}
int main(int argc, char *argv[])
{
	int x,y,z;

	for(x=0;x<20;x++)
		for(y=0;y<33;y++)
			for(z=0;z<99;z++){
				if(x+y+z==100 && 5*x+3*y+z/3==100)
					if(z%3==0)
					printf("x-%d y-%d z-%d\n",x,y,z);
			}
	return 0;
}
