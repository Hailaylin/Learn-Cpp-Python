/*
题号：0406        题目:根据x的值求y的值        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
请根据以下情况求y的值：
（1）当x<1时，y=x
（2）当1≤x<10时，y=2x-1
（3）当x≥10时，y=3x-11
例：
（1）输入：0.618   输出：x=0.618,y=0.618
（2）输入：1.5       输出：x=1.500,y=2.000
（3）输入：10        输出：x=10.000,y=19.000
*/
#include<stdio.h>
int main(){
	double x,y;
	scanf("%lf",&x);
	if (x<1) y=x;
		else if(x>=1&&x<10) y=2*x-1;
			else y=3*x-11;
	printf("x=%.3f,y=%.3f",x,y);
	return 0;
}
