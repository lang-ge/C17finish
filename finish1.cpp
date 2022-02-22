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

// windows平台C程序获取可执行程序路径及目录、文件名、扩展名
#include <stdio.h> 
#include <Windows.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char drive[4];
	char subdir[MAX_PATH];
	char fn[MAX_PATH]; 
	char exten[MAX_PATH];
	char exe_path[MAX_PATH];
	FILE *fs = NULL;

	_splitpath(argv[0], drive, subdir, fn, exten);

	printf("Full file name = %s\n", argv[0]);
	printf("Drive=%s\nSubdir=%s\nfilename=%s\nExtension=%s\n\n",\
		   strlen(drive) == 0 ? "null" : drive, \
		   strlen(subdir) == 0 ? "null" : subdir, fn, exten);

	sprintf(exe_path, "%s%s", drive, subdir);
	if (strlen(exe_path) == 0)
		sprintf(exe_path, ".\\");
	printf("strlen(exe_path)=%d\n", strlen(exe_path));
	printf("exe_path=%s\n", exe_path);	
	
	//我们可以使用路径吗？现在如下测试.
	sprintf(fn, "%stest.log", exe_path);
	fs = fopen(fn, "w+");
	fprintf(fs, "%s\n", fn);
	fclose(fs);
	
	getchar();
	return 0; 
}