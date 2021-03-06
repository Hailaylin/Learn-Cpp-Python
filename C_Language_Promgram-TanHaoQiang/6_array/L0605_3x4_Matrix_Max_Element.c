/*
题号：L0605        题目:编程求出3*4矩阵最大元素及其行列号 
得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入3*4矩阵的各个元素（空格或者回车间隔），
求出其中值最大的元素的值，以及其行号与列号。
例：
（1）输入：1 2 3 4 5 6 7 8 9 10 11 12  
输出：max=12,row=2,col=3 （行，列）
（2）输入：1 23 4 56 546 6 7 45 565 4 45 56
输出：max=565,row=2,col=0

*/
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int matrix[ROW][COL],i,j,max,row=0,col=0;

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    max=0;

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(max<matrix[i][j])
            {
                max=matrix[i][j];
                row=i;
                col=j;
            }
        }
    }

    printf("max=%d,row=%d,col=%d",max,row,col);
    return 0;
}