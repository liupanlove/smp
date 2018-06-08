### 2018/6/2
调研相应的参考资料：  
学长的代码：http://os.cs.tsinghua.edu.cn/oscourse/OS2013/projects/U01  
路橙等同学的SMP的硬件实现：https://github.com/riscv-labs/OS2018spring-projects-g08/  
xv6的SMP的实现：https://github.com/mit-pdos/xv6-public  

决定在i386的架构下，硬件部分学习xv6的实现，  
软件部分学习xv6以及路橙等同学的SMP的硬件实现

### 2018/6/3 - 6/4
首先是检测MP  
在ucore/kern中新增mp文件夹，内有mp.c和mp.h（参考xv6的实现）  
然后在Makefile的KINCLUDE和KSRCDIR中增加 kern/mp/以及kern/mp，同时在QEMUOPTS中增加 -smp 2  
还有就是在init/init.c中新增mpinit();  

### 2018/6/6
然后就是lapicinit()和ioapicinit()（参考xv6的实现）  
新增driver/lapic.c和ioapic.c，修改picirq.c，不使用8259A中断管理  
然后在init相应的位置增加lapicinit和ioapicinit即可  

### 2018/6/7
学习了路橙组的sched部分的实现，将sched_MLFQ.c和sched_RR.c加入了ucore