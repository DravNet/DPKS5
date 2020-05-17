#include "hello1.h"

#include <linux/moduleparam.h>

static uint count = 1;
module_param(count, uint, 0444);
MODULE_PARM_DESC(count, "Here is parameter description");

extern int print_hello(uint n);
extern void print_time(void);

static int __init hello2_init(void)
{
	return print_hello(count);
}
module_init(hello2_init);

static void __exit hello2_exit(void)
{
	print_time();

	pr_info("Good bye, cruel world.\n");
}
module_exit(hello2_exit);
