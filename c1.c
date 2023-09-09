#include <stdio.h>
int main()
{ // 负责阶乘数字的输入
    int print1_jiecheng(double num1);
    int num1;
    scanf("%d", &num1);
    // 调用实现阶乘运算的函数
    printf("输入的数字阶乘为：%lf", print1_jiecheng(num1));
}

// 负责实现阶乘运算
int print1_jiecheng(double num1)
{
    if (num1 == 1)
        return 1;
    else
    {
        int num2;
        double num3;
        num2 = num1;
        num3 = num1;
        for (; num2 > 1; num2--)
        {
            num3 *= (num2 - 1);
        }
        return (num3);
    }
}