### 实验目标
做一个简易的smp for ucore_plus(x86)


### 可参考资料
https://github.com/mit-pdos/xv6-public  xv6的  
http://os.cs.tsinghua.edu.cn/oscourse/OS2013/projects/U01  ucore x86-64多核支持  
https://github.com/riscv-labs/OS2018spring-projects-g08  lc yzjc组的riscV的smp代码  


### 主要的工作量

工作量分为
硬件方面和软件方面
硬件方面可以参考 学长的代码（？ http://os.cs.tsinghua.edu.cn/oscourse/OS2013/projects/U01 好像还有bug
软件方面可以参考 smp（riscv）组的代码  





### 运行ucore_plus
```
git submodule update --init --recursive

cd ucore
make menuconfig ARCH=i386

make 
make sfsimg

./uCore_run -d obj
```


1. 分析ucore_plus的makefile





### 特别鸣谢
lc















日志

sv6 is a POSIX-like research operating system designed for multicore scalability based on xv6.  
xv6 与 sv6 的关系类似于ucore 和 ucore_plus的关系