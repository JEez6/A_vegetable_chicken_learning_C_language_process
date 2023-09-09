// 这是一个关于阶乘就和的一个程序
// 求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
// 位于C语言网的https://www.dotcpp.com/oj/problem1014.html

#include <stdio.h>
int main()
{
    int num1, num2;
    double num3, num4; // 引用double是为了精度和防止数据过大溢出
    double num5 = 0;
    scanf("%d", &num1);
    num2 = num1; // 用来控制第一个FOR循环

    for (; num2 > 0; num2--)
    {
        num3 = num2;
        num4 = num2; // 此处初始化是为了让下面的for循环在嵌套外的循环运行到第二次时被嵌套循环也能正常执行
        // if (num2 == num1) 调试检测用~
        //   printf("用来检测第一次运行输入的值是否会失值：%d\n", num2);
        //  printf("%.0f\n",num3);
        //  printf("接下来计算：%d的阶乘\n", num2);
        //  利用FOR循环的num4自减实现被乘数比乘数小一个整数1
        for (; num4 > 1; num4--) // 实现输入数字的阶乘（num1！）
        {
            num3 *= (num4 - 1);
            //    printf("阶乘计算ing~:%.8lf\n", num3);
        }
        num5 += num3;
    }
    printf("%.0f\n", num5);
}