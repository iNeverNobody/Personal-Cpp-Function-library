/*
题目描述
设 A、B、C 是 3 个塔座。开始时，在塔座 A 上有一叠共 n 个圆盘，这些圆盘自下而上，由大到小地叠在一起。各圆盘从小到大编号为1，2，……，n，奇数号圆盘着蓝色，偶数号圆盘着红色，如图所示。
现要求将塔座 A 上的这一叠圆盘移到塔座 B 上，并仍按同样顺序叠置。在移动圆盘时应遵守以下移动规则：
规则(1)：每次只能移动1 个圆盘；
规则(2)：任何时刻都不允许将较大的圆盘压在较小的圆盘之上； 
规则(3)：任何时刻都不允许将同色圆盘叠在一起； 
规则(4)：在满足移动规则(1)-(3)的前提下，可将圆盘移至 A，B，C 中任一塔座上。
试设计一个算法，用最少的移动次数将塔座 A 上的 n 个圆盘移到塔座 B 上，并仍按同样顺序叠置。

输入
给定的正整数n。
输出
将计算出的最优移动方案输出。每一行由一个正整数k和2个字符c1和c2组成，表示将第k个圆盘从塔座c1移到塔座c2上。
样例输入
3
样例输出
1 A B
2 A C
1 B C
3 A B
1 C A
2 C B
1 A B
提示
【数据说明】
    n位不大于10的正整数。
来源/分类
递归
*/
#include<iostream>
using namespace std;
void move(int,char,char,char);
int main()
{
	int n;
	cin>>n;
	move(n,'A','B','C');
	return 0;
} 
void move(int n,char a,char b,char c)
{
	if(n==1)
	{
		cout<<1<<' '<<a<<' '<<b<<endl;  
		return;
	}
	n--; 
	move(n,a,c,b);
	cout<<n+1<<' '<<a<<' '<<b<<endl;
	move(n,c,b,a);
}
