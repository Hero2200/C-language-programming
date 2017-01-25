

#include <stdio.h>

#define DIV_ROUND_CLOSEST(x, divisor)(			\
{							\
	typeof(x) __x = x;				\
	typeof(divisor) __d = divisor;			\
	(((typeof(x))-1) > 0 ||				\
	 ((typeof(divisor))-1) > 0 || (__x) > 0) ?	\
		(((__x) + ((__d) / 2)) / (__d)) :	\
		(((__x) - ((__d) / 2)) / (__d));	\
}							\
)
#define EMPTY_CAPACITY		0
#define DEFAULT_CAPACITY	50
#define MISSING_CAPACITY	100
#define FULL_CAPACITY		100
#define FULL_SOC_RAW		0xFF
int main(int argc, char *argv[])
{
	int msoc=255;
	int ret;
	ret=DIV_ROUND_CLOSEST((msoc - 1) * (FULL_CAPACITY - 2),
						FULL_SOC_RAW - 2) + 1;
	printf("ret:%d\n",ret);
	return 0;
}
