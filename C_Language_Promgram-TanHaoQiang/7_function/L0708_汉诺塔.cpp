/**
 * @file L0708_汉诺塔.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0708        题目:汉诺塔问题        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
汉诺塔问题：从A座上移动n个盘子到C座，输出移动n个盘子的步骤。
    一位法国数学家曾编写过一个印度的古老传说：在世界中心贝拿勒斯（在印度北部）的圣庙里，一块黄铜板上插着三根宝石针。印度教的主神梵天在创造世界的时候，在其中一根针上从下到上地穿好了由大到小的64片金片，这就是所谓的汉诺塔。不论白天黑夜，总有一个僧侣在按照下面的法则移动这些金片：一次只移动一片，不管在哪根针上，小片必须在大片上面。僧侣们预言，当所有的金片都从梵天穿好的那根针上移到另外一根针上时，世界就将在一声霹雳中消灭，而梵塔、庙宇和众生也都将同归于尽。

    不管这个传说的可信度有多大，如果考虑一下把64片金片，由一根针上移到另一根针上，并且始终保持上小下大的顺序。这需要多少次移动呢?这里需要递归的方法。假设有n片，移动次数是f(n).显然f⑴=1,f⑵=3,f⑶=7，且f(k+1）=2*f(k)+1。此后不难证明f(n)=2^n-1。n=64时，

    f（64）= 2^64-1=18446744073709551615

     假如每秒钟一次，共需多长时间呢？一个平年365天有 31536000 秒，闰年366天有31622400秒，平均每年31556952秒，计算一下，

  18446744073709551615/31556952=584554049253.855年

    这表明移完这些金片需要5845亿年以上，而地球存在至今不过45亿年，太阳系的预期寿命据说也就是数百亿年。真的过了5845亿年，不说太阳系和银河系，至少地球上的一切生命，连同梵塔、庙宇等，都早已经灰飞烟灭。

例：
（1）输入：1  输出：A-->C
（2）输入：3
输出：
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
（3）输入：7
输出：
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
A-->B
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
B-->C
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
A-->B
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
C-->A
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
A-->B
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
B-->C
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
C-->A
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
B-->C
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
A-->B
C-->B
C-->A
B-->A
C-->B
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
B-->A
C-->B
C-->A
B-->A
B-->C
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
 */

/*
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long time_hn;
    time_hn=(unsigned long long)pow(2,64)-1;
    //printf("%llu\n",time_hn);
    cout<<time_hn<<endl;
    return 0;
}

*/

#include<stdio.h>
int main()
{
    void hn(int n,char a,char b,char c);
    int n;
    scanf("%d",&n);
    hn(n,'A','B','C');
    return 0;
}
//移动n个盘子，从a座移到c座，借助b座
void hn(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c-->%c\n",a,c);
        return ;
    }
    hn(n-1,a,c,b);
    hn(1,a,b,c);
    hn(n-1,b,a,c);
}
//自己以为的思路？
//移动n个盘子,从a->b,借助c……题目意思理解错误
//void hn(int n,char a,char b,char c)
