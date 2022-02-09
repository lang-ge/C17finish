//输入两个整数求它们的平方和
#include <iostream>
using namespace std;
int fun2(int m)
{
    return m * m;
}
int fun1(int x, int y)
{
    return fun2(x) + fun2(y);
}
int main()
{
    int a, b;
    cout << "please enter two integers(a and b):";
    cin >> a >> b;
    cout << "the sum of square of a and b:" << fun1(a, b) << endl;
    return 0;
}

#include "stdio.h"
#define PI 3.14159
float CalcArea(float r);
int main()
{
	float r, area;
	scanf("%f", &r);
	area = CalcArea(r);
	printf("Area=%f", area);
}
float CalcArea(float r)
{
	float a;
	if (r <= 0)
		a = 0;
	else
	{
		a = PI * r * r;
	}
	return (a);
}

//异或运算加密解密(浪漫的表白故事)
#include "stdio.h"
int main()
{
	int signal = 1314520; //原文
	int key = 19970518;   //密钥,TA的生日
	int crpy;			  //保存密文
	crpy = signal ^ key;  //加密
	printf("Boy Sned:Happy birthday!");
	scanf("%d", &key);
	printf("girl receive: %d\n", crpy ^ key);
}