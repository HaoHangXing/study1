#include <linux/module.h>
#include <linux/kernel.h>


static int __init tiny4412_module_init(void)
{
	printk("----hello world----\n");//kernel standrad printf
	return 0;
}
/*ģ����ں�����ģ��ж��ʱ�Զ����ã������ռ��ͷ�*/
static void __exit tiny4412_module_exit(void)
{
	printk("----exit----\n");//kernel standrad printf
}
/*ģ��������� ָ��ģ����ں���*/
module_init(tiny4412_module_init);
/*module exit declaration*/
module_exit(tiny4412_module_exit);

MODULE_LICENSE("GPL");

