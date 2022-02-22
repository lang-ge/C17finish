//;;;==================================================*
//;;;例1: [功能] 
//2_1.cpp
#include <iostream>
using namespace std;

int main() {
	cout << "Hello! " << endl;
	cout << "Welcome to C++! " << endl;
	return 0;
}
 

//;;;==================================================*
//;;;例2: [功能] 
//2_10.cpp
#include <iostream>
using namespace std;

int main() {
	int i = 0, j = 0, n;
	cout << "Enter some integers please (enter 0 to quit):" << endl;
	cin >> n;
	while (n != 0) {
		if (n > 0) i += 1;
		if (n < 0) j += 1;
		cin >> n;
	}
	cout << "Count of positive integers: " << i << endl;
	cout << "Count of negative integers: " << j << endl;
	return 0;
}

//;;;==================================================*
//;;;例3: [功能] 
//2_11.cpp
#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };

int main() {
	GameResult result;                  //声明变量时,可以不写关键字enum
	enum GameResult omit = CANCEL;      //也可以在类型名前写enum

	for (int count = WIN ; count <= CANCEL ; count++) {	//隐含类型转换
		result = GameResult(count);		//显式类型转换
		if (result == omit) 
			cout << "The game was cancelled" << endl;
		else {
			cout << "The game was played ";
			if (result == WIN)
				cout << "and we won!";
			if (result == LOSE)
				cout << "and we lost.";
			cout << endl;
		}
	}
	return 0;
}

//;;;==================================================*
//;;;例4: [功能] 
//2_12.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名
	char sex;		//性别
	int age;		//年龄
} stu = { 97001, "Lin Lin", 'F', 19};

int main() {
	cout << setw(7) << stu.num;
	cout << setw(20) << stu.name;
	cout << setw(3) << stu.sex;
	cout << setw(3) << stu.age;
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例5: [功能] 
//2_13.cpp
#include <iostream>
using namespace std;

struct Animal {
	int weight;
	int feet;
};

int main() {
	Animal dog1, dog2, chicken;

	dog1.weight = 15;
	dog2.weight = 37;
	chicken.weight = 3;

	dog1.feet = 4;
	dog2.feet = 4;
	chicken.feet = 2;

	cout << "The weight of dog1 is " << dog1.weight << endl;
	cout << "The weight of dog2 is " << dog2.weight << endl;
	cout << "The weight of chicken is "<< chicken.weight << endl;

	return 0;
}

//;;;==================================================*
//;;;例6: [功能] 
//2_14.cpp
#include <iostream>
using namespace std;

struct Aircraft {
	int wingspan;	//翼幅
	int passengers; //乘客
	union {					//无名联合作为结构体的内嵌成员
		float fuelLoad; 	//战斗机装载的燃料
		float bombLoad; 	//轰炸机装载的炸弹
		int pallets; 		//运输机的货盘
	};
} fighter, bomber, transport;

int main() {
	fighter.wingspan = 40;
	fighter.passengers = 1;
	fighter.fuelLoad = 12000.0;
	
	bomber.wingspan = 90;
	bomber.passengers = 12;
	bomber.bombLoad = 14000.0;
	
	transport.wingspan = 106;
	transport.passengers = 4;
	transport.pallets = 42;
	
	transport.fuelLoad = 18000.0;
	fighter.pallets = 4;
	
	cout << "The fighter carries " << fighter.pallets << " pallets." << endl;
	cout << "The bomber bomb load is " << bomber.bombLoad << endl;

	return 0;
}

//;;;==================================================*
//;;;例7: [功能] 
#include <iostream>
using namespace std;

enum Level { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
enum Grade { A, B, C, D };

struct Student {
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

int main() {
	Student s = { 12345678, SOPHOMORE, B };
	cout << "Size of Student: " << sizeof(Student) << endl;
	cout << "Number:    " << s.number << endl;
	cout << "Level:     ";
	switch (s.level) {
		case FRESHMAN:  cout << "freshman"; break;
		case SOPHOMORE: cout << "sophomore"; break;
		case JUNIOR:    cout << "junior"; break;
		case SENIOR:    cout << "senior"; break;
	}
	cout << endl;
	cout << "Grade:     ";
	switch (s.grade) {
		case A: cout << "A"; break;
		case B: cout << "B"; break;
		case C: cout << "C"; break;
		case D: cout << "D"; break;
	}
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例8: [功能] 
//2_2.cpp
#include <iostream>
using namespace std;

int main() {
	int year;
	bool isLeapYear;
	
	cout << "Enter the year: ";
	cin >> year;
	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is not a leap year" << endl;

	return 0;
}

//;;;==================================================*
//;;;例9: [功能] 
//2_3.cpp
#include<iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Enter x and y:";
	cin >> x >> y;

	if (x != y)
		if (x > y)
			cout << "x > y" << endl;
		else
			cout << "x < y" << endl;
	else
		cout << "x = y" << endl;

	return 0;
}

//;;;==================================================*
//;;;例10: [功能] 
//2_4.cpp
#include <iostream>
using namespace std;

int main() {
	int day;
	
	cin >> day;
	switch (day) {	
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Day out of range Sunday .. Saturday" << endl;
		break;
	}

	return 0;
}

//;;;==================================================*
//;;;例11: [功能] 
//2_5.cpp
#include<iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	while (i <= 10) {
		sum += i;
		i++;
	}
	cout << "sum = " << sum << endl;
	return 0;
}

//;;;==================================================*
//;;;例12: [功能] 
//2_6.cpp
#include <iostream>
using namespace std;

int main() {
	int n, right_digit, newnum = 0; 
	cout << "Enter the number: ";
	cin >> n;
	
	cout << "The number in reverse order is ";
	do {
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} while (n != 0);
	cout << endl;

	return 0;
}

//;;;==================================================*
//;;;例13: [功能] 
//2_7.cpp
#include <iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 10);
	cout << "sum = " << sum << endl;

	return 0;
}

//;;;==================================================*
//;;;例14: [功能] 
//2_8.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Number  " << n << "   Factors  ";

	for (int k = 1; k <= n; k++)
		if (n % k == 0)
			cout << k << "  ";
	cout << endl;

	return 0;
}

//;;;==================================================*
//;;;例15: [功能] 
//2_9.cpp
#include <iostream>
using namespace std;

int main() {
	const int N = 4;
	for (int i = 1; i <= N; i++) {	//输出前4行图案
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//在图案左侧空30列
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {	//输出后3行图案
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//在图案左侧空30列
		for (int j = 1; j <= 7 - 2 * i ;j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例16: [功能] 
//3_1.cpp
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main() {
	cout <<  "5 to the power 2 is " << power(5, 2) << endl; 
	//函数调用作为一个表达式出现在输出语句中。
	return 0;
}

//;;;==================================================*
//;;;例17: [功能] 
//3_10.cpp
#include <iostream>
using namespace std;

//把src针的最上面一个盘子移动到dest针上
void move(char src, char dest) { 
	cout << src << " --> " << dest << endl;
}

//把n个盘子从src针移动到dest针，以medium针作为中介
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}

int main() {
	int m;
	cout << "Enter the number of diskes: ";
	cin >> m;
	cout << "the steps to moving " << m << " diskes:" << endl;
	hanoi(m,'A','B','C');
	return 0;
}

//;;;==================================================*
//;;;例18: [功能] 
//3_11.cpp
#include <iostream>
using namespace std;

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << "    y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "    y = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例19: [功能] 
//3_12.cpp
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << "    y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "    y = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例20: [功能] 
//3_13.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void fiddle(int in1, int &in2) {
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "The values are ";
	cout << setw(5) << in1;
	cout << setw(5) << in2 << endl;
}

int main() { 
	int v1 = 7, v2 = 12;
	cout << "The values are ";
	cout << setw(5) << v1;
	cout << setw(5) << v2 << endl;
	fiddle(v1, v2);
	cout << "The values are ";
	cout << setw(5) << v1;
	cout << setw(5) << v2 << endl;
	return 0;
}

//;;;==================================================*
//;;;例21: [功能] 
//3_14.cpp
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

//内联函数，根据圆的半径计算其面积
inline double calArea(double radius) {
	return PI * radius * radius;
}

int main() {
	double r = 3.0;	//r是圆的半径
	//调用内联函数求圆的面积，编译时此处被替换为CalArea函数体语句
	double area	= calArea(r);
	cout << area << endl;
	return 0;
}

//;;;==================================================*
//;;;例22: [功能] 
//3_15.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int getVolume(int length, int width = 2, int height = 3);

int main() {
	const int X = 10, Y = 12, Z = 15;
	cout << "Some box data is " ;
	cout << getVolume(X, Y, Z) << endl;
	cout << "Some box data is " ;
	cout << getVolume(X, Y) << endl;
	cout << "Some box data is " ;
	cout << getVolume(X) << endl;
	return 0;
}

int getVolume(int length, int width/* = 2 */, int height/* = 3 */) {
	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
	return length * width * height;
}

//;;;==================================================*
//;;;例23: [功能] 
//3_16.cpp
#include <iostream>
using namespace std;

int sumOfSquare(int a, int b) {
	return a * a + b * b;
}

double sumOfSquare(double a, double b) {
	return a * a + b * b;
}

int main() {
	int m, n;
	cout << "Enter two integer: ";
	cin >> m >> n;
	cout << "Their sum of square: " << sumOfSquare(m, n) << endl;

	double x, y;
	cout << "Enter two real number: ";
	cin >> x >> y;
	cout << "Their sum of square: " << sumOfSquare(x, y) << endl;

	return 0;
}


//;;;==================================================*
//;;;例24: [功能] 
//3_17.cpp
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() {
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;	//输入角度值

	double radian = angle * PI / 180;	//转化为弧度值
	cout << "sin(" << angle << ") = " << sin(radian) <<endl;
	cout << "cos(" << angle << ") = " << cos(radian) <<endl;
	cout << "tan(" << angle << ") = " << tan(radian) <<endl;
	return 0;
}

//;;;==================================================*
//;;;例25: [功能] 
//3_2.cpp
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n);

int main() {
	int value = 0;
	
	cout << "Enter an 8 bit binary number: ";
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast<int>(power(2, i));
	}
	cout << "Decimal value is " << value << endl;
	return 0;
}

//计算x的n次方
double power (double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}


//;;;==================================================*
//;;;例26: [功能] 
//3_3.cpp
#include <iostream>
using namespace std;

double arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15) {
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;
		i += 2;
	}
	return r;
}

int main() {
	double a = 16.0 * arctan(1 / 5.0); 
	double b = 4.0 * arctan(1 / 239.0); 
	//注意：因为整数相除结果取整，如果参数写1/5，1/239，结果就都是0
	cout << "PI = " << a - b << endl;
	return 0;
}

//;;;==================================================*
//;;;例27: [功能] 
//3_4.cpp
#include <iostream>
using namespace std;

//判断n是否为回文数
bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}

int main() {
	for (unsigned m = 11; m < 1000; m++)
		if (symm(m) && symm(m * m) && symm(m * m * m)) {
			cout << "m = " << m;
			cout << "  m * m = " << m * m;
			cout << "  m * m * m = " << m * m * m << endl;
		}
	return 0;
}

//;;;==================================================*
//;;;例28: [功能] 
//3_5.cpp
#include <iostream>
#include <cmath>  //头文件cmath中具有对C++标准库中数学函数的说明
using namespace std;

const double TINY_VALUE = 1e-10;

double tsin(double x) {
	double g = 0;
	double t = x;
	int n = 1;
	do {
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= TINY_VALUE); 
	return g;
}

int main() {
	double k, r, s;
	cout << "r = ";
	cin >> r;
	cout << "s = ";
	cin >> s;
	if (r * r <= s * s)
		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
	else
		k = tsin(r * s) / 2;
	cout << k << endl;
	return 0;
}


//;;;==================================================*
//;;;例29: [功能] 
//3_6.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

//投骰子、计算和数、输出和数
int rollDice() {
	
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}

enum GameStatus { WIN, LOSE, PLAYING };

int main() {
	int sum, myPoint;
	GameStatus status;

	unsigned seed; 
	cout << "Please enter an unsigned integer: ";
	cin >> seed;//输入随机数种子
	srand(seed);//将种子传递给rand()

	sum = rollDice(); //第一轮投骰子、计算和数
	switch (sum) {
	case 7:   //如果和数为7或11则为胜,状态为WIN
	case 11:
		status = WIN;
		break;
	case 2:   //和数为2、3或12则为负,状态为LOSE
	case 3: 
	case 12:
		status = LOSE;
		break;
	default:   //其它情况,游戏尚无结果,状态为PLAYING,记下点数,为下一轮做准备
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (status == PLAYING) { //只要状态仍为PLAYING,就继续进行下一轮
		sum = rollDice();
		if (sum == myPoint)    //某轮的和数等于点数则取胜,状态置为WIN
			status = WIN;
		else if (sum == 7)    //出现和数为7则为负,状态置为LOSE
			status = LOSE;
	}

	//当状态不为PLAYING时上面的循环结束,以下程序段输出游戏结果
	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;

	return 0;
}

//;;;==================================================*
//;;;例30: [功能] 
//3_7.cpp
#include <iostream>
using namespace std;

int fun2(int m) {
	return m * m;
}

int fun1(int x,int y) {
	return fun2(x) + fun2(y);
}

int main() {
	int a, b;
	cout << "Please enter two integers(a and b): ";
	cin >> a >> b;
	cout << "The sum of square of a and b: " << fun1(a, b) << endl;
	return 0;
}

//;;;==================================================*
//;;;例31: [功能] 
//3_8.cpp
#include <iostream>
using namespace std;

//????n???×??
unsigned fac(unsigned n) {
	unsigned f;
	if (n == 0)
		f = 1;
	else
		f = fac(n - 1) * n;
	return f;
}

int main() {
	unsigned n;
	cout << "Enter a positive integer: ";
	cin >> n;
	unsigned y = fac(n);
	cout << n << "! = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例32: [功能] 
//3_9.cpp
#include <iostream>
using namespace std;

//计算从n个人里选k个人的组合数
int comm(int n, int k) {
	if (k > n)
		return 0;
	else if (n == k || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}

int main() {
	int n, k;
	cout << "Please enter two integers n and k: ";
	cin >> n >> k;
	cout << "C(n, k) = " << comm(n, k) << endl;
	return 0;
}

//;;;==================================================*
//;;;例33: [功能] 
//4_1.cpp
#include <iostream>	
using namespace std;

class Clock	{ //时钟类的定义
public:		//外部接口，公有成员函数
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:	//私有数据成员
	int hour, minute, second;
};

//时钟类成员函数的具体实现
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

//主函数
int main() {
	Clock myClock;	//定义对象myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();	//设置时间为默认值
	myClock.showTime();	//显示时间
	cout << "Second time set and output:" << endl;
	myClock.setTime(8, 30, 30);	//设置时间为8：30：30
	myClock.showTime();	//显示时间
	return 0;
}

//;;;==================================================*
//;;;例34: [功能] 
#include <iostream>
using namespace std;

enum Level { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
enum Grade { A, B, C, D };
class Student {
public:
	Student(unsigned number, Level level, Grade grade)
		: number(number), level(level), grade(grade) { }
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

void Student::show() {
	cout << "Number:    " << number << endl;
	cout << "Level:     ";
	switch (level) {
		case FRESHMAN:  cout << "freshman"; break;
		case SOPHOMORE: cout << "sophomore"; break;
		case JUNIOR:    cout << "junior"; break;
		case SENIOR:    cout << "senior"; break;
	}
	cout << endl;
	cout << "Grade:     ";
	switch (grade) {
		case A: cout << "A"; break;
		case B: cout << "B"; break;
		case C: cout << "C"; break;
		case D: cout << "D"; break;
	}
	cout << endl;
}

int main() {
	Student s(12345678, SOPHOMORE, B);
	cout << "Size of Student: " << sizeof(Student) << endl;
	s.show();
	return 0;
}

//;;;==================================================*
//;;;例35: [功能] 
//4_2.cpp
#include <iostream>
using namespace std;

class Point {	//Point 类的定义
public:		//外部接口
	Point(int xx = 0, int yy = 0) {	//构造函数
		x = xx;
		y = yy;
	}
	Point(Point &p);	//拷贝构造函数
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:	//私有数据
	int x, y;
};

//成员函数的实现
Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

//形参为Point类对象的函数
void fun1(Point p) {
	cout << p.getX() << endl;
}

//返回值为Point类对象的函数
Point fun2() {
	Point a(1, 2);
	return a;
}

//主程序
int main() {
	Point a(4, 5);	//第一个对象A
	Point b = a;	//情况一，用A初始化B。第一次调用拷贝构造函数
	cout << b.getX() << endl;
	fun1(b);		//情况二，对象B作为fun1的实参。第二次调用拷贝构造函数
	b = fun2();		//情况三，函数的返回值是类对象，函数返回时，调用拷贝构造函数
	cout << b.getX() << endl;
	return 0;
}

//;;;==================================================*
//;;;例36: [功能] 
//4_3.cpp
#include <iostream>
using namespace std;

const float PI = 3.141593;		//给出p的值
const float FENCE_PRICE = 35;	//栅栏的单价
const float CONCRETE_PRICE = 20;//过道水泥单价

class Circle {	//声明定义类Circle 及其数据和方法
public:		//外部接口
	Circle(float r);		//构造函数
	float circumference();	//计算圆的周长
	float area();			//计算圆的面积
private:	//私有数据成员
	float radius;			//圆半径
};

//类的实现

//构造函数初始化数据成员radius
Circle::Circle(float r) {
	radius = r;
}	

//计算圆的周长
float Circle::circumference() {
    return 2 * PI * radius;
}

//计算圆的面积
float Circle::area() {
    return PI * radius * radius;
}

//主函数实现
int main () {
	float radius;
	cout << "Enter the radius of the pool: ";	 // 提示用户输入半径
	cin >> radius;
	
	Circle pool(radius);		//游泳池边界
	Circle poolRim(radius + 3);	//栅栏

	//计算栅栏造价并输出
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing Cost is $" << fenceCost << endl;

	//计算过道造价并输出
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;

	return 0;
}

//;;;==================================================*
//;;;例37: [功能] 
//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(Point &p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};

Point::Point(Point &p) {	//拷贝构造函数的实现
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//类的组合
class Line {	//Line类的定义
public:	//外部接口
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:	//私有数据成员
	Point p1, p2;	//Point类的对象p1,p2
	double len;
};

//组合类的构造函数
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

//组合类的拷贝构造函数
Line::Line (Line &l): p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

//主函数
int main() {
	Point myp1(1, 1), myp2(4, 5);	//建立Point类的对象
	Line line(myp1, myp2);	//建立Line类的对象
	Line line2(line);	//利用拷贝构造函数建立一个新对象
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0;
}

//;;;==================================================*
//;;;例38: [功能] 
//4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名
	char sex;		//性别
	int age;		//年龄
};

int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;
	return 0;
}

//;;;==================================================*
//;;;例39: [功能] 
#include <string>
#include <iostream>
using namespace std;

class ExamInfo {
public:
	//三种构造函数，分别用等级、是否通过和百分来初始化
	ExamInfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) { }
	ExamInfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) { }
	ExamInfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) { }
	void show();

private:
	string name;	//课程名称
	enum {
		GRADE,
		PASS,
		PERCENTAGE
	} mode;			//采用何种计分方式
	union {
		char grade;		//等级制的成绩
		bool pass;		//是否通过
		int percent;	//百分制的成绩
	};
};

void ExamInfo::show() {
	cout << name << ": ";
	switch (mode) {
	case GRADE:
		cout << grade;
		break;
	case PASS:
		cout << (pass ? "PASS" : "FAIL");
		break;
	case PERCENTAGE:
		cout << percent;
		break;
	}
	cout << endl;
}

int main() {
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}

//;;;==================================================*
//;;;例40: [功能] 
//4_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //储蓄账户类
private:
	int id;				//账号
	double balance;		//余额
	double rate;		//存款的年利率
	int lastDate;		//上次变更余额的时期
	double accumulation;	//余额按日累加之和

	//记录一笔帐，date为日期，amount为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日累积值
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//构造函数
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//存入现金
	void deposit(int date, double amount);
	//取出现金
	void withdraw(int date, double amount);
	//结算利息，每年1月1日调用一次该函数
	void settle(int date);
	//显示账户信息
	void show();
};

//SavingsAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(int date, int id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//保留小数点后两位
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingsAccount::deposit(int date, double amount) {
	record(date, amount);
}

void SavingsAccount::withdraw(int date, double amount) {
	if (amount > getBalance())
		cout << "Error: not enough money" << endl;
	else
		record(date, -amount);
}

void SavingsAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;	//计算年息
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance: " << balance;
}

int main() {
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);

	//输出各个账户信息
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例41: [功能] 
//5_1.cpp
#include <iostream>
using namespace std;

int i;			//在全局命名空间中的全局变量

namespace Ns {
	int j;		//在Ns命名空间中的全局变量
}

int main() {
	i = 5;			//为全局变量i赋值
	Ns::j = 6;		//为全局变量j赋值
	{				//子块1
		using namespace Ns; //使得在当前块中可以直接引用Ns命名空间的标识符
		int i;		//局部变量，局部作用域
		i = 7;
		cout << "i = " << i << endl;//输出7
		cout << "j = " << j << endl;//输出6
	}
	cout << "i = " << i << endl;	//输出5
	return 0;
}

//;;;==================================================*
//;;;例42: [功能] 
//文件3，主函数，5_10.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例43: [功能] 
//5_11.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);

	//输出各个账户信息
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;例44: [功能] 
//5_2.cpp
#include <iostream>
using namespace std;
int i = 1;	// i 为全局变量，具有静态生存期

void other() {
	//a, b为静态局部变量，具有全局寿命，局部可见，只第一次进入函数时被初始化
	static int a = 2;
	static int b;
	//c为局部变量，具有动态生存期，每次进入函数时都初始化
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	b = a;
}

int main() {
	//a为静态局部变量，具有全局寿命，局部可见
	static int a;
	//b, c为局部变量，具有动态生存期
	int b = -10;	
	int c = 0;

	cout << "---MAIN---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	i += 10;
	other();
	return 0;
}

//;;;==================================================*
//;;;例45: [功能] 
//5_3.cpp
#include<iostream>
using namespace std;

class Clock {	//时钟类定义
public:	//外部接口
	Clock();
	void setTime(int newH, int newM, int newS);   //三个形参均具有函数原型作用域
	void showTime();
private:	//私有数据成员
	int hour, minute, second;
};

//时钟类成员函数实现
Clock::Clock() : hour(0), minute(0), second(0) { }	//构造函数

void Clock::setTime(int newH, int newM, int newS) {//三个形参均具有局部作用域
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;  //声明对象globClock，具有静态生存期，命名空间作用域
//由缺省构造函数初始化为0:0:0
int main() {	//主函数
	cout << "First time output:" << endl;	
	//引用具有命名空间作用域的对象globClock：
	globClock.showTime();	//对象的成员函数具有类作用域
	//显示0:0:0
	globClock.setTime(8,30,30);	//将时间设置为8:30:30

	Clock myClock(globClock);	//声明具有局部作用域的对象myClock
	//调用拷贝构造函数，以globClock为初始值
	cout<<"Second time output:"<<endl;	
	myClock.showTime();	//引用具有局部作用域的对象myClock
	//输出8:30:30

	return 0;
}

//;;;==================================================*
//;;;例46: [功能] 
//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		//在构造函数中对count累加，所有对象共同维护同一个count
		count++;
	}	
	Point(Point &p) {	//拷贝构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	void showCount() {		//输出静态数据成员
		cout << "  Object count = " << count << endl;
	}
private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例47: [功能] 
//5_5.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		//在构造函数中对count累加，所有对象共同维护同一个count
		count++;
	}	
	Point(Point &p) {	//拷贝构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	static void showCount() {		//静态函数成员
		cout << "  Object count = " << count << endl;
	}
private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例48: [功能] 
//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point &p1, Point &p2);	//友元函数声明
private:	//私有数据成员
	int x, y;
};

float dist(Point &p1, Point &p2) {	//友元函数实现
	double x = p1.x - p2.x;	//通过对象访问私有数据成员
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//主函数
	Point myp1(1, 1), myp2(4, 5);	//定义Point类的对象
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//计算两点间的距离
	return 0;
}

//;;;==================================================*
//;;;例49: [功能] 
//5_7.cpp
#include<iostream>
using namespace std;

class R {
public:
	R(int r1, int r2) : r1(r1), r2(r2) { }
	void print();
	void print() const;
private:
	int r1, r2;
};

void R::print() {   
	cout << r1 << ":" << r2 << endl;
}

void R::print() const {   
	cout << r1 << ";" << r2 << endl;
}

int main() {
	R a(5,4);
	a.print();  //调用void print()
	const R b(20,52);  
	b.print();  //调用void print() const
	return 0;
}

//;;;==================================================*
//;;;例50: [功能] 
//5_8.cpp
#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
private:
	const int a;
	static const int b;   //静态常数据成员
};

const int A::b = 10;	//静态常数据成员在类外说明和初始化

//常数据成员只能通过初始化列表来获得初值
A::A(int i) : a(i) { }

void A::print() {
	cout << a << ":" << b << endl;
}
int main() {
/*建立对象a和b，并以100和0作为初值，分别调用构造函数，通过构造函数的初
	始化列表给对象的常数据成员赋初值*/
	A a1(100), a2(0);  
	a1.print();
	a2.print();
	return 0;
}

//;;;==================================================*
//;;;例51: [功能] 
//5_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(const Point &p1, const Point &p2);
private:	//私有数据成员
	int x, y;
};

float dist(const Point &p1, const Point &p2) {	//常引用作形参
	double x = p1.x - p2.x;	
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//主函数
	const Point myp1(1, 1), myp2(4, 5);	//定义Point类的对象
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//计算两点间的距离
	return 0;
}

//;;;==================================================*
//;;;例52: [功能] 
//6_1.cpp
#include <iostream>
using namespace std;
int main() {
	int a[10], b[10];
	for(int i = 0; i < 10; i++) {
		a[i] = i * 2 - 1;
		b[10 - i - 1] = a[i];
	}
	for(int i = 0; i <10; i++) {
		cout << "a[" << i << "] = " << a[i] << "  ";
		cout << "b[" << i << "] = " << b[i] << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例53: [功能] 
//6_10.cpp
#include <iostream>
using namespace std;

//将实数x分成整数部分和小数部分，形参intpart、fracpart是指针
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int>(x);	//取x的整数部分
	*fracPart = x - *intPart;		//取x的小数部分
}

int main() {
	cout << "Enter 3 float point numbers:" << endl;
	for(int i = 0; i < 3; i++) {
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);	//变量地址作为实参
		cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例54: [功能] 
//6_11.cpp
#include <iostream>
using namespace std;

void printStuff(float) {
	cout << "This is the print stuff function." << endl;
}

void printMessage(float data) {
	cout << "The data to be listed is " << data << endl;
}

void printFloat(float data) {
	cout << "The data to be printed is " << data << endl;
}

const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

int main() {	//主函数
	void (*functionPointer)(float);	//函数指针
	printStuff(PI);
	functionPointer = printStuff;	//函数指针指向printStuff
	functionPointer(PI);	//函数指针调用
	functionPointer = printMessage;	//函数指针指向printMessage
	functionPointer(TWO_PI);	//函数指针调用
	functionPointer(13.0);	//函数指针调用
	functionPointer = printFloat;	//函数指针指向printFloat
	functionPointer(PI);	//函数指针调用
	printFloat(PI);
	return 0;
}

//;;;==================================================*
//;;;例55: [功能] 
//6_12.cpp
#include <iostream>
using namespace std;

class Point {	//类的定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//构造函数
	int getX() const { return x; }	//返回x
	int getY() const { return y; }	//返回y
private:	//私有数据
	int x, y;
};

int main() {	//主函数
	Point a(4, 5);	//定义并初始化对象a
	Point *p1 = &a;	//定义对象指针，用a的地址将其初始化
	cout << p1->getX() << endl;	//利用指针访问对象成员
	cout << a.getX() << endl; 	//利用对象名访问对象成员
	return 0;
}

//;;;==================================================*
//;;;例56: [功能] 
//6_13.cpp
#include <iostream>
using namespace std;

class Point {	//类的定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//构造函数
	int getX() const { return x; }	//返回x
	int getY() const { return y; }	//返回y
private:	//私有数据
	int x, y;
};

int main() {	//主函数
	Point a(4,5);	//定义对象A
	Point *p1 = &a;	//定义对象指针并初始化
	int (Point::*funcPtr)() const = &Point::getX;	//定义成员函数指针并初始化
	
	cout << (a.*funcPtr)() << endl;		//(1)使用成员函数指针和对象名访问成员函数
	cout << (p1->*funcPtr)() << endl;	//(2)使用成员函数指针和对象指针访问成员函数
	cout << a.getX() << endl;			//(3)使用对象名访问成员函数
	cout << p1->getX() << endl;			//(4)使用对象指针访问成员函数

	return 0;
}

//;;;==================================================*
//;;;例57: [功能] 
//6_14.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//拷贝构造函数
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }
	static int count;	//静态数据成员声明，用于记录点的个数

private:	//私有数据成员
	int x, y;
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数实现
	int *ptr = &Point::count;	//定义一个int型指针，指向类的静态成员
	Point a(4, 5);	//定义对象a
	cout << "Point A: " << a.getX() << ", " << a.getY();
	cout << " Object count = " << *ptr << endl;	//直接通过指针访问静态数据成员

	Point b(a);	//定义对象b
	cout << "Point B: " << b.getX() << ", " << b.getY();
	cout << " Object count = " << *ptr << endl; 	//直接通过指针访问静态数据成员

	return 0;
}

//;;;==================================================*
//;;;例58: [功能] 
//6_15.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//拷贝构造函数
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }

	static void showCount() {		//输出静态数据成员
		cout << "  Object count = " << count << endl;
	}

private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数实现
	void (*funcPtr)() = Point::showCount;	//定义一个指向函数的指针，指向类的静态成员函数

	Point a(4, 5);	//定义对象A
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();	//输出对象个数，直接通过指针访问静态函数成员

	Point b(a);	//定义对象B
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();	//输出对象个数，直接通过指针访问静态函数成员

	return 0;
}

//;;;==================================================*
//;;;例59: [功能] 
//6_16.cpp
#include <iostream>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

int main() {
	cout << "Step one: " << endl;
	Point *ptr1 = new Point;	//动态创建对象，没有给出参数列表，因此调用缺省构造函数
	delete ptr1;	//删除对象，自动调用析构函数

	cout << "Step two: " << endl;
	ptr1 = new Point(1,2);		//动态创建对象，并给出参数列表，因此调用有形参的构造函数
	delete ptr1;	//删除对象，自动调用析购函数

	return 0;
}

//;;;==================================================*
//;;;例60: [功能] 
//6_17.cpp
#include <iostream>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

int main() {
	Point *ptr = new Point[2];	//创建对象数组
	ptr[0].move(5, 10);		//通过指针访问数组元素的成员
	ptr[1].move(15, 20);	//通过指针访问数组元素的成员
	cout << "Deleting..." << endl;
	delete[] ptr;	//删除整个对象数组
	return 0;
}

//;;;==================================================*
//;;;例61: [功能] 
//6_18.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints points(count);	//创建对象数组
	points.element(0).move(5, 10);	//通过访问数组元素的成员
	points.element(1).move(15, 20);	//通过类访问数组元素的成员
	return 0;
}

//;;;==================================================*
//;;;例62: [功能] 
//6_19.cpp
#include <iostream>
using namespace std;
int main() {
	float (*cp)[9][8] = new float[8][9][8];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 8; k++)
				//以指针形式数组元素
				*(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				//将指针cp作为数组名使用，通过数组名和下标访问数组元素
				cout << cp[i][j][k] << "  ";
			cout << endl;
		}
		cout << endl;
	}

	delete[] cp;
	return 0;
}

//;;;==================================================*
//;;;例63: [功能] 
//6_2.cpp
#include <iostream>
using namespace std;
void rowSum(int a[][4], int nRow) {    //计算二维数组A每行元素的值的和，nrow是行数
	for (int i = 0; i < nRow; i++) {
		for(int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
	}
} 
int main() {	//主函数
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };//声明并初始化数组
	for (int i = 0; i < 3; i++)	{ //输出数组元素
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}
	rowSum(table, 3);	//调用子函数，计算各行和
	for (int i = 0; i < 3; i++)	//输出计算结果
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}

//;;;==================================================*
//;;;例64: [功能] 
//6_20.cpp
#include <iostream>
#include <vector>
using namespace std;

//计算数组arr中元素的平均值
double average(const vector<double> &arr) {
	double sum = 0;
	for (unsigned i = 0; i < arr.size(); i++)
		sum += arr[i];
	return sum / arr.size();
}

int main() {
	unsigned n;
	cout << "n = ";
	cin >> n;

	vector<double> arr(n);	//创建数组对象
	cout << "Please input " << n << " real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}

//;;;==================================================*
//;;;例65: [功能] 
//6_21.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//创建对象数组
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //创建对象数组副本
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	return 0;
}

//;;;==================================================*
//;;;例66: [功能] 
//6_22.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	ArrayOfPoints(const ArrayOfPoints& v);

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {
	size = v.size;
	points = new Point[size];
	for (int i = 0; i < size; i++)
		points[i] = v.points[i];
}

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//创建对象数组
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //创建对象数组副本
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	return 0;
}

//;;;==================================================*
//;;;例67: [功能] 
//6_23.cpp
#include <string>
#include <iostream>
using namespace std;

//根据value的值输出true或false，title为提示符
inline void test(const char *title, bool value) {
	cout << title << " returns " << (value ? "true" : "false") << endl;
}

int main() {
	string s1 = "DEF";
	cout << "s1 is " << s1 << endl;

	string s2;
	cout << "Please enter s2: ";
	cin >> s2;
	cout << "length of s2: " << s2.length() << endl;

	//比较运算符的测试
	test("s1 <= \"ABC\"", s1 <= "ABC"); 
	test("\"DEF\" <= s1", "DEF" <= s1);
	//连接运算符的测试
	s2 += s1;
	cout << "s2 = s2 + s1: " << s2 << endl;
	cout << "length of s2: " << s2.length() << endl;
	return 0;
}

//;;;==================================================*
//;;;例68: [功能] 
#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 0; i < 2; i++)	{
		string city, state;
		getline(cin, city, ',');
		getline(cin, state);
		cout << "City: " << city << "   State: " << state << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例69: [功能] 
//6_25.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	Date date(2008, 11, 1);	//起始日期
	//建立几个账户
	SavingsAccount accounts[] = {
		SavingsAccount(date, "S3755217", 0.015),
		SavingsAccount(date, "02342342", 0.015)
	};
	const int n = sizeof(accounts) / sizeof(SavingsAccount); //账户总数
	//11月份的几笔账目
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//12月份的几笔账目
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//结算所有账户并输出各个账户信息
	cout << endl;
	for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2009, 1, 1));
		accounts[i].show();
		cout << endl;
	}
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;例70: [功能] 
//6-3.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Entering main..." << endl;
	Point a[2];
	for(int i = 0; i < 2; i++)
		a[i].move(i + 10, i + 20);
	cout << "Exiting main..." << endl;
	return 0;
}

//;;;==================================================*
//;;;例71: [功能] 
//6_4.cpp
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

//直线线性拟合，points为各点，nPoint为点数
float lineFit(const Point points[], int nPoint) {
	float avgX = 0, avgY = 0;
	float lxx = 0, lyy = 0, lxy = 0;
	for(int i = 0; i < nPoint; i++)	{ //计算x、y的平均值
		avgX += points[i].getX() / nPoint;
		avgY += points[i].getY() / nPoint;
	}
	for(int i = 0; i < nPoint; i++)	{ //计算Lxx、Lyy和Lxy
		lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);
		lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
		lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
	}
	cout << "This line can be fitted by y=ax+b." << endl;
	cout << "a = " << lxy / lxx << "  ";	//输出回归系数a
	cout << "b = " << avgY - lxy * avgX / lxx << endl;	//输出回归系数b
	return static_cast<float>(lxy / sqrt(lxx * lyy));	//返回相关系数r
}

int main() {
	Point p[10] = { Point(6, 10), Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
		Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100) };	//初始化数据点
	float r = lineFit(p, 10);	//进行线性回归计算
	cout << "Line coefficient r = " << r << endl;	//输出相关系数
	return 0;
}

//;;;==================================================*
//;;;例72: [功能] 
//6_5.cpp
#include <iostream>
using namespace std;
int main() {
	int i;			//定义int型数i
	int *ptr = &i;	//取i的地址赋给ptr
	i = 10;			//int型数赋初值
	cout << "i = " << i << endl;			//输出int型数的值
	cout << "*ptr = " << *ptr << endl;	//输出int型指针所指地址的内容
	return 0;
}

//;;;==================================================*
//;;;例73: [功能] 
//6_6.cpp
#include <iostream>
using namespace std;

int main() {
//!	void voidObject;	//错，不能声明void类型的变量
	void *pv;	//对，可以声明void类型的指针
	int i = 5;
	pv = &i;	//void类型指针指向整型变量
	int *pint = static_cast<int *>(pv);	//void类型指针赋值给int类型指针
	cout << "*pint = " << *pint << endl;
	return 0;
} 

//;;;==================================================*
//;;;例74: [功能] 
//6_7_1.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例75: [功能] 
//6_7_2.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < 10; i++)
		cout << *(a+i) << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例76: [功能] 
//6_7_3.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int *p = a; p < (a + 10); p++)
		cout << *p << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例77: [功能] 
//6_8.cpp
#include <iostream>
using namespace std;

int main() {
	int line1[] = { 1, 0, 0 };	//定义数组，矩阵的第一行
	int line2[] = { 0, 1, 0 };	//定义数组，矩阵的第二行
	int line3[] = { 0, 0, 1 };	//定义数组，矩阵的第三行
	
	//定义整型指针数组并初始化
	int *pLine[3] = { line1, line2, line3 };	
	
	cout << "Matrix test:" << endl;	//输出单位矩阵
	for (int i = 0; i < 3; i++) {	//对指针数组元素循环
		for (int j = 0; j < 3; j++) 	//对矩阵每一行循环
			cout << pLine[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例78: [功能] 
//6_9.cpp
#include <iostream>
using namespace std;

int main() {
	int array2[3][3]= { { 11, 12, 13 }, { 21, 22, 23 }, { 31, 32, 33 } };
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			cout << *(*(array2 + i) + j) << " ";	//逐个输出二维数组第i行元素值
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例79: [功能] 
//account.cpp
#include "account.h"
#include <cmath>
#include <iostream>
using namespace std;

double SavingsAccount::total = 0;

//SavingsAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(const Date &date, const string &id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	date.show();
	cout << "\t#" << id << " created" << endl;
}

void SavingsAccount::record(const Date &date, double amount, const string &desc) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//保留小数点后两位
	balance += amount;
	total += amount;
	date.show();
	cout << "\t#" << id << "\t" << amount << "\t" << balance << "\t" << desc << endl;
}

void SavingsAccount::error(const string &msg) const {
	cout << "Error(#" << id << "): " << msg << endl;
}

void SavingsAccount::deposit(const Date &date, double amount, const string &desc) {
	record(date, amount, desc);
}

void SavingsAccount::withdraw(const Date &date, double amount, const string &desc) {
	if (amount > getBalance())
		error("not enough money");
	else
		record(date, -amount, desc);
}

void SavingsAccount::settle(const Date &date) {
	double interest = accumulate(date) * rate	//计算年息
		/ date.distance(Date(date.getYear() - 1, 1, 1));
	if (interest != 0)
		record(date, interest, "interest");
	accumulation = 0;
}

void SavingsAccount::show() const {
	cout << id << "\tBalance: " << balance;
}

//;;;==================================================*
//;;;例80: [功能] 
//date.cpp
#include "date.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace {	//namespace使下面的定义只在当前文件中有效
	//存储平年中某个月1日之前有多少天，为便于getMaxDay函数的实现，该数组多出一项
	const int DAYS_BEFORE_MONTH[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
}

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {
	if (day <= 0 || day > getMaxDay()) {
		cout << "Invalid date: ";
		show();
		cout << endl;
		exit(1);
	}
	int years = year - 1;
	totalDays = years * 365 + years / 4 - years / 100 + years / 400
		+ DAYS_BEFORE_MONTH[month - 1] + day;
	if (isLeapYear() && month > 2) totalDays++;
}

int Date::getMaxDay() const {
	if (isLeapYear() && month == 2)
		return 29;
	else
		return DAYS_BEFORE_MONTH[month]- DAYS_BEFORE_MONTH[month - 1];
}

void Date::show() const {
	cout << getYear() << "-" << getMonth() << "-" << getDay();
}

//;;;==================================================*
//;;;例81: [功能] 
//;;;==================================================*
//;;;例1: [功能] 
//2_1.cpp
#include <iostream>
using namespace std;

int main() {
	cout << "Hello! " << endl;
	cout << "Welcome to C++! " << endl;
	return 0;
}
 

//;;;==================================================*
//;;;例2: [功能] 
//2_10.cpp
#include <iostream>
using namespace std;

int main() {
	int i = 0, j = 0, n;
	cout << "Enter some integers please (enter 0 to quit):" << endl;
	cin >> n;
	while (n != 0) {
		if (n > 0) i += 1;
		if (n < 0) j += 1;
		cin >> n;
	}
	cout << "Count of positive integers: " << i << endl;
	cout << "Count of negative integers: " << j << endl;
	return 0;
}

//;;;==================================================*
//;;;例3: [功能] 
//2_11.cpp
#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };

int main() {
	GameResult result;                  //声明变量时,可以不写关键字enum
	enum GameResult omit = CANCEL;      //也可以在类型名前写enum

	for (int count = WIN ; count <= CANCEL ; count++) {	//隐含类型转换
		result = GameResult(count);		//显式类型转换
		if (result == omit) 
			cout << "The game was cancelled" << endl;
		else {
			cout << "The game was played ";
			if (result == WIN)
				cout << "and we won!";
			if (result == LOSE)
				cout << "and we lost.";
			cout << endl;
		}
	}
	return 0;
}

//;;;==================================================*
//;;;例4: [功能] 
//2_12.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名
	char sex;		//性别
	int age;		//年龄
} stu = { 97001, "Lin Lin", 'F', 19};

int main() {
	cout << setw(7) << stu.num;
	cout << setw(20) << stu.name;
	cout << setw(3) << stu.sex;
	cout << setw(3) << stu.age;
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例5: [功能] 
//2_13.cpp
#include <iostream>
using namespace std;

struct Animal {
	int weight;
	int feet;
};

int main() {
	Animal dog1, dog2, chicken;

	dog1.weight = 15;
	dog2.weight = 37;
	chicken.weight = 3;

	dog1.feet = 4;
	dog2.feet = 4;
	chicken.feet = 2;

	cout << "The weight of dog1 is " << dog1.weight << endl;
	cout << "The weight of dog2 is " << dog2.weight << endl;
	cout << "The weight of chicken is "<< chicken.weight << endl;

	return 0;
}

//;;;==================================================*
//;;;例6: [功能] 
//2_14.cpp
#include <iostream>
using namespace std;

struct Aircraft {
	int wingspan;	//翼幅
	int passengers; //乘客
	union {					//无名联合作为结构体的内嵌成员
		float fuelLoad; 	//战斗机装载的燃料
		float bombLoad; 	//轰炸机装载的炸弹
		int pallets; 		//运输机的货盘
	};
} fighter, bomber, transport;

int main() {
	fighter.wingspan = 40;
	fighter.passengers = 1;
	fighter.fuelLoad = 12000.0;
	
	bomber.wingspan = 90;
	bomber.passengers = 12;
	bomber.bombLoad = 14000.0;
	
	transport.wingspan = 106;
	transport.passengers = 4;
	transport.pallets = 42;
	
	transport.fuelLoad = 18000.0;
	fighter.pallets = 4;
	
	cout << "The fighter carries " << fighter.pallets << " pallets." << endl;
	cout << "The bomber bomb load is " << bomber.bombLoad << endl;

	return 0;
}

//;;;==================================================*
//;;;例7: [功能] 
#include <iostream>
using namespace std;

enum Level { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
enum Grade { A, B, C, D };

struct Student {
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

int main() {
	Student s = { 12345678, SOPHOMORE, B };
	cout << "Size of Student: " << sizeof(Student) << endl;
	cout << "Number:    " << s.number << endl;
	cout << "Level:     ";
	switch (s.level) {
		case FRESHMAN:  cout << "freshman"; break;
		case SOPHOMORE: cout << "sophomore"; break;
		case JUNIOR:    cout << "junior"; break;
		case SENIOR:    cout << "senior"; break;
	}
	cout << endl;
	cout << "Grade:     ";
	switch (s.grade) {
		case A: cout << "A"; break;
		case B: cout << "B"; break;
		case C: cout << "C"; break;
		case D: cout << "D"; break;
	}
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例8: [功能] 
//2_2.cpp
#include <iostream>
using namespace std;

int main() {
	int year;
	bool isLeapYear;
	
	cout << "Enter the year: ";
	cin >> year;
	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is not a leap year" << endl;

	return 0;
}

//;;;==================================================*
//;;;例9: [功能] 
//2_3.cpp
#include<iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Enter x and y:";
	cin >> x >> y;

	if (x != y)
		if (x > y)
			cout << "x > y" << endl;
		else
			cout << "x < y" << endl;
	else
		cout << "x = y" << endl;

	return 0;
}

//;;;==================================================*
//;;;例10: [功能] 
//2_4.cpp
#include <iostream>
using namespace std;

int main() {
	int day;
	
	cin >> day;
	switch (day) {	
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Day out of range Sunday .. Saturday" << endl;
		break;
	}

	return 0;
}

//;;;==================================================*
//;;;例11: [功能] 
//2_5.cpp
#include<iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	while (i <= 10) {
		sum += i;
		i++;
	}
	cout << "sum = " << sum << endl;
	return 0;
}

//;;;==================================================*
//;;;例12: [功能] 
//2_6.cpp
#include <iostream>
using namespace std;

int main() {
	int n, right_digit, newnum = 0; 
	cout << "Enter the number: ";
	cin >> n;
	
	cout << "The number in reverse order is ";
	do {
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} while (n != 0);
	cout << endl;

	return 0;
}

//;;;==================================================*
//;;;例13: [功能] 
//2_7.cpp
#include <iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 10);
	cout << "sum = " << sum << endl;

	return 0;
}

//;;;==================================================*
//;;;例14: [功能] 
//2_8.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Number  " << n << "   Factors  ";

	for (int k = 1; k <= n; k++)
		if (n % k == 0)
			cout << k << "  ";
	cout << endl;

	return 0;
}

//;;;==================================================*
//;;;例15: [功能] 
//2_9.cpp
#include <iostream>
using namespace std;

int main() {
	const int N = 4;
	for (int i = 1; i <= N; i++) {	//输出前4行图案
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//在图案左侧空30列
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {	//输出后3行图案
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//在图案左侧空30列
		for (int j = 1; j <= 7 - 2 * i ;j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例16: [功能] 
//3_1.cpp
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main() {
	cout <<  "5 to the power 2 is " << power(5, 2) << endl; 
	//函数调用作为一个表达式出现在输出语句中。
	return 0;
}

//;;;==================================================*
//;;;例17: [功能] 
//3_10.cpp
#include <iostream>
using namespace std;

//把src针的最上面一个盘子移动到dest针上
void move(char src, char dest) { 
	cout << src << " --> " << dest << endl;
}

//把n个盘子从src针移动到dest针，以medium针作为中介
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}

int main() {
	int m;
	cout << "Enter the number of diskes: ";
	cin >> m;
	cout << "the steps to moving " << m << " diskes:" << endl;
	hanoi(m,'A','B','C');
	return 0;
}

//;;;==================================================*
//;;;例18: [功能] 
//3_11.cpp
#include <iostream>
using namespace std;

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << "    y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "    y = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例19: [功能] 
//3_12.cpp
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << "    y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "    y = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例20: [功能] 
//3_13.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void fiddle(int in1, int &in2) {
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "The values are ";
	cout << setw(5) << in1;
	cout << setw(5) << in2 << endl;
}

int main() { 
	int v1 = 7, v2 = 12;
	cout << "The values are ";
	cout << setw(5) << v1;
	cout << setw(5) << v2 << endl;
	fiddle(v1, v2);
	cout << "The values are ";
	cout << setw(5) << v1;
	cout << setw(5) << v2 << endl;
	return 0;
}

//;;;==================================================*
//;;;例21: [功能] 
//3_14.cpp
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

//内联函数，根据圆的半径计算其面积
inline double calArea(double radius) {
	return PI * radius * radius;
}

int main() {
	double r = 3.0;	//r是圆的半径
	//调用内联函数求圆的面积，编译时此处被替换为CalArea函数体语句
	double area	= calArea(r);
	cout << area << endl;
	return 0;
}

//;;;==================================================*
//;;;例22: [功能] 
//3_15.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int getVolume(int length, int width = 2, int height = 3);

int main() {
	const int X = 10, Y = 12, Z = 15;
	cout << "Some box data is " ;
	cout << getVolume(X, Y, Z) << endl;
	cout << "Some box data is " ;
	cout << getVolume(X, Y) << endl;
	cout << "Some box data is " ;
	cout << getVolume(X) << endl;
	return 0;
}

int getVolume(int length, int width/* = 2 */, int height/* = 3 */) {
	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
	return length * width * height;
}

//;;;==================================================*
//;;;例23: [功能] 
//3_16.cpp
#include <iostream>
using namespace std;

int sumOfSquare(int a, int b) {
	return a * a + b * b;
}

double sumOfSquare(double a, double b) {
	return a * a + b * b;
}

int main() {
	int m, n;
	cout << "Enter two integer: ";
	cin >> m >> n;
	cout << "Their sum of square: " << sumOfSquare(m, n) << endl;

	double x, y;
	cout << "Enter two real number: ";
	cin >> x >> y;
	cout << "Their sum of square: " << sumOfSquare(x, y) << endl;

	return 0;
}


//;;;==================================================*
//;;;例24: [功能] 
//3_17.cpp
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() {
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;	//输入角度值

	double radian = angle * PI / 180;	//转化为弧度值
	cout << "sin(" << angle << ") = " << sin(radian) <<endl;
	cout << "cos(" << angle << ") = " << cos(radian) <<endl;
	cout << "tan(" << angle << ") = " << tan(radian) <<endl;
	return 0;
}

//;;;==================================================*
//;;;例25: [功能] 
//3_2.cpp
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n);

int main() {
	int value = 0;
	
	cout << "Enter an 8 bit binary number: ";
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast<int>(power(2, i));
	}
	cout << "Decimal value is " << value << endl;
	return 0;
}

//计算x的n次方
double power (double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}


//;;;==================================================*
//;;;例26: [功能] 
//3_3.cpp
#include <iostream>
using namespace std;

double arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15) {
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;
		i += 2;
	}
	return r;
}

int main() {
	double a = 16.0 * arctan(1 / 5.0); 
	double b = 4.0 * arctan(1 / 239.0); 
	//注意：因为整数相除结果取整，如果参数写1/5，1/239，结果就都是0
	cout << "PI = " << a - b << endl;
	return 0;
}

//;;;==================================================*
//;;;例27: [功能] 
//3_4.cpp
#include <iostream>
using namespace std;

//判断n是否为回文数
bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}

int main() {
	for (unsigned m = 11; m < 1000; m++)
		if (symm(m) && symm(m * m) && symm(m * m * m)) {
			cout << "m = " << m;
			cout << "  m * m = " << m * m;
			cout << "  m * m * m = " << m * m * m << endl;
		}
	return 0;
}

//;;;==================================================*
//;;;例28: [功能] 
//3_5.cpp
#include <iostream>
#include <cmath>  //头文件cmath中具有对C++标准库中数学函数的说明
using namespace std;

const double TINY_VALUE = 1e-10;

double tsin(double x) {
	double g = 0;
	double t = x;
	int n = 1;
	do {
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= TINY_VALUE); 
	return g;
}

int main() {
	double k, r, s;
	cout << "r = ";
	cin >> r;
	cout << "s = ";
	cin >> s;
	if (r * r <= s * s)
		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
	else
		k = tsin(r * s) / 2;
	cout << k << endl;
	return 0;
}


//;;;==================================================*
//;;;例29: [功能] 
//3_6.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

//投骰子、计算和数、输出和数
int rollDice() {
	
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}

enum GameStatus { WIN, LOSE, PLAYING };

int main() {
	int sum, myPoint;
	GameStatus status;

	unsigned seed; 
	cout << "Please enter an unsigned integer: ";
	cin >> seed;//输入随机数种子
	srand(seed);//将种子传递给rand()

	sum = rollDice(); //第一轮投骰子、计算和数
	switch (sum) {
	case 7:   //如果和数为7或11则为胜,状态为WIN
	case 11:
		status = WIN;
		break;
	case 2:   //和数为2、3或12则为负,状态为LOSE
	case 3: 
	case 12:
		status = LOSE;
		break;
	default:   //其它情况,游戏尚无结果,状态为PLAYING,记下点数,为下一轮做准备
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (status == PLAYING) { //只要状态仍为PLAYING,就继续进行下一轮
		sum = rollDice();
		if (sum == myPoint)    //某轮的和数等于点数则取胜,状态置为WIN
			status = WIN;
		else if (sum == 7)    //出现和数为7则为负,状态置为LOSE
			status = LOSE;
	}

	//当状态不为PLAYING时上面的循环结束,以下程序段输出游戏结果
	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;

	return 0;
}

//;;;==================================================*
//;;;例30: [功能] 
//3_7.cpp
#include <iostream>
using namespace std;

int fun2(int m) {
	return m * m;
}

int fun1(int x,int y) {
	return fun2(x) + fun2(y);
}

int main() {
	int a, b;
	cout << "Please enter two integers(a and b): ";
	cin >> a >> b;
	cout << "The sum of square of a and b: " << fun1(a, b) << endl;
	return 0;
}

//;;;==================================================*
//;;;例31: [功能] 
//3_8.cpp
#include <iostream>
using namespace std;

//????n???×??
unsigned fac(unsigned n) {
	unsigned f;
	if (n == 0)
		f = 1;
	else
		f = fac(n - 1) * n;
	return f;
}

int main() {
	unsigned n;
	cout << "Enter a positive integer: ";
	cin >> n;
	unsigned y = fac(n);
	cout << n << "! = " << y << endl;
	return 0;
}

//;;;==================================================*
//;;;例32: [功能] 
//3_9.cpp
#include <iostream>
using namespace std;

//计算从n个人里选k个人的组合数
int comm(int n, int k) {
	if (k > n)
		return 0;
	else if (n == k || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}

int main() {
	int n, k;
	cout << "Please enter two integers n and k: ";
	cin >> n >> k;
	cout << "C(n, k) = " << comm(n, k) << endl;
	return 0;
}

//;;;==================================================*
//;;;例33: [功能] 
//4_1.cpp
#include <iostream>	
using namespace std;

class Clock	{ //时钟类的定义
public:		//外部接口，公有成员函数
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:	//私有数据成员
	int hour, minute, second;
};

//时钟类成员函数的具体实现
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

//主函数
int main() {
	Clock myClock;	//定义对象myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();	//设置时间为默认值
	myClock.showTime();	//显示时间
	cout << "Second time set and output:" << endl;
	myClock.setTime(8, 30, 30);	//设置时间为8：30：30
	myClock.showTime();	//显示时间
	return 0;
}

//;;;==================================================*
//;;;例34: [功能] 
#include <iostream>
using namespace std;

enum Level { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
enum Grade { A, B, C, D };
class Student {
public:
	Student(unsigned number, Level level, Grade grade)
		: number(number), level(level), grade(grade) { }
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

void Student::show() {
	cout << "Number:    " << number << endl;
	cout << "Level:     ";
	switch (level) {
		case FRESHMAN:  cout << "freshman"; break;
		case SOPHOMORE: cout << "sophomore"; break;
		case JUNIOR:    cout << "junior"; break;
		case SENIOR:    cout << "senior"; break;
	}
	cout << endl;
	cout << "Grade:     ";
	switch (grade) {
		case A: cout << "A"; break;
		case B: cout << "B"; break;
		case C: cout << "C"; break;
		case D: cout << "D"; break;
	}
	cout << endl;
}

int main() {
	Student s(12345678, SOPHOMORE, B);
	cout << "Size of Student: " << sizeof(Student) << endl;
	s.show();
	return 0;
}

//;;;==================================================*
//;;;例35: [功能] 
//4_2.cpp
#include <iostream>
using namespace std;

class Point {	//Point 类的定义
public:		//外部接口
	Point(int xx = 0, int yy = 0) {	//构造函数
		x = xx;
		y = yy;
	}
	Point(Point &p);	//拷贝构造函数
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:	//私有数据
	int x, y;
};

//成员函数的实现
Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

//形参为Point类对象的函数
void fun1(Point p) {
	cout << p.getX() << endl;
}

//返回值为Point类对象的函数
Point fun2() {
	Point a(1, 2);
	return a;
}

//主程序
int main() {
	Point a(4, 5);	//第一个对象A
	Point b = a;	//情况一，用A初始化B。第一次调用拷贝构造函数
	cout << b.getX() << endl;
	fun1(b);		//情况二，对象B作为fun1的实参。第二次调用拷贝构造函数
	b = fun2();		//情况三，函数的返回值是类对象，函数返回时，调用拷贝构造函数
	cout << b.getX() << endl;
	return 0;
}

//;;;==================================================*
//;;;例36: [功能] 
//4_3.cpp
#include <iostream>
using namespace std;

const float PI = 3.141593;		//给出p的值
const float FENCE_PRICE = 35;	//栅栏的单价
const float CONCRETE_PRICE = 20;//过道水泥单价

class Circle {	//声明定义类Circle 及其数据和方法
public:		//外部接口
	Circle(float r);		//构造函数
	float circumference();	//计算圆的周长
	float area();			//计算圆的面积
private:	//私有数据成员
	float radius;			//圆半径
};

//类的实现

//构造函数初始化数据成员radius
Circle::Circle(float r) {
	radius = r;
}	

//计算圆的周长
float Circle::circumference() {
    return 2 * PI * radius;
}

//计算圆的面积
float Circle::area() {
    return PI * radius * radius;
}

//主函数实现
int main () {
	float radius;
	cout << "Enter the radius of the pool: ";	 // 提示用户输入半径
	cin >> radius;
	
	Circle pool(radius);		//游泳池边界
	Circle poolRim(radius + 3);	//栅栏

	//计算栅栏造价并输出
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing Cost is $" << fenceCost << endl;

	//计算过道造价并输出
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;

	return 0;
}

//;;;==================================================*
//;;;例37: [功能] 
//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(Point &p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};

Point::Point(Point &p) {	//拷贝构造函数的实现
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//类的组合
class Line {	//Line类的定义
public:	//外部接口
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:	//私有数据成员
	Point p1, p2;	//Point类的对象p1,p2
	double len;
};

//组合类的构造函数
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

//组合类的拷贝构造函数
Line::Line (Line &l): p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

//主函数
int main() {
	Point myp1(1, 1), myp2(4, 5);	//建立Point类的对象
	Line line(myp1, myp2);	//建立Line类的对象
	Line line2(line);	//利用拷贝构造函数建立一个新对象
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0;
}

//;;;==================================================*
//;;;例38: [功能] 
//4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名
	char sex;		//性别
	int age;		//年龄
};

int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;
	return 0;
}

//;;;==================================================*
//;;;例39: [功能] 
#include <string>
#include <iostream>
using namespace std;

class ExamInfo {
public:
	//三种构造函数，分别用等级、是否通过和百分来初始化
	ExamInfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) { }
	ExamInfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) { }
	ExamInfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) { }
	void show();

private:
	string name;	//课程名称
	enum {
		GRADE,
		PASS,
		PERCENTAGE
	} mode;			//采用何种计分方式
	union {
		char grade;		//等级制的成绩
		bool pass;		//是否通过
		int percent;	//百分制的成绩
	};
};

void ExamInfo::show() {
	cout << name << ": ";
	switch (mode) {
	case GRADE:
		cout << grade;
		break;
	case PASS:
		cout << (pass ? "PASS" : "FAIL");
		break;
	case PERCENTAGE:
		cout << percent;
		break;
	}
	cout << endl;
}

int main() {
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}

//;;;==================================================*
//;;;例40: [功能] 
//4_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //储蓄账户类
private:
	int id;				//账号
	double balance;		//余额
	double rate;		//存款的年利率
	int lastDate;		//上次变更余额的时期
	double accumulation;	//余额按日累加之和

	//记录一笔帐，date为日期，amount为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日累积值
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//构造函数
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//存入现金
	void deposit(int date, double amount);
	//取出现金
	void withdraw(int date, double amount);
	//结算利息，每年1月1日调用一次该函数
	void settle(int date);
	//显示账户信息
	void show();
};

//SavingsAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(int date, int id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//保留小数点后两位
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingsAccount::deposit(int date, double amount) {
	record(date, amount);
}

void SavingsAccount::withdraw(int date, double amount) {
	if (amount > getBalance())
		cout << "Error: not enough money" << endl;
	else
		record(date, -amount);
}

void SavingsAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;	//计算年息
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance: " << balance;
}

int main() {
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);

	//输出各个账户信息
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例41: [功能] 
//5_1.cpp
#include <iostream>
using namespace std;

int i;			//在全局命名空间中的全局变量

namespace Ns {
	int j;		//在Ns命名空间中的全局变量
}

int main() {
	i = 5;			//为全局变量i赋值
	Ns::j = 6;		//为全局变量j赋值
	{				//子块1
		using namespace Ns; //使得在当前块中可以直接引用Ns命名空间的标识符
		int i;		//局部变量，局部作用域
		i = 7;
		cout << "i = " << i << endl;//输出7
		cout << "j = " << j << endl;//输出6
	}
	cout << "i = " << i << endl;	//输出5
	return 0;
}

//;;;==================================================*
//;;;例42: [功能] 
//文件3，主函数，5_10.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例43: [功能] 
//5_11.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);

	//输出各个账户信息
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;例44: [功能] 
//5_2.cpp
#include <iostream>
using namespace std;
int i = 1;	// i 为全局变量，具有静态生存期

void other() {
	//a, b为静态局部变量，具有全局寿命，局部可见，只第一次进入函数时被初始化
	static int a = 2;
	static int b;
	//c为局部变量，具有动态生存期，每次进入函数时都初始化
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	b = a;
}

int main() {
	//a为静态局部变量，具有全局寿命，局部可见
	static int a;
	//b, c为局部变量，具有动态生存期
	int b = -10;	
	int c = 0;

	cout << "---MAIN---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	i += 10;
	other();
	return 0;
}

//;;;==================================================*
//;;;例45: [功能] 
//5_3.cpp
#include<iostream>
using namespace std;

class Clock {	//时钟类定义
public:	//外部接口
	Clock();
	void setTime(int newH, int newM, int newS);   //三个形参均具有函数原型作用域
	void showTime();
private:	//私有数据成员
	int hour, minute, second;
};

//时钟类成员函数实现
Clock::Clock() : hour(0), minute(0), second(0) { }	//构造函数

void Clock::setTime(int newH, int newM, int newS) {//三个形参均具有局部作用域
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;  //声明对象globClock，具有静态生存期，命名空间作用域
//由缺省构造函数初始化为0:0:0
int main() {	//主函数
	cout << "First time output:" << endl;	
	//引用具有命名空间作用域的对象globClock：
	globClock.showTime();	//对象的成员函数具有类作用域
	//显示0:0:0
	globClock.setTime(8,30,30);	//将时间设置为8:30:30

	Clock myClock(globClock);	//声明具有局部作用域的对象myClock
	//调用拷贝构造函数，以globClock为初始值
	cout<<"Second time output:"<<endl;	
	myClock.showTime();	//引用具有局部作用域的对象myClock
	//输出8:30:30

	return 0;
}

//;;;==================================================*
//;;;例46: [功能] 
//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		//在构造函数中对count累加，所有对象共同维护同一个count
		count++;
	}	
	Point(Point &p) {	//拷贝构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	void showCount() {		//输出静态数据成员
		cout << "  Object count = " << count << endl;
	}
private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例47: [功能] 
//5_5.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		//在构造函数中对count累加，所有对象共同维护同一个count
		count++;
	}	
	Point(Point &p) {	//拷贝构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	static void showCount() {		//静态函数成员
		cout << "  Object count = " << count << endl;
	}
private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//输出对象个数

	return 0;
}

//;;;==================================================*
//;;;例48: [功能] 
//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point &p1, Point &p2);	//友元函数声明
private:	//私有数据成员
	int x, y;
};

float dist(Point &p1, Point &p2) {	//友元函数实现
	double x = p1.x - p2.x;	//通过对象访问私有数据成员
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//主函数
	Point myp1(1, 1), myp2(4, 5);	//定义Point类的对象
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//计算两点间的距离
	return 0;
}

//;;;==================================================*
//;;;例49: [功能] 
//5_7.cpp
#include<iostream>
using namespace std;

class R {
public:
	R(int r1, int r2) : r1(r1), r2(r2) { }
	void print();
	void print() const;
private:
	int r1, r2;
};

void R::print() {   
	cout << r1 << ":" << r2 << endl;
}

void R::print() const {   
	cout << r1 << ";" << r2 << endl;
}

int main() {
	R a(5,4);
	a.print();  //调用void print()
	const R b(20,52);  
	b.print();  //调用void print() const
	return 0;
}

//;;;==================================================*
//;;;例50: [功能] 
//5_8.cpp
#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
private:
	const int a;
	static const int b;   //静态常数据成员
};

const int A::b = 10;	//静态常数据成员在类外说明和初始化

//常数据成员只能通过初始化列表来获得初值
A::A(int i) : a(i) { }

void A::print() {
	cout << a << ":" << b << endl;
}
int main() {
/*建立对象a和b，并以100和0作为初值，分别调用构造函数，通过构造函数的初
	始化列表给对象的常数据成员赋初值*/
	A a1(100), a2(0);  
	a1.print();
	a2.print();
	return 0;
}

//;;;==================================================*
//;;;例51: [功能] 
//5_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(const Point &p1, const Point &p2);
private:	//私有数据成员
	int x, y;
};

float dist(const Point &p1, const Point &p2) {	//常引用作形参
	double x = p1.x - p2.x;	
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//主函数
	const Point myp1(1, 1), myp2(4, 5);	//定义Point类的对象
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//计算两点间的距离
	return 0;
}

//;;;==================================================*
//;;;例52: [功能] 
//6_1.cpp
#include <iostream>
using namespace std;
int main() {
	int a[10], b[10];
	for(int i = 0; i < 10; i++) {
		a[i] = i * 2 - 1;
		b[10 - i - 1] = a[i];
	}
	for(int i = 0; i <10; i++) {
		cout << "a[" << i << "] = " << a[i] << "  ";
		cout << "b[" << i << "] = " << b[i] << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例53: [功能] 
//6_10.cpp
#include <iostream>
using namespace std;

//将实数x分成整数部分和小数部分，形参intpart、fracpart是指针
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int>(x);	//取x的整数部分
	*fracPart = x - *intPart;		//取x的小数部分
}

int main() {
	cout << "Enter 3 float point numbers:" << endl;
	for(int i = 0; i < 3; i++) {
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);	//变量地址作为实参
		cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例54: [功能] 
//6_11.cpp
#include <iostream>
using namespace std;

void printStuff(float) {
	cout << "This is the print stuff function." << endl;
}

void printMessage(float data) {
	cout << "The data to be listed is " << data << endl;
}

void printFloat(float data) {
	cout << "The data to be printed is " << data << endl;
}

const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

int main() {	//主函数
	void (*functionPointer)(float);	//函数指针
	printStuff(PI);
	functionPointer = printStuff;	//函数指针指向printStuff
	functionPointer(PI);	//函数指针调用
	functionPointer = printMessage;	//函数指针指向printMessage
	functionPointer(TWO_PI);	//函数指针调用
	functionPointer(13.0);	//函数指针调用
	functionPointer = printFloat;	//函数指针指向printFloat
	functionPointer(PI);	//函数指针调用
	printFloat(PI);
	return 0;
}

//;;;==================================================*
//;;;例55: [功能] 
//6_12.cpp
#include <iostream>
using namespace std;

class Point {	//类的定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//构造函数
	int getX() const { return x; }	//返回x
	int getY() const { return y; }	//返回y
private:	//私有数据
	int x, y;
};

int main() {	//主函数
	Point a(4, 5);	//定义并初始化对象a
	Point *p1 = &a;	//定义对象指针，用a的地址将其初始化
	cout << p1->getX() << endl;	//利用指针访问对象成员
	cout << a.getX() << endl; 	//利用对象名访问对象成员
	return 0;
}

//;;;==================================================*
//;;;例56: [功能] 
//6_13.cpp
#include <iostream>
using namespace std;

class Point {	//类的定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//构造函数
	int getX() const { return x; }	//返回x
	int getY() const { return y; }	//返回y
private:	//私有数据
	int x, y;
};

int main() {	//主函数
	Point a(4,5);	//定义对象A
	Point *p1 = &a;	//定义对象指针并初始化
	int (Point::*funcPtr)() const = &Point::getX;	//定义成员函数指针并初始化
	
	cout << (a.*funcPtr)() << endl;		//(1)使用成员函数指针和对象名访问成员函数
	cout << (p1->*funcPtr)() << endl;	//(2)使用成员函数指针和对象指针访问成员函数
	cout << a.getX() << endl;			//(3)使用对象名访问成员函数
	cout << p1->getX() << endl;			//(4)使用对象指针访问成员函数

	return 0;
}

//;;;==================================================*
//;;;例57: [功能] 
//6_14.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//拷贝构造函数
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }
	static int count;	//静态数据成员声明，用于记录点的个数

private:	//私有数据成员
	int x, y;
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数实现
	int *ptr = &Point::count;	//定义一个int型指针，指向类的静态成员
	Point a(4, 5);	//定义对象a
	cout << "Point A: " << a.getX() << ", " << a.getY();
	cout << " Object count = " << *ptr << endl;	//直接通过指针访问静态数据成员

	Point b(a);	//定义对象b
	cout << "Point B: " << b.getX() << ", " << b.getY();
	cout << " Object count = " << *ptr << endl; 	//直接通过指针访问静态数据成员

	return 0;
}

//;;;==================================================*
//;;;例58: [功能] 
//6_15.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//拷贝构造函数
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }

	static void showCount() {		//输出静态数据成员
		cout << "  Object count = " << count << endl;
	}

private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;	//静态数据成员定义和初始化，使用类名限定

int main() {	//主函数实现
	void (*funcPtr)() = Point::showCount;	//定义一个指向函数的指针，指向类的静态成员函数

	Point a(4, 5);	//定义对象A
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();	//输出对象个数，直接通过指针访问静态函数成员

	Point b(a);	//定义对象B
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();	//输出对象个数，直接通过指针访问静态函数成员

	return 0;
}

//;;;==================================================*
//;;;例59: [功能] 
//6_16.cpp
#include <iostream>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

int main() {
	cout << "Step one: " << endl;
	Point *ptr1 = new Point;	//动态创建对象，没有给出参数列表，因此调用缺省构造函数
	delete ptr1;	//删除对象，自动调用析构函数

	cout << "Step two: " << endl;
	ptr1 = new Point(1,2);		//动态创建对象，并给出参数列表，因此调用有形参的构造函数
	delete ptr1;	//删除对象，自动调用析购函数

	return 0;
}

//;;;==================================================*
//;;;例60: [功能] 
//6_17.cpp
#include <iostream>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

int main() {
	Point *ptr = new Point[2];	//创建对象数组
	ptr[0].move(5, 10);		//通过指针访问数组元素的成员
	ptr[1].move(15, 20);	//通过指针访问数组元素的成员
	cout << "Deleting..." << endl;
	delete[] ptr;	//删除整个对象数组
	return 0;
}

//;;;==================================================*
//;;;例61: [功能] 
//6_18.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints points(count);	//创建对象数组
	points.element(0).move(5, 10);	//通过访问数组元素的成员
	points.element(1).move(15, 20);	//通过类访问数组元素的成员
	return 0;
}

//;;;==================================================*
//;;;例62: [功能] 
//6_19.cpp
#include <iostream>
using namespace std;
int main() {
	float (*cp)[9][8] = new float[8][9][8];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 8; k++)
				//以指针形式数组元素
				*(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				//将指针cp作为数组名使用，通过数组名和下标访问数组元素
				cout << cp[i][j][k] << "  ";
			cout << endl;
		}
		cout << endl;
	}

	delete[] cp;
	return 0;
}

//;;;==================================================*
//;;;例63: [功能] 
//6_2.cpp
#include <iostream>
using namespace std;
void rowSum(int a[][4], int nRow) {    //计算二维数组A每行元素的值的和，nrow是行数
	for (int i = 0; i < nRow; i++) {
		for(int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
	}
} 
int main() {	//主函数
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };//声明并初始化数组
	for (int i = 0; i < 3; i++)	{ //输出数组元素
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}
	rowSum(table, 3);	//调用子函数，计算各行和
	for (int i = 0; i < 3; i++)	//输出计算结果
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}

//;;;==================================================*
//;;;例64: [功能] 
//6_20.cpp
#include <iostream>
#include <vector>
using namespace std;

//计算数组arr中元素的平均值
double average(const vector<double> &arr) {
	double sum = 0;
	for (unsigned i = 0; i < arr.size(); i++)
		sum += arr[i];
	return sum / arr.size();
}

int main() {
	unsigned n;
	cout << "n = ";
	cin >> n;

	vector<double> arr(n);	//创建数组对象
	cout << "Please input " << n << " real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}

//;;;==================================================*
//;;;例65: [功能] 
//6_21.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//创建对象数组
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //创建对象数组副本
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	return 0;
}

//;;;==================================================*
//;;;例66: [功能] 
//6_22.cpp
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	ArrayOfPoints(const ArrayOfPoints& v);

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//获得下标为index的数组元素
	Point &element(int index) {
		assert(index >= 0 && index < size);	//如果数组下标不会越界，程序中止
		return points[index];
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {
	size = v.size;
	points = new Point[size];
	for (int i = 0; i < size; i++)
		points[i] = v.points[i];
}

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//创建对象数组
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //创建对象数组副本
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	return 0;
}

//;;;==================================================*
//;;;例67: [功能] 
//6_23.cpp
#include <string>
#include <iostream>
using namespace std;

//根据value的值输出true或false，title为提示符
inline void test(const char *title, bool value) {
	cout << title << " returns " << (value ? "true" : "false") << endl;
}

int main() {
	string s1 = "DEF";
	cout << "s1 is " << s1 << endl;

	string s2;
	cout << "Please enter s2: ";
	cin >> s2;
	cout << "length of s2: " << s2.length() << endl;

	//比较运算符的测试
	test("s1 <= \"ABC\"", s1 <= "ABC"); 
	test("\"DEF\" <= s1", "DEF" <= s1);
	//连接运算符的测试
	s2 += s1;
	cout << "s2 = s2 + s1: " << s2 << endl;
	cout << "length of s2: " << s2.length() << endl;
	return 0;
}

//;;;==================================================*
//;;;例68: [功能] 
#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 0; i < 2; i++)	{
		string city, state;
		getline(cin, city, ',');
		getline(cin, state);
		cout << "City: " << city << "   State: " << state << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例69: [功能] 
//6_25.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	Date date(2008, 11, 1);	//起始日期
	//建立几个账户
	SavingsAccount accounts[] = {
		SavingsAccount(date, "S3755217", 0.015),
		SavingsAccount(date, "02342342", 0.015)
	};
	const int n = sizeof(accounts) / sizeof(SavingsAccount); //账户总数
	//11月份的几笔账目
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//12月份的几笔账目
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//结算所有账户并输出各个账户信息
	cout << endl;
	for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2009, 1, 1));
		accounts[i].show();
		cout << endl;
	}
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;例70: [功能] 
//6-3.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Entering main..." << endl;
	Point a[2];
	for(int i = 0; i < 2; i++)
		a[i].move(i + 10, i + 20);
	cout << "Exiting main..." << endl;
	return 0;
}

//;;;==================================================*
//;;;例71: [功能] 
//6_4.cpp
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

//直线线性拟合，points为各点，nPoint为点数
float lineFit(const Point points[], int nPoint) {
	float avgX = 0, avgY = 0;
	float lxx = 0, lyy = 0, lxy = 0;
	for(int i = 0; i < nPoint; i++)	{ //计算x、y的平均值
		avgX += points[i].getX() / nPoint;
		avgY += points[i].getY() / nPoint;
	}
	for(int i = 0; i < nPoint; i++)	{ //计算Lxx、Lyy和Lxy
		lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);
		lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
		lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
	}
	cout << "This line can be fitted by y=ax+b." << endl;
	cout << "a = " << lxy / lxx << "  ";	//输出回归系数a
	cout << "b = " << avgY - lxy * avgX / lxx << endl;	//输出回归系数b
	return static_cast<float>(lxy / sqrt(lxx * lyy));	//返回相关系数r
}

int main() {
	Point p[10] = { Point(6, 10), Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
		Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100) };	//初始化数据点
	float r = lineFit(p, 10);	//进行线性回归计算
	cout << "Line coefficient r = " << r << endl;	//输出相关系数
	return 0;
}

//;;;==================================================*
//;;;例72: [功能] 
//6_5.cpp
#include <iostream>
using namespace std;
int main() {
	int i;			//定义int型数i
	int *ptr = &i;	//取i的地址赋给ptr
	i = 10;			//int型数赋初值
	cout << "i = " << i << endl;			//输出int型数的值
	cout << "*ptr = " << *ptr << endl;	//输出int型指针所指地址的内容
	return 0;
}

//;;;==================================================*
//;;;例73: [功能] 
//6_6.cpp
#include <iostream>
using namespace std;

int main() {
//!	void voidObject;	//错，不能声明void类型的变量
	void *pv;	//对，可以声明void类型的指针
	int i = 5;
	pv = &i;	//void类型指针指向整型变量
	int *pint = static_cast<int *>(pv);	//void类型指针赋值给int类型指针
	cout << "*pint = " << *pint << endl;
	return 0;
} 

//;;;==================================================*
//;;;例74: [功能] 
//6_7_1.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例75: [功能] 
//6_7_2.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < 10; i++)
		cout << *(a+i) << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例76: [功能] 
//6_7_3.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int *p = a; p < (a + 10); p++)
		cout << *p << "  ";
	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;例77: [功能] 
//6_8.cpp
#include <iostream>
using namespace std;

int main() {
	int line1[] = { 1, 0, 0 };	//定义数组，矩阵的第一行
	int line2[] = { 0, 1, 0 };	//定义数组，矩阵的第二行
	int line3[] = { 0, 0, 1 };	//定义数组，矩阵的第三行
	
	//定义整型指针数组并初始化
	int *pLine[3] = { line1, line2, line3 };	
	
	cout << "Matrix test:" << endl;	//输出单位矩阵
	for (int i = 0; i < 3; i++) {	//对指针数组元素循环
		for (int j = 0; j < 3; j++) 	//对矩阵每一行循环
			cout << pLine[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例78: [功能] 
//6_9.cpp
#include <iostream>
using namespace std;

int main() {
	int array2[3][3]= { { 11, 12, 13 }, { 21, 22, 23 }, { 31, 32, 33 } };
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			cout << *(*(array2 + i) + j) << " ";	//逐个输出二维数组第i行元素值
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;例79: [功能] 
//account.cpp
#include "account.h"
#include <cmath>
#include <iostream>
using namespace std;

double SavingsAccount::total = 0;

//SavingsAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(const Date &date, const string &id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	date.show();
	cout << "\t#" << id << " created" << endl;
}

void SavingsAccount::record(const Date &date, double amount, const string &desc) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//保留小数点后两位
	balance += amount;
	total += amount;
	date.show();
	cout << "\t#" << id << "\t" << amount << "\t" << balance << "\t" << desc << endl;
}

void SavingsAccount::error(const string &msg) const {
	cout << "Error(#" << id << "): " << msg << endl;
}

void SavingsAccount::deposit(const Date &date, double amount, const string &desc) {
	record(date, amount, desc);
}

void SavingsAccount::withdraw(const Date &date, double amount, const string &desc) {
	if (amount > getBalance())
		error("not enough money");
	else
		record(date, -amount, desc);
}

void SavingsAccount::settle(const Date &date) {
	double interest = accumulate(date) * rate	//计算年息
		/ date.distance(Date(date.getYear() - 1, 1, 1));
	if (interest != 0)
		record(date, interest, "interest");
	accumulation = 0;
}

void SavingsAccount::show() const {
	cout << id << "\tBalance: " << balance;
}

//;;;==================================================*
//;;;例80: [功能] 
//date.cpp
#include "date.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace {	//namespace使下面的定义只在当前文件中有效
	//存储平年中某个月1日之前有多少天，为便于getMaxDay函数的实现，该数组多出一项
	const int DAYS_BEFORE_MONTH[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
}

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {
	if (day <= 0 || day > getMaxDay()) {
		cout << "Invalid date: ";
		show();
		cout << endl;
		exit(1);
	}
	int years = year - 1;
	totalDays = years * 365 + years / 4 - years / 100 + years / 400
		+ DAYS_BEFORE_MONTH[month - 1] + day;
	if (isLeapYear() && month > 2) totalDays++;
}

int Date::getMaxDay() const {
	if (isLeapYear() && month == 2)
		return 29;
	else
		return DAYS_BEFORE_MONTH[month]- DAYS_BEFORE_MONTH[month - 1];
}

void Date::show() const {
	cout << getYear() << "-" << getMonth() << "-" << getDay();
}

//;;;==================================================*
//;;;例81: [功能] 

//;;;==================================================*
//;;;例82: [功能] 
//Point.cpp
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
	x = y = 0;
	cout << "Default Constructor called." << endl;
}

Point::Point(int x, int y) : x(x), y(y) {
	cout << "Constructor called." << endl;
}

Point::~Point() {
	cout << "Destructor called." << endl;
}

void Point::move(int newX,int newY) {
	cout << "Moving the point to (" << newX << ", " << newY << ")" << endl;
	x = newX;
	y = newY;
}

