#include <stdio.h>

#define BIT(nr)			(1UL << (nr))
#define CREATE_MASK(NUM_BITS, POS) \
	((unsigned char) (((1 << (NUM_BITS)) - 1) << (POS)))
#define LBC_MASK(MSB_BIT, LSB_BIT) \
	CREATE_MASK(MSB_BIT - LSB_BIT + 1, LSB_BIT)

#define TRIM_CENTER			4
#define MAX_VDD_EA_TRIM_CFG		8
#define VDD_TRIM3_MASK			LBC_MASK(2, 1)
#define VDD_TRIM3_SHIFT			3
#define VDD_TRIM4_MASK			BIT(0)
#define VDD_TRIM4_SHIFT			4	

static int trim_val_e;
int main()
{
unsigned int reg_val;
int trim_val;
	trim_val_e=7;
	trim_val=trim_val_e;
printf("trim_val %d\n",trim_val);
reg_val = (trim_val & VDD_TRIM3_MASK) << VDD_TRIM3_SHIFT;
printf("reg_val %d\n",reg_val);
reg_val = (trim_val & VDD_TRIM4_MASK) << VDD_TRIM4_SHIFT;
printf("reg_val %d\n",reg_val);
printf("trim_val %d\n",trim_val);
return 0;
}
