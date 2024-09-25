#include<stdio.h>

int main() {
    int a, count = 0;
    printf("Enter any number: \n");
    scanf("%d", &a);

    if (a & 1) count++;
    if (a & 2) count++;
    if (a & 4) count++;
    if (a & 8) count++;
    if (a & 16) count++;
    if (a & 32) count++;
    if (a & 64) count++;
    if (a & 128) count++;
    if (a & 256) count++;
    if (a & 512) count++;
    if (a & 1024) count++;
    if (a & 2048) count++;
    if (a & 4096) count++;
    if (a & 8192) count++;
    if (a & 16384) count++;
    if (a & 32768) count++;
    if (a & 65536) count++;
    if (a & 131072) count++;
    if (a & 262144) count++;
    if (a & 524288) count++;
    if (a & 1048576) count++;
    if (a & 2097152) count++;
    if (a & 4194304) count++;
    if (a & 8388608) count++;
    if (a & 16777216) count++;
    if (a & 33554432) count++;
    if (a & 67108864) count++;
    if (a & 134217728) count++;
    if (a & 268435456) count++;
    if (a & 536870912) count++;
    if (a & 1073741824) count++;
    if (a & 2147483648) count++;

    printf("Number of 1's in the binary representation: %d\n", count);
    return 0;
}

