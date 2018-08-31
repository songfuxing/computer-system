#include<stdio.h>

int main() {
    // 有符号数用补码表示，补码的最高有效位需要乘负一
    short  v = -12345;
    // 补码变成无符号码的时候，最高有效位由乘负一变为乘一，因此会大很多
    // 尽管数值会变，但是二进制位不会改变
    unsigned short u = (unsigned short)v;
    printf("v = %d, u = %u\n", v,u);// v = -12345, u = 53191
}