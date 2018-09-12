// 确定栈随机化之后，栈中局部变量的位置
// 多次运行，得到不一样的位置。
// 有效的预防了栈溢出攻击
#include<stdio.h>
int main() {
    long local;
    printf("local at %p\n", &local);
    return 0;
}