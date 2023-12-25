#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int sum(int a,int b){
 return a+b;
}
int main()
{
    int a = 10, b = 5;
    swap(&a, &b);
    int result_sum=sum(a,b);
    printf("A = %d\r\n", a);
    printf("B = %d\n", b);
    printf("Result = %d \n",result_sum);
    return 0;
}