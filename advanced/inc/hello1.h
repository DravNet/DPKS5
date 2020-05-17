#ifndef HELLO1_H
#define HELLO1_H

#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int print_hello(uint n);

void print_time(void);

#endif
