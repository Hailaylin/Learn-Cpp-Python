/*
	       C语言程序设计	 
题号：L0707        题目:用递归法求n!        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入n，计算n!。
思考：若变量选择long long int类型，最大可以计算到多少的阶乘？
例：
（1）输入：1 输出：1
（2）输入：0 输出：1
（3）输入：10 输出：3628800
（4）输入：20 输出：2432902008176640000
*/

#include<stdio.h>

unsigned long long int Factorial(int n)
{
    if(n<=1) return 1;
    else
    {
        return (n*Factorial(n-1));
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%llu",Factorial(n));    //long long 最多到25!,再多溢出
    return 0;                       //unsigned long long 最多到65!,再多溢出
}