#include <linux/module.h>
#include <linux/kernel.h>


static int __init tiny4412_module_init(void)
{
	printk("----hello world----\n");//kernel standrad printf
	return 0;
}
/*模块出口函数，模块卸载时自动调用，函数空间释放*/
static void __exit tiny4412_module_exit(void)
{
	printk("----exit----\n");//kernel standrad printf
}
/*模块入口声明 指定模块入口函数*/
module_init(tiny4412_module_init);
/*module exit declaration*/
module_exit(tiny4412_module_exit);

MODULE_LICENSE("GPL");

