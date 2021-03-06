/*
7-1 判断素数 (10分)
本题的目标很简单，就是判断一个给定的正整数是否素数。

输入格式：
输入在第一行给出一个正整数N（≤ 10），随后N行，每行给出一个小于2
​31
​​ 的需要判断的正整数。

输出格式：
对每个需要判断的正整数，如果它是素数，则在一行中输出Yes，否则输出No。

输入样例：
2
11
111
输出样例：
Yes
No
*/
#include<stdio.h>
int main()
{
    int i,j,n,prime[10]={0},ifprime[10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&prime[i]);
        for(j=2;j<prime[i]/2;j++)
        {
            if(prime[i]%j==0) break;
        }
        if(j==prime[i]/2) ifprime[i]=1;
        else ifprime[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(ifprime[i]==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

