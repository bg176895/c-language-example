#include <stdio.h>
#define pi 3.14159  //定義一個常數
#define test(r) pi*r*r  //定義一個巨集(運算式)
int main()
{
    int s = 0xA7;
    double t=0;
    printf("%d\n",s);
    s = s>>1;
    printf("%d\n",s);
    t=test(7);
    printf("%f\n",t);
    system("pause");
}
