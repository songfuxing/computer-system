/**
 * 将几种类型的数据转换为指针，然后从低到高位打印出该数据
 * 验证机器使用的字节序是大端还是小端
 */
#include <stdio.h>
typedef unsigned char *byte_pointer;

/**
 * start: 数据的指针
 * len: 数据的长度
 */
void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for(i = 0; i < len; i ++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    // 注意，&x创建了一个指针，指向x
    // 指针的两个属性：值和类型
    // 值：被赋值为x的地址
    // 类型：强转为byte_pointer类型了
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

int  main(int x) {
    int i = 12345;
    float f = (float)i;
    show_int(i);
    show_float(f);
    int * px = &i;
    printf("%p\n", px);
    printf("%d", *px);
    int * p = (int *)0x7ffee74478e4;
    printf("\n");
    char s = "12345";
    show_bytes(s,6);
    return 0;
}