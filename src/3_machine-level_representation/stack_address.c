// 确定栈随机化之后，栈开始的位置
#include<stdio.h>
int main() {
    long local;
    printf("local at %p\n", &local);
    return 0;
}