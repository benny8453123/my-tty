#ifndef PRINT_STRING_H
#define PRINT_STRING_H

#include <linux/printk.h>
#include <linux/kernel.h>

#define my_print_string_info(fmt, ...) \
	pr_info("[my_print_string]: "fmt, ##__VA_ARGS__)

#define my_print_string_err(fmt, ...) \
	pr_err("[my_print_string]: "fmt, ##__VA_ARGS__)

#define my_print_string_debug(fmt, ...) \
	pr_debug("[my_print_string]: "fmt, ##__VA_ARGS__)

#endif /* PRINT_STRING_H */
