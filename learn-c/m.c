// 
#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
  printk(KERN_INFO "hello world\n");
  int i = 0;
  for (; i < 10; i++)
    printk(KERN_INFO "%d ", i);
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "bye, world!\n");
  int i = 0;
  for(; i < 5; i++)
    printk(KERN_INFO " %d ", i);
}
