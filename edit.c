#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 5;
    swap(&a, &b);
    printf("A = %d\r\n", a);
    printf("B = %d\n", b);
    return 0;
}