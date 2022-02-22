//;;;==================================================*
//;;;��1: [����] 
//2_1.cpp
#include <iostream>
using namespace std;

int main() {
	cout << "Hello! " << endl;
	cout << "Welcome to C++! " << endl;
	return 0;
}
 

//;;;==================================================*
//;;;��2: [����] 
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
//;;;��3: [����] 
//2_11.cpp
#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };

int main() {
	GameResult result;                  //��������ʱ,���Բ�д�ؼ���enum
	enum GameResult omit = CANCEL;      //Ҳ������������ǰдenum

	for (int count = WIN ; count <= CANCEL ; count++) {	//��������ת��
		result = GameResult(count);		//��ʽ����ת��
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
//;;;��4: [����] 
//2_12.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//ѧ����Ϣ�ṹ��
	int num;		//ѧ��
	string name;	//����
	char sex;		//�Ա�
	int age;		//����
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
//;;;��5: [����] 
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
//;;;��6: [����] 
//2_14.cpp
#include <iostream>
using namespace std;

struct Aircraft {
	int wingspan;	//���
	int passengers; //�˿�
	union {					//����������Ϊ�ṹ�����Ƕ��Ա
		float fuelLoad; 	//ս����װ�ص�ȼ��
		float bombLoad; 	//��ը��װ�ص�ը��
		int pallets; 		//������Ļ���
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
//;;;��7: [����] 
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
//;;;��8: [����] 
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
//;;;��9: [����] 
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
//;;;��10: [����] 
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
//;;;��11: [����] 
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
//;;;��12: [����] 
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
//;;;��13: [����] 
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
//;;;��14: [����] 
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
//;;;��15: [����] 
//2_9.cpp
#include <iostream>
using namespace std;

int main() {
	const int N = 4;
	for (int i = 1; i <= N; i++) {	//���ǰ4��ͼ��
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//��ͼ������30��
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {	//�����3��ͼ��
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//��ͼ������30��
		for (int j = 1; j <= 7 - 2 * i ;j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��16: [����] 
//3_1.cpp
#include <iostream>
using namespace std;

//����x��n�η�
double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main() {
	cout <<  "5 to the power 2 is " << power(5, 2) << endl; 
	//����������Ϊһ�����ʽ�������������С�
	return 0;
}

//;;;==================================================*
//;;;��17: [����] 
//3_10.cpp
#include <iostream>
using namespace std;

//��src���������һ�������ƶ���dest����
void move(char src, char dest) { 
	cout << src << " --> " << dest << endl;
}

//��n�����Ӵ�src���ƶ���dest�룬��medium����Ϊ�н�
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
//;;;��18: [����] 
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
//;;;��19: [����] 
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
//;;;��20: [����] 
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
//;;;��21: [����] 
//3_14.cpp
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

//��������������Բ�İ뾶���������
inline double calArea(double radius) {
	return PI * radius * radius;
}

int main() {
	double r = 3.0;	//r��Բ�İ뾶
	//��������������Բ�����������ʱ�˴����滻ΪCalArea���������
	double area	= calArea(r);
	cout << area << endl;
	return 0;
}

//;;;==================================================*
//;;;��22: [����] 
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
//;;;��23: [����] 
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
//;;;��24: [����] 
//3_17.cpp
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() {
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;	//����Ƕ�ֵ

	double radian = angle * PI / 180;	//ת��Ϊ����ֵ
	cout << "sin(" << angle << ") = " << sin(radian) <<endl;
	cout << "cos(" << angle << ") = " << cos(radian) <<endl;
	cout << "tan(" << angle << ") = " << tan(radian) <<endl;
	return 0;
}

//;;;==================================================*
//;;;��25: [����] 
//3_2.cpp
#include <iostream>
using namespace std;

//����x��n�η�
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

//����x��n�η�
double power (double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}


//;;;==================================================*
//;;;��26: [����] 
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
	//ע�⣺��Ϊ����������ȡ�����������д1/5��1/239������Ͷ���0
	cout << "PI = " << a - b << endl;
	return 0;
}

//;;;==================================================*
//;;;��27: [����] 
//3_4.cpp
#include <iostream>
using namespace std;

//�ж�n�Ƿ�Ϊ������
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
//;;;��28: [����] 
//3_5.cpp
#include <iostream>
#include <cmath>  //ͷ�ļ�cmath�о��ж�C++��׼������ѧ������˵��
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
//;;;��29: [����] 
//3_6.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

//Ͷ���ӡ�����������������
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
	cin >> seed;//�������������
	srand(seed);//�����Ӵ��ݸ�rand()

	sum = rollDice(); //��һ��Ͷ���ӡ��������
	switch (sum) {
	case 7:   //�������Ϊ7��11��Ϊʤ,״̬ΪWIN
	case 11:
		status = WIN;
		break;
	case 2:   //����Ϊ2��3��12��Ϊ��,״̬ΪLOSE
	case 3: 
	case 12:
		status = LOSE;
		break;
	default:   //�������,��Ϸ���޽��,״̬ΪPLAYING,���µ���,Ϊ��һ����׼��
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (status == PLAYING) { //ֻҪ״̬��ΪPLAYING,�ͼ���������һ��
		sum = rollDice();
		if (sum == myPoint)    //ĳ�ֵĺ������ڵ�����ȡʤ,״̬��ΪWIN
			status = WIN;
		else if (sum == 7)    //���ֺ���Ϊ7��Ϊ��,״̬��ΪLOSE
			status = LOSE;
	}

	//��״̬��ΪPLAYINGʱ�����ѭ������,���³���������Ϸ���
	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;

	return 0;
}

//;;;==================================================*
//;;;��30: [����] 
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
//;;;��31: [����] 
//3_8.cpp
#include <iostream>
using namespace std;

//????n???��??
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
//;;;��32: [����] 
//3_9.cpp
#include <iostream>
using namespace std;

//�����n������ѡk���˵������
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
//;;;��33: [����] 
//4_1.cpp
#include <iostream>	
using namespace std;

class Clock	{ //ʱ����Ķ���
public:		//�ⲿ�ӿڣ����г�Ա����
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//ʱ�����Ա�����ľ���ʵ��
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

//������
int main() {
	Clock myClock;	//�������myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();	//����ʱ��ΪĬ��ֵ
	myClock.showTime();	//��ʾʱ��
	cout << "Second time set and output:" << endl;
	myClock.setTime(8, 30, 30);	//����ʱ��Ϊ8��30��30
	myClock.showTime();	//��ʾʱ��
	return 0;
}

//;;;==================================================*
//;;;��34: [����] 
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
//;;;��35: [����] 
//4_2.cpp
#include <iostream>
using namespace std;

class Point {	//Point ��Ķ���
public:		//�ⲿ�ӿ�
	Point(int xx = 0, int yy = 0) {	//���캯��
		x = xx;
		y = yy;
	}
	Point(Point &p);	//�������캯��
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:	//˽������
	int x, y;
};

//��Ա������ʵ��
Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

//�β�ΪPoint�����ĺ���
void fun1(Point p) {
	cout << p.getX() << endl;
}

//����ֵΪPoint�����ĺ���
Point fun2() {
	Point a(1, 2);
	return a;
}

//������
int main() {
	Point a(4, 5);	//��һ������A
	Point b = a;	//���һ����A��ʼ��B����һ�ε��ÿ������캯��
	cout << b.getX() << endl;
	fun1(b);		//�����������B��Ϊfun1��ʵ�Ρ��ڶ��ε��ÿ������캯��
	b = fun2();		//������������ķ���ֵ������󣬺�������ʱ�����ÿ������캯��
	cout << b.getX() << endl;
	return 0;
}

//;;;==================================================*
//;;;��36: [����] 
//4_3.cpp
#include <iostream>
using namespace std;

const float PI = 3.141593;		//����p��ֵ
const float FENCE_PRICE = 35;	//դ���ĵ���
const float CONCRETE_PRICE = 20;//����ˮ�൥��

class Circle {	//����������Circle �������ݺͷ���
public:		//�ⲿ�ӿ�
	Circle(float r);		//���캯��
	float circumference();	//����Բ���ܳ�
	float area();			//����Բ�����
private:	//˽�����ݳ�Ա
	float radius;			//Բ�뾶
};

//���ʵ��

//���캯����ʼ�����ݳ�Աradius
Circle::Circle(float r) {
	radius = r;
}	

//����Բ���ܳ�
float Circle::circumference() {
    return 2 * PI * radius;
}

//����Բ�����
float Circle::area() {
    return PI * radius * radius;
}

//������ʵ��
int main () {
	float radius;
	cout << "Enter the radius of the pool: ";	 // ��ʾ�û�����뾶
	cin >> radius;
	
	Circle pool(radius);		//��Ӿ�ر߽�
	Circle poolRim(radius + 3);	//դ��

	//����դ����۲����
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing Cost is $" << fenceCost << endl;

	//���������۲����
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;

	return 0;
}

//;;;==================================================*
//;;;��37: [����] 
//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
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

Point::Point(Point &p) {	//�������캯����ʵ��
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//������
class Line {	//Line��Ķ���
public:	//�ⲿ�ӿ�
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:	//˽�����ݳ�Ա
	Point p1, p2;	//Point��Ķ���p1,p2
	double len;
};

//�����Ĺ��캯��
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

//�����Ŀ������캯��
Line::Line (Line &l): p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

//������
int main() {
	Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	Line line(myp1, myp2);	//����Line��Ķ���
	Line line2(line);	//���ÿ������캯������һ���¶���
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0;
}

//;;;==================================================*
//;;;��38: [����] 
//4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//ѧ����Ϣ�ṹ��
	int num;		//ѧ��
	string name;	//����
	char sex;		//�Ա�
	int age;		//����
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
//;;;��39: [����] 
#include <string>
#include <iostream>
using namespace std;

class ExamInfo {
public:
	//���ֹ��캯�����ֱ��õȼ����Ƿ�ͨ���Ͱٷ�����ʼ��
	ExamInfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) { }
	ExamInfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) { }
	ExamInfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) { }
	void show();

private:
	string name;	//�γ�����
	enum {
		GRADE,
		PASS,
		PERCENTAGE
	} mode;			//���ú��ּƷַ�ʽ
	union {
		char grade;		//�ȼ��Ƶĳɼ�
		bool pass;		//�Ƿ�ͨ��
		int percent;	//�ٷ��Ƶĳɼ�
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
//;;;��40: [����] 
//4_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //�����˻���
private:
	int id;				//�˺�
	double balance;		//���
	double rate;		//����������
	int lastDate;		//�ϴα������ʱ��
	double accumulation;	//�����ۼ�֮��

	//��¼һ���ʣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(int date, double amount);
	//��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//���캯��
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//�����ֽ�
	void deposit(int date, double amount);
	//ȡ���ֽ�
	void withdraw(int date, double amount);
	//������Ϣ��ÿ��1��1�յ���һ�θú���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show();
};

//SavingsAccount����س�Ա������ʵ��
SavingsAccount::SavingsAccount(int date, int id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//����С�������λ
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
	double interest = accumulate(date) * rate / 365;	//������Ϣ
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance: " << balance;
}

int main() {
	//���������˻�
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);

	//��������˻���Ϣ
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;��41: [����] 
//5_1.cpp
#include <iostream>
using namespace std;

int i;			//��ȫ�������ռ��е�ȫ�ֱ���

namespace Ns {
	int j;		//��Ns�����ռ��е�ȫ�ֱ���
}

int main() {
	i = 5;			//Ϊȫ�ֱ���i��ֵ
	Ns::j = 6;		//Ϊȫ�ֱ���j��ֵ
	{				//�ӿ�1
		using namespace Ns; //ʹ���ڵ�ǰ���п���ֱ������Ns�����ռ�ı�ʶ��
		int i;		//�ֲ��������ֲ�������
		i = 7;
		cout << "i = " << i << endl;//���7
		cout << "j = " << j << endl;//���6
	}
	cout << "i = " << i << endl;	//���5
	return 0;
}

//;;;==================================================*
//;;;��42: [����] 
//�ļ�3����������5_10.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��43: [����] 
//5_11.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	//���������˻�
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);

	//��������˻���Ϣ
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;��44: [����] 
//5_2.cpp
#include <iostream>
using namespace std;
int i = 1;	// i Ϊȫ�ֱ��������о�̬������

void other() {
	//a, bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ��һ�ν��뺯��ʱ����ʼ��
	static int a = 2;
	static int b;
	//cΪ�ֲ����������ж�̬�����ڣ�ÿ�ν��뺯��ʱ����ʼ��
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	b = a;
}

int main() {
	//aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ�
	static int a;
	//b, cΪ�ֲ����������ж�̬������
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
//;;;��45: [����] 
//5_3.cpp
#include<iostream>
using namespace std;

class Clock {	//ʱ���ඨ��
public:	//�ⲿ�ӿ�
	Clock();
	void setTime(int newH, int newM, int newS);   //�����βξ����к���ԭ��������
	void showTime();
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//ʱ�����Ա����ʵ��
Clock::Clock() : hour(0), minute(0), second(0) { }	//���캯��

void Clock::setTime(int newH, int newM, int newS) {//�����βξ����оֲ�������
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;  //��������globClock�����о�̬�����ڣ������ռ�������
//��ȱʡ���캯����ʼ��Ϊ0:0:0
int main() {	//������
	cout << "First time output:" << endl;	
	//���þ��������ռ�������Ķ���globClock��
	globClock.showTime();	//����ĳ�Ա����������������
	//��ʾ0:0:0
	globClock.setTime(8,30,30);	//��ʱ������Ϊ8:30:30

	Clock myClock(globClock);	//�������оֲ�������Ķ���myClock
	//���ÿ������캯������globClockΪ��ʼֵ
	cout<<"Second time output:"<<endl;	
	myClock.showTime();	//���þ��оֲ�������Ķ���myClock
	//���8:30:30

	return 0;
}

//;;;==================================================*
//;;;��46: [����] 
//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
		count++;
	}	
	Point(Point &p) {	//�������캯��
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	void showCount() {		//�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}
private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��47: [����] 
//5_5.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
		count++;
	}	
	Point(Point &p) {	//�������캯��
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	static void showCount() {		//��̬������Ա
		cout << "  Object count = " << count << endl;
	}
private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��48: [����] 
//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point &p1, Point &p2);	//��Ԫ��������
private:	//˽�����ݳ�Ա
	int x, y;
};

float dist(Point &p1, Point &p2) {	//��Ԫ����ʵ��
	double x = p1.x - p2.x;	//ͨ���������˽�����ݳ�Ա
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//������
	Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//���������ľ���
	return 0;
}

//;;;==================================================*
//;;;��49: [����] 
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
	a.print();  //����void print()
	const R b(20,52);  
	b.print();  //����void print() const
	return 0;
}

//;;;==================================================*
//;;;��50: [����] 
//5_8.cpp
#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
private:
	const int a;
	static const int b;   //��̬�����ݳ�Ա
};

const int A::b = 10;	//��̬�����ݳ�Ա������˵���ͳ�ʼ��

//�����ݳ�Աֻ��ͨ����ʼ���б�����ó�ֵ
A::A(int i) : a(i) { }

void A::print() {
	cout << a << ":" << b << endl;
}
int main() {
/*��������a��b������100��0��Ϊ��ֵ���ֱ���ù��캯����ͨ�����캯���ĳ�
	ʼ���б������ĳ����ݳ�Ա����ֵ*/
	A a1(100), a2(0);  
	a1.print();
	a2.print();
	return 0;
}

//;;;==================================================*
//;;;��51: [����] 
//5_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(const Point &p1, const Point &p2);
private:	//˽�����ݳ�Ա
	int x, y;
};

float dist(const Point &p1, const Point &p2) {	//���������β�
	double x = p1.x - p2.x;	
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//������
	const Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//���������ľ���
	return 0;
}

//;;;==================================================*
//;;;��52: [����] 
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
//;;;��53: [����] 
//6_10.cpp
#include <iostream>
using namespace std;

//��ʵ��x�ֳ��������ֺ�С�����֣��β�intpart��fracpart��ָ��
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int>(x);	//ȡx����������
	*fracPart = x - *intPart;		//ȡx��С������
}

int main() {
	cout << "Enter 3 float point numbers:" << endl;
	for(int i = 0; i < 3; i++) {
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);	//������ַ��Ϊʵ��
		cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��54: [����] 
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

int main() {	//������
	void (*functionPointer)(float);	//����ָ��
	printStuff(PI);
	functionPointer = printStuff;	//����ָ��ָ��printStuff
	functionPointer(PI);	//����ָ�����
	functionPointer = printMessage;	//����ָ��ָ��printMessage
	functionPointer(TWO_PI);	//����ָ�����
	functionPointer(13.0);	//����ָ�����
	functionPointer = printFloat;	//����ָ��ָ��printFloat
	functionPointer(PI);	//����ָ�����
	printFloat(PI);
	return 0;
}

//;;;==================================================*
//;;;��55: [����] 
//6_12.cpp
#include <iostream>
using namespace std;

class Point {	//��Ķ���
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//���캯��
	int getX() const { return x; }	//����x
	int getY() const { return y; }	//����y
private:	//˽������
	int x, y;
};

int main() {	//������
	Point a(4, 5);	//���岢��ʼ������a
	Point *p1 = &a;	//�������ָ�룬��a�ĵ�ַ�����ʼ��
	cout << p1->getX() << endl;	//����ָ����ʶ����Ա
	cout << a.getX() << endl; 	//���ö��������ʶ����Ա
	return 0;
}

//;;;==================================================*
//;;;��56: [����] 
//6_13.cpp
#include <iostream>
using namespace std;

class Point {	//��Ķ���
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//���캯��
	int getX() const { return x; }	//����x
	int getY() const { return y; }	//����y
private:	//˽������
	int x, y;
};

int main() {	//������
	Point a(4,5);	//�������A
	Point *p1 = &a;	//�������ָ�벢��ʼ��
	int (Point::*funcPtr)() const = &Point::getX;	//�����Ա����ָ�벢��ʼ��
	
	cout << (a.*funcPtr)() << endl;		//(1)ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա����
	cout << (p1->*funcPtr)() << endl;	//(2)ʹ�ó�Ա����ָ��Ͷ���ָ����ʳ�Ա����
	cout << a.getX() << endl;			//(3)ʹ�ö��������ʳ�Ա����
	cout << p1->getX() << endl;			//(4)ʹ�ö���ָ����ʳ�Ա����

	return 0;
}

//;;;==================================================*
//;;;��57: [����] 
//6_14.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//�������캯��
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���

private:	//˽�����ݳ�Ա
	int x, y;
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������ʵ��
	int *ptr = &Point::count;	//����һ��int��ָ�룬ָ����ľ�̬��Ա
	Point a(4, 5);	//�������a
	cout << "Point A: " << a.getX() << ", " << a.getY();
	cout << " Object count = " << *ptr << endl;	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	Point b(a);	//�������b
	cout << "Point B: " << b.getX() << ", " << b.getY();
	cout << " Object count = " << *ptr << endl; 	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	return 0;
}

//;;;==================================================*
//;;;��58: [����] 
//6_15.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//�������캯��
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }

	static void showCount() {		//�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}

private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������ʵ��
	void (*funcPtr)() = Point::showCount;	//����һ��ָ������ָ�룬ָ����ľ�̬��Ա����

	Point a(4, 5);	//�������A
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();	//������������ֱ��ͨ��ָ����ʾ�̬������Ա

	Point b(a);	//�������B
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();	//������������ֱ��ͨ��ָ����ʾ�̬������Ա

	return 0;
}

//;;;==================================================*
//;;;��59: [����] 
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
	Point *ptr1 = new Point;	//��̬��������û�и��������б���˵���ȱʡ���캯��
	delete ptr1;	//ɾ�������Զ�������������

	cout << "Step two: " << endl;
	ptr1 = new Point(1,2);		//��̬�������󣬲����������б���˵������βεĹ��캯��
	delete ptr1;	//ɾ�������Զ�������������

	return 0;
}

//;;;==================================================*
//;;;��60: [����] 
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
	Point *ptr = new Point[2];	//������������
	ptr[0].move(5, 10);		//ͨ��ָ���������Ԫ�صĳ�Ա
	ptr[1].move(15, 20);	//ͨ��ָ���������Ԫ�صĳ�Ա
	cout << "Deleting..." << endl;
	delete[] ptr;	//ɾ��������������
	return 0;
}

//;;;==================================================*
//;;;��61: [����] 
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

//��̬������
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints points(count);	//������������
	points.element(0).move(5, 10);	//ͨ����������Ԫ�صĳ�Ա
	points.element(1).move(15, 20);	//ͨ�����������Ԫ�صĳ�Ա
	return 0;
}

//;;;==================================================*
//;;;��62: [����] 
//6_19.cpp
#include <iostream>
using namespace std;
int main() {
	float (*cp)[9][8] = new float[8][9][8];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 8; k++)
				//��ָ����ʽ����Ԫ��
				*(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				//��ָ��cp��Ϊ������ʹ�ã�ͨ�����������±��������Ԫ��
				cout << cp[i][j][k] << "  ";
			cout << endl;
		}
		cout << endl;
	}

	delete[] cp;
	return 0;
}

//;;;==================================================*
//;;;��63: [����] 
//6_2.cpp
#include <iostream>
using namespace std;
void rowSum(int a[][4], int nRow) {    //�����ά����Aÿ��Ԫ�ص�ֵ�ĺͣ�nrow������
	for (int i = 0; i < nRow; i++) {
		for(int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
	}
} 
int main() {	//������
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };//��������ʼ������
	for (int i = 0; i < 3; i++)	{ //�������Ԫ��
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}
	rowSum(table, 3);	//�����Ӻ�����������к�
	for (int i = 0; i < 3; i++)	//���������
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}

//;;;==================================================*
//;;;��64: [����] 
//6_20.cpp
#include <iostream>
#include <vector>
using namespace std;

//��������arr��Ԫ�ص�ƽ��ֵ
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

	vector<double> arr(n);	//�����������
	cout << "Please input " << n << " real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}

//;;;==================================================*
//;;;��65: [����] 
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

//��̬������
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//������������
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //�����������鸱��
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
//;;;��66: [����] 
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

//��̬������
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

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
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
	ArrayOfPoints pointsArray1(count);		//������������
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //�����������鸱��
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
//;;;��67: [����] 
//6_23.cpp
#include <string>
#include <iostream>
using namespace std;

//����value��ֵ���true��false��titleΪ��ʾ��
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

	//�Ƚ�������Ĳ���
	test("s1 <= \"ABC\"", s1 <= "ABC"); 
	test("\"DEF\" <= s1", "DEF" <= s1);
	//����������Ĳ���
	s2 += s1;
	cout << "s2 = s2 + s1: " << s2 << endl;
	cout << "length of s2: " << s2.length() << endl;
	return 0;
}

//;;;==================================================*
//;;;��68: [����] 
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
//;;;��69: [����] 
//6_25.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	Date date(2008, 11, 1);	//��ʼ����
	//���������˻�
	SavingsAccount accounts[] = {
		SavingsAccount(date, "S3755217", 0.015),
		SavingsAccount(date, "02342342", 0.015)
	};
	const int n = sizeof(accounts) / sizeof(SavingsAccount); //�˻�����
	//11�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//12�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//���������˻�����������˻���Ϣ
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
//;;;��70: [����] 
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
//;;;��71: [����] 
//6_4.cpp
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

//ֱ��������ϣ�pointsΪ���㣬nPointΪ����
float lineFit(const Point points[], int nPoint) {
	float avgX = 0, avgY = 0;
	float lxx = 0, lyy = 0, lxy = 0;
	for(int i = 0; i < nPoint; i++)	{ //����x��y��ƽ��ֵ
		avgX += points[i].getX() / nPoint;
		avgY += points[i].getY() / nPoint;
	}
	for(int i = 0; i < nPoint; i++)	{ //����Lxx��Lyy��Lxy
		lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);
		lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
		lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
	}
	cout << "This line can be fitted by y=ax+b." << endl;
	cout << "a = " << lxy / lxx << "  ";	//����ع�ϵ��a
	cout << "b = " << avgY - lxy * avgX / lxx << endl;	//����ع�ϵ��b
	return static_cast<float>(lxy / sqrt(lxx * lyy));	//�������ϵ��r
}

int main() {
	Point p[10] = { Point(6, 10), Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
		Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100) };	//��ʼ�����ݵ�
	float r = lineFit(p, 10);	//�������Իع����
	cout << "Line coefficient r = " << r << endl;	//������ϵ��
	return 0;
}

//;;;==================================================*
//;;;��72: [����] 
//6_5.cpp
#include <iostream>
using namespace std;
int main() {
	int i;			//����int����i
	int *ptr = &i;	//ȡi�ĵ�ַ����ptr
	i = 10;			//int��������ֵ
	cout << "i = " << i << endl;			//���int������ֵ
	cout << "*ptr = " << *ptr << endl;	//���int��ָ����ָ��ַ������
	return 0;
}

//;;;==================================================*
//;;;��73: [����] 
//6_6.cpp
#include <iostream>
using namespace std;

int main() {
//!	void voidObject;	//����������void���͵ı���
	void *pv;	//�ԣ���������void���͵�ָ��
	int i = 5;
	pv = &i;	//void����ָ��ָ�����ͱ���
	int *pint = static_cast<int *>(pv);	//void����ָ�븳ֵ��int����ָ��
	cout << "*pint = " << *pint << endl;
	return 0;
} 

//;;;==================================================*
//;;;��74: [����] 
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
//;;;��75: [����] 
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
//;;;��76: [����] 
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
//;;;��77: [����] 
//6_8.cpp
#include <iostream>
using namespace std;

int main() {
	int line1[] = { 1, 0, 0 };	//�������飬����ĵ�һ��
	int line2[] = { 0, 1, 0 };	//�������飬����ĵڶ���
	int line3[] = { 0, 0, 1 };	//�������飬����ĵ�����
	
	//��������ָ�����鲢��ʼ��
	int *pLine[3] = { line1, line2, line3 };	
	
	cout << "Matrix test:" << endl;	//�����λ����
	for (int i = 0; i < 3; i++) {	//��ָ������Ԫ��ѭ��
		for (int j = 0; j < 3; j++) 	//�Ծ���ÿһ��ѭ��
			cout << pLine[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��78: [����] 
//6_9.cpp
#include <iostream>
using namespace std;

int main() {
	int array2[3][3]= { { 11, 12, 13 }, { 21, 22, 23 }, { 31, 32, 33 } };
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			cout << *(*(array2 + i) + j) << " ";	//��������ά�����i��Ԫ��ֵ
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��79: [����] 
//account.cpp
#include "account.h"
#include <cmath>
#include <iostream>
using namespace std;

double SavingsAccount::total = 0;

//SavingsAccount����س�Ա������ʵ��
SavingsAccount::SavingsAccount(const Date &date, const string &id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	date.show();
	cout << "\t#" << id << " created" << endl;
}

void SavingsAccount::record(const Date &date, double amount, const string &desc) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//����С�������λ
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
	double interest = accumulate(date) * rate	//������Ϣ
		/ date.distance(Date(date.getYear() - 1, 1, 1));
	if (interest != 0)
		record(date, interest, "interest");
	accumulation = 0;
}

void SavingsAccount::show() const {
	cout << id << "\tBalance: " << balance;
}

//;;;==================================================*
//;;;��80: [����] 
//date.cpp
#include "date.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace {	//namespaceʹ����Ķ���ֻ�ڵ�ǰ�ļ�����Ч
	//�洢ƽ����ĳ����1��֮ǰ�ж����죬Ϊ����getMaxDay������ʵ�֣���������һ��
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
//;;;��81: [����] 
//;;;==================================================*
//;;;��1: [����] 
//2_1.cpp
#include <iostream>
using namespace std;

int main() {
	cout << "Hello! " << endl;
	cout << "Welcome to C++! " << endl;
	return 0;
}
 

//;;;==================================================*
//;;;��2: [����] 
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
//;;;��3: [����] 
//2_11.cpp
#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };

int main() {
	GameResult result;                  //��������ʱ,���Բ�д�ؼ���enum
	enum GameResult omit = CANCEL;      //Ҳ������������ǰдenum

	for (int count = WIN ; count <= CANCEL ; count++) {	//��������ת��
		result = GameResult(count);		//��ʽ����ת��
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
//;;;��4: [����] 
//2_12.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//ѧ����Ϣ�ṹ��
	int num;		//ѧ��
	string name;	//����
	char sex;		//�Ա�
	int age;		//����
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
//;;;��5: [����] 
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
//;;;��6: [����] 
//2_14.cpp
#include <iostream>
using namespace std;

struct Aircraft {
	int wingspan;	//���
	int passengers; //�˿�
	union {					//����������Ϊ�ṹ�����Ƕ��Ա
		float fuelLoad; 	//ս����װ�ص�ȼ��
		float bombLoad; 	//��ը��װ�ص�ը��
		int pallets; 		//������Ļ���
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
//;;;��7: [����] 
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
//;;;��8: [����] 
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
//;;;��9: [����] 
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
//;;;��10: [����] 
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
//;;;��11: [����] 
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
//;;;��12: [����] 
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
//;;;��13: [����] 
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
//;;;��14: [����] 
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
//;;;��15: [����] 
//2_9.cpp
#include <iostream>
using namespace std;

int main() {
	const int N = 4;
	for (int i = 1; i <= N; i++) {	//���ǰ4��ͼ��
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//��ͼ������30��
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {	//�����3��ͼ��
		for (int j = 1; j <= 30; j++)
			cout << ' ';	//��ͼ������30��
		for (int j = 1; j <= 7 - 2 * i ;j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��16: [����] 
//3_1.cpp
#include <iostream>
using namespace std;

//����x��n�η�
double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main() {
	cout <<  "5 to the power 2 is " << power(5, 2) << endl; 
	//����������Ϊһ�����ʽ�������������С�
	return 0;
}

//;;;==================================================*
//;;;��17: [����] 
//3_10.cpp
#include <iostream>
using namespace std;

//��src���������һ�������ƶ���dest����
void move(char src, char dest) { 
	cout << src << " --> " << dest << endl;
}

//��n�����Ӵ�src���ƶ���dest�룬��medium����Ϊ�н�
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
//;;;��18: [����] 
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
//;;;��19: [����] 
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
//;;;��20: [����] 
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
//;;;��21: [����] 
//3_14.cpp
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

//��������������Բ�İ뾶���������
inline double calArea(double radius) {
	return PI * radius * radius;
}

int main() {
	double r = 3.0;	//r��Բ�İ뾶
	//��������������Բ�����������ʱ�˴����滻ΪCalArea���������
	double area	= calArea(r);
	cout << area << endl;
	return 0;
}

//;;;==================================================*
//;;;��22: [����] 
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
//;;;��23: [����] 
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
//;;;��24: [����] 
//3_17.cpp
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() {
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;	//����Ƕ�ֵ

	double radian = angle * PI / 180;	//ת��Ϊ����ֵ
	cout << "sin(" << angle << ") = " << sin(radian) <<endl;
	cout << "cos(" << angle << ") = " << cos(radian) <<endl;
	cout << "tan(" << angle << ") = " << tan(radian) <<endl;
	return 0;
}

//;;;==================================================*
//;;;��25: [����] 
//3_2.cpp
#include <iostream>
using namespace std;

//����x��n�η�
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

//����x��n�η�
double power (double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}


//;;;==================================================*
//;;;��26: [����] 
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
	//ע�⣺��Ϊ����������ȡ�����������д1/5��1/239������Ͷ���0
	cout << "PI = " << a - b << endl;
	return 0;
}

//;;;==================================================*
//;;;��27: [����] 
//3_4.cpp
#include <iostream>
using namespace std;

//�ж�n�Ƿ�Ϊ������
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
//;;;��28: [����] 
//3_5.cpp
#include <iostream>
#include <cmath>  //ͷ�ļ�cmath�о��ж�C++��׼������ѧ������˵��
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
//;;;��29: [����] 
//3_6.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

//Ͷ���ӡ�����������������
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
	cin >> seed;//�������������
	srand(seed);//�����Ӵ��ݸ�rand()

	sum = rollDice(); //��һ��Ͷ���ӡ��������
	switch (sum) {
	case 7:   //�������Ϊ7��11��Ϊʤ,״̬ΪWIN
	case 11:
		status = WIN;
		break;
	case 2:   //����Ϊ2��3��12��Ϊ��,״̬ΪLOSE
	case 3: 
	case 12:
		status = LOSE;
		break;
	default:   //�������,��Ϸ���޽��,״̬ΪPLAYING,���µ���,Ϊ��һ����׼��
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (status == PLAYING) { //ֻҪ״̬��ΪPLAYING,�ͼ���������һ��
		sum = rollDice();
		if (sum == myPoint)    //ĳ�ֵĺ������ڵ�����ȡʤ,״̬��ΪWIN
			status = WIN;
		else if (sum == 7)    //���ֺ���Ϊ7��Ϊ��,״̬��ΪLOSE
			status = LOSE;
	}

	//��״̬��ΪPLAYINGʱ�����ѭ������,���³���������Ϸ���
	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;

	return 0;
}

//;;;==================================================*
//;;;��30: [����] 
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
//;;;��31: [����] 
//3_8.cpp
#include <iostream>
using namespace std;

//????n???��??
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
//;;;��32: [����] 
//3_9.cpp
#include <iostream>
using namespace std;

//�����n������ѡk���˵������
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
//;;;��33: [����] 
//4_1.cpp
#include <iostream>	
using namespace std;

class Clock	{ //ʱ����Ķ���
public:		//�ⲿ�ӿڣ����г�Ա����
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//ʱ�����Ա�����ľ���ʵ��
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

//������
int main() {
	Clock myClock;	//�������myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();	//����ʱ��ΪĬ��ֵ
	myClock.showTime();	//��ʾʱ��
	cout << "Second time set and output:" << endl;
	myClock.setTime(8, 30, 30);	//����ʱ��Ϊ8��30��30
	myClock.showTime();	//��ʾʱ��
	return 0;
}

//;;;==================================================*
//;;;��34: [����] 
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
//;;;��35: [����] 
//4_2.cpp
#include <iostream>
using namespace std;

class Point {	//Point ��Ķ���
public:		//�ⲿ�ӿ�
	Point(int xx = 0, int yy = 0) {	//���캯��
		x = xx;
		y = yy;
	}
	Point(Point &p);	//�������캯��
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:	//˽������
	int x, y;
};

//��Ա������ʵ��
Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

//�β�ΪPoint�����ĺ���
void fun1(Point p) {
	cout << p.getX() << endl;
}

//����ֵΪPoint�����ĺ���
Point fun2() {
	Point a(1, 2);
	return a;
}

//������
int main() {
	Point a(4, 5);	//��һ������A
	Point b = a;	//���һ����A��ʼ��B����һ�ε��ÿ������캯��
	cout << b.getX() << endl;
	fun1(b);		//�����������B��Ϊfun1��ʵ�Ρ��ڶ��ε��ÿ������캯��
	b = fun2();		//������������ķ���ֵ������󣬺�������ʱ�����ÿ������캯��
	cout << b.getX() << endl;
	return 0;
}

//;;;==================================================*
//;;;��36: [����] 
//4_3.cpp
#include <iostream>
using namespace std;

const float PI = 3.141593;		//����p��ֵ
const float FENCE_PRICE = 35;	//դ���ĵ���
const float CONCRETE_PRICE = 20;//����ˮ�൥��

class Circle {	//����������Circle �������ݺͷ���
public:		//�ⲿ�ӿ�
	Circle(float r);		//���캯��
	float circumference();	//����Բ���ܳ�
	float area();			//����Բ�����
private:	//˽�����ݳ�Ա
	float radius;			//Բ�뾶
};

//���ʵ��

//���캯����ʼ�����ݳ�Աradius
Circle::Circle(float r) {
	radius = r;
}	

//����Բ���ܳ�
float Circle::circumference() {
    return 2 * PI * radius;
}

//����Բ�����
float Circle::area() {
    return PI * radius * radius;
}

//������ʵ��
int main () {
	float radius;
	cout << "Enter the radius of the pool: ";	 // ��ʾ�û�����뾶
	cin >> radius;
	
	Circle pool(radius);		//��Ӿ�ر߽�
	Circle poolRim(radius + 3);	//դ��

	//����դ����۲����
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing Cost is $" << fenceCost << endl;

	//���������۲����
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;

	return 0;
}

//;;;==================================================*
//;;;��37: [����] 
//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
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

Point::Point(Point &p) {	//�������캯����ʵ��
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//������
class Line {	//Line��Ķ���
public:	//�ⲿ�ӿ�
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:	//˽�����ݳ�Ա
	Point p1, p2;	//Point��Ķ���p1,p2
	double len;
};

//�����Ĺ��캯��
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

//�����Ŀ������캯��
Line::Line (Line &l): p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

//������
int main() {
	Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	Line line(myp1, myp2);	//����Line��Ķ���
	Line line2(line);	//���ÿ������캯������һ���¶���
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0;
}

//;;;==================================================*
//;;;��38: [����] 
//4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//ѧ����Ϣ�ṹ��
	int num;		//ѧ��
	string name;	//����
	char sex;		//�Ա�
	int age;		//����
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
//;;;��39: [����] 
#include <string>
#include <iostream>
using namespace std;

class ExamInfo {
public:
	//���ֹ��캯�����ֱ��õȼ����Ƿ�ͨ���Ͱٷ�����ʼ��
	ExamInfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) { }
	ExamInfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) { }
	ExamInfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) { }
	void show();

private:
	string name;	//�γ�����
	enum {
		GRADE,
		PASS,
		PERCENTAGE
	} mode;			//���ú��ּƷַ�ʽ
	union {
		char grade;		//�ȼ��Ƶĳɼ�
		bool pass;		//�Ƿ�ͨ��
		int percent;	//�ٷ��Ƶĳɼ�
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
//;;;��40: [����] 
//4_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount { //�����˻���
private:
	int id;				//�˺�
	double balance;		//���
	double rate;		//����������
	int lastDate;		//�ϴα������ʱ��
	double accumulation;	//�����ۼ�֮��

	//��¼һ���ʣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(int date, double amount);
	//��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//���캯��
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//�����ֽ�
	void deposit(int date, double amount);
	//ȡ���ֽ�
	void withdraw(int date, double amount);
	//������Ϣ��ÿ��1��1�յ���һ�θú���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show();
};

//SavingsAccount����س�Ա������ʵ��
SavingsAccount::SavingsAccount(int date, int id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//����С�������λ
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
	double interest = accumulate(date) * rate / 365;	//������Ϣ
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance: " << balance;
}

int main() {
	//���������˻�
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);

	//��������˻���Ϣ
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	return 0;
}

//;;;==================================================*
//;;;��41: [����] 
//5_1.cpp
#include <iostream>
using namespace std;

int i;			//��ȫ�������ռ��е�ȫ�ֱ���

namespace Ns {
	int j;		//��Ns�����ռ��е�ȫ�ֱ���
}

int main() {
	i = 5;			//Ϊȫ�ֱ���i��ֵ
	Ns::j = 6;		//Ϊȫ�ֱ���j��ֵ
	{				//�ӿ�1
		using namespace Ns; //ʹ���ڵ�ǰ���п���ֱ������Ns�����ռ�ı�ʶ��
		int i;		//�ֲ��������ֲ�������
		i = 7;
		cout << "i = " << i << endl;//���7
		cout << "j = " << j << endl;//���6
	}
	cout << "i = " << i << endl;	//���5
	return 0;
}

//;;;==================================================*
//;;;��42: [����] 
//�ļ�3����������5_10.cpp
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��43: [����] 
//5_11.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	//���������˻�
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);

	//��������˻���Ϣ
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}

//;;;==================================================*
//;;;��44: [����] 
//5_2.cpp
#include <iostream>
using namespace std;
int i = 1;	// i Ϊȫ�ֱ��������о�̬������

void other() {
	//a, bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ��һ�ν��뺯��ʱ����ʼ��
	static int a = 2;
	static int b;
	//cΪ�ֲ����������ж�̬�����ڣ�ÿ�ν��뺯��ʱ����ʼ��
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	b = a;
}

int main() {
	//aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ�
	static int a;
	//b, cΪ�ֲ����������ж�̬������
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
//;;;��45: [����] 
//5_3.cpp
#include<iostream>
using namespace std;

class Clock {	//ʱ���ඨ��
public:	//�ⲿ�ӿ�
	Clock();
	void setTime(int newH, int newM, int newS);   //�����βξ����к���ԭ��������
	void showTime();
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//ʱ�����Ա����ʵ��
Clock::Clock() : hour(0), minute(0), second(0) { }	//���캯��

void Clock::setTime(int newH, int newM, int newS) {//�����βξ����оֲ�������
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;  //��������globClock�����о�̬�����ڣ������ռ�������
//��ȱʡ���캯����ʼ��Ϊ0:0:0
int main() {	//������
	cout << "First time output:" << endl;	
	//���þ��������ռ�������Ķ���globClock��
	globClock.showTime();	//����ĳ�Ա����������������
	//��ʾ0:0:0
	globClock.setTime(8,30,30);	//��ʱ������Ϊ8:30:30

	Clock myClock(globClock);	//�������оֲ�������Ķ���myClock
	//���ÿ������캯������globClockΪ��ʼֵ
	cout<<"Second time output:"<<endl;	
	myClock.showTime();	//���þ��оֲ�������Ķ���myClock
	//���8:30:30

	return 0;
}

//;;;==================================================*
//;;;��46: [����] 
//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
		count++;
	}	
	Point(Point &p) {	//�������캯��
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	void showCount() {		//�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}
private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��47: [����] 
//5_5.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
		count++;
	}	
	Point(Point &p) {	//�������캯��
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {  count--; }
	int getX() { return x; }
	int getY() { return y; }

	static void showCount() {		//��̬������Ա
		cout << "  Object count = " << count << endl;
	}
private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount��1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();	//����������

	return 0;
}

//;;;==================================================*
//;;;��48: [����] 
//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point &p1, Point &p2);	//��Ԫ��������
private:	//˽�����ݳ�Ա
	int x, y;
};

float dist(Point &p1, Point &p2) {	//��Ԫ����ʵ��
	double x = p1.x - p2.x;	//ͨ���������˽�����ݳ�Ա
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//������
	Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//���������ľ���
	return 0;
}

//;;;==================================================*
//;;;��49: [����] 
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
	a.print();  //����void print()
	const R b(20,52);  
	b.print();  //����void print() const
	return 0;
}

//;;;==================================================*
//;;;��50: [����] 
//5_8.cpp
#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
private:
	const int a;
	static const int b;   //��̬�����ݳ�Ա
};

const int A::b = 10;	//��̬�����ݳ�Ա������˵���ͳ�ʼ��

//�����ݳ�Աֻ��ͨ����ʼ���б�����ó�ֵ
A::A(int i) : a(i) { }

void A::print() {
	cout << a << ":" << b << endl;
}
int main() {
/*��������a��b������100��0��Ϊ��ֵ���ֱ���ù��캯����ͨ�����캯���ĳ�
	ʼ���б������ĳ����ݳ�Ա����ֵ*/
	A a1(100), a2(0);  
	a1.print();
	a2.print();
	return 0;
}

//;;;==================================================*
//;;;��51: [����] 
//5_9.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(const Point &p1, const Point &p2);
private:	//˽�����ݳ�Ա
	int x, y;
};

float dist(const Point &p1, const Point &p2) {	//���������β�
	double x = p1.x - p2.x;	
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {	//������
	const Point myp1(1, 1), myp2(4, 5);	//����Point��Ķ���
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;	//���������ľ���
	return 0;
}

//;;;==================================================*
//;;;��52: [����] 
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
//;;;��53: [����] 
//6_10.cpp
#include <iostream>
using namespace std;

//��ʵ��x�ֳ��������ֺ�С�����֣��β�intpart��fracpart��ָ��
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int>(x);	//ȡx����������
	*fracPart = x - *intPart;		//ȡx��С������
}

int main() {
	cout << "Enter 3 float point numbers:" << endl;
	for(int i = 0; i < 3; i++) {
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);	//������ַ��Ϊʵ��
		cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��54: [����] 
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

int main() {	//������
	void (*functionPointer)(float);	//����ָ��
	printStuff(PI);
	functionPointer = printStuff;	//����ָ��ָ��printStuff
	functionPointer(PI);	//����ָ�����
	functionPointer = printMessage;	//����ָ��ָ��printMessage
	functionPointer(TWO_PI);	//����ָ�����
	functionPointer(13.0);	//����ָ�����
	functionPointer = printFloat;	//����ָ��ָ��printFloat
	functionPointer(PI);	//����ָ�����
	printFloat(PI);
	return 0;
}

//;;;==================================================*
//;;;��55: [����] 
//6_12.cpp
#include <iostream>
using namespace std;

class Point {	//��Ķ���
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//���캯��
	int getX() const { return x; }	//����x
	int getY() const { return y; }	//����y
private:	//˽������
	int x, y;
};

int main() {	//������
	Point a(4, 5);	//���岢��ʼ������a
	Point *p1 = &a;	//�������ָ�룬��a�ĵ�ַ�����ʼ��
	cout << p1->getX() << endl;	//����ָ����ʶ����Ա
	cout << a.getX() << endl; 	//���ö��������ʶ����Ա
	return 0;
}

//;;;==================================================*
//;;;��56: [����] 
//6_13.cpp
#include <iostream>
using namespace std;

class Point {	//��Ķ���
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { }	//���캯��
	int getX() const { return x; }	//����x
	int getY() const { return y; }	//����y
private:	//˽������
	int x, y;
};

int main() {	//������
	Point a(4,5);	//�������A
	Point *p1 = &a;	//�������ָ�벢��ʼ��
	int (Point::*funcPtr)() const = &Point::getX;	//�����Ա����ָ�벢��ʼ��
	
	cout << (a.*funcPtr)() << endl;		//(1)ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա����
	cout << (p1->*funcPtr)() << endl;	//(2)ʹ�ó�Ա����ָ��Ͷ���ָ����ʳ�Ա����
	cout << a.getX() << endl;			//(3)ʹ�ö��������ʳ�Ա����
	cout << p1->getX() << endl;			//(4)ʹ�ö���ָ����ʳ�Ա����

	return 0;
}

//;;;==================================================*
//;;;��57: [����] 
//6_14.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//�������캯��
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���

private:	//˽�����ݳ�Ա
	int x, y;
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������ʵ��
	int *ptr = &Point::count;	//����һ��int��ָ�룬ָ����ľ�̬��Ա
	Point a(4, 5);	//�������a
	cout << "Point A: " << a.getX() << ", " << a.getY();
	cout << " Object count = " << *ptr << endl;	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	Point b(a);	//�������b
	cout << "Point B: " << b.getX() << ", " << b.getY();
	cout << " Object count = " << *ptr << endl; 	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	return 0;
}

//;;;==================================================*
//;;;��58: [����] 
//6_15.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		count++;
	}	
	Point(const Point &p) : x(p.x), y(p.y) {	//�������캯��
		count++;
	}
	~Point() {  count--; }
	int getX() const { return x; }
	int getY() const { return y; }

	static void showCount() {		//�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}

private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;	//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main() {	//������ʵ��
	void (*funcPtr)() = Point::showCount;	//����һ��ָ������ָ�룬ָ����ľ�̬��Ա����

	Point a(4, 5);	//�������A
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();	//������������ֱ��ͨ��ָ����ʾ�̬������Ա

	Point b(a);	//�������B
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();	//������������ֱ��ͨ��ָ����ʾ�̬������Ա

	return 0;
}

//;;;==================================================*
//;;;��59: [����] 
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
	Point *ptr1 = new Point;	//��̬��������û�и��������б���˵���ȱʡ���캯��
	delete ptr1;	//ɾ�������Զ�������������

	cout << "Step two: " << endl;
	ptr1 = new Point(1,2);		//��̬�������󣬲����������б���˵������βεĹ��캯��
	delete ptr1;	//ɾ�������Զ�������������

	return 0;
}

//;;;==================================================*
//;;;��60: [����] 
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
	Point *ptr = new Point[2];	//������������
	ptr[0].move(5, 10);		//ͨ��ָ���������Ԫ�صĳ�Ա
	ptr[1].move(15, 20);	//ͨ��ָ���������Ԫ�صĳ�Ա
	cout << "Deleting..." << endl;
	delete[] ptr;	//ɾ��������������
	return 0;
}

//;;;==================================================*
//;;;��61: [����] 
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

//��̬������
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints points(count);	//������������
	points.element(0).move(5, 10);	//ͨ����������Ԫ�صĳ�Ա
	points.element(1).move(15, 20);	//ͨ�����������Ԫ�صĳ�Ա
	return 0;
}

//;;;==================================================*
//;;;��62: [����] 
//6_19.cpp
#include <iostream>
using namespace std;
int main() {
	float (*cp)[9][8] = new float[8][9][8];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 8; k++)
				//��ָ����ʽ����Ԫ��
				*(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				//��ָ��cp��Ϊ������ʹ�ã�ͨ�����������±��������Ԫ��
				cout << cp[i][j][k] << "  ";
			cout << endl;
		}
		cout << endl;
	}

	delete[] cp;
	return 0;
}

//;;;==================================================*
//;;;��63: [����] 
//6_2.cpp
#include <iostream>
using namespace std;
void rowSum(int a[][4], int nRow) {    //�����ά����Aÿ��Ԫ�ص�ֵ�ĺͣ�nrow������
	for (int i = 0; i < nRow; i++) {
		for(int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
	}
} 
int main() {	//������
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };//��������ʼ������
	for (int i = 0; i < 3; i++)	{ //�������Ԫ��
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}
	rowSum(table, 3);	//�����Ӻ�����������к�
	for (int i = 0; i < 3; i++)	//���������
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}

//;;;==================================================*
//;;;��64: [����] 
//6_20.cpp
#include <iostream>
#include <vector>
using namespace std;

//��������arr��Ԫ�ص�ƽ��ֵ
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

	vector<double> arr(n);	//�����������
	cout << "Please input " << n << " real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}

//;;;==================================================*
//;;;��65: [����] 
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

//��̬������
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
};

int main() {
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//������������
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //�����������鸱��
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
//;;;��66: [����] 
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

//��̬������
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

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
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
	ArrayOfPoints pointsArray1(count);		//������������
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //�����������鸱��
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
//;;;��67: [����] 
//6_23.cpp
#include <string>
#include <iostream>
using namespace std;

//����value��ֵ���true��false��titleΪ��ʾ��
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

	//�Ƚ�������Ĳ���
	test("s1 <= \"ABC\"", s1 <= "ABC"); 
	test("\"DEF\" <= s1", "DEF" <= s1);
	//����������Ĳ���
	s2 += s1;
	cout << "s2 = s2 + s1: " << s2 << endl;
	cout << "length of s2: " << s2.length() << endl;
	return 0;
}

//;;;==================================================*
//;;;��68: [����] 
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
//;;;��69: [����] 
//6_25.cpp
#include "account.h"
#include <iostream>
using namespace std;

int main() {
	Date date(2008, 11, 1);	//��ʼ����
	//���������˻�
	SavingsAccount accounts[] = {
		SavingsAccount(date, "S3755217", 0.015),
		SavingsAccount(date, "02342342", 0.015)
	};
	const int n = sizeof(accounts) / sizeof(SavingsAccount); //�˻�����
	//11�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//12�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//���������˻�����������˻���Ϣ
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
//;;;��70: [����] 
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
//;;;��71: [����] 
//6_4.cpp
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

//ֱ��������ϣ�pointsΪ���㣬nPointΪ����
float lineFit(const Point points[], int nPoint) {
	float avgX = 0, avgY = 0;
	float lxx = 0, lyy = 0, lxy = 0;
	for(int i = 0; i < nPoint; i++)	{ //����x��y��ƽ��ֵ
		avgX += points[i].getX() / nPoint;
		avgY += points[i].getY() / nPoint;
	}
	for(int i = 0; i < nPoint; i++)	{ //����Lxx��Lyy��Lxy
		lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);
		lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
		lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
	}
	cout << "This line can be fitted by y=ax+b." << endl;
	cout << "a = " << lxy / lxx << "  ";	//����ع�ϵ��a
	cout << "b = " << avgY - lxy * avgX / lxx << endl;	//����ع�ϵ��b
	return static_cast<float>(lxy / sqrt(lxx * lyy));	//�������ϵ��r
}

int main() {
	Point p[10] = { Point(6, 10), Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
		Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100) };	//��ʼ�����ݵ�
	float r = lineFit(p, 10);	//�������Իع����
	cout << "Line coefficient r = " << r << endl;	//������ϵ��
	return 0;
}

//;;;==================================================*
//;;;��72: [����] 
//6_5.cpp
#include <iostream>
using namespace std;
int main() {
	int i;			//����int����i
	int *ptr = &i;	//ȡi�ĵ�ַ����ptr
	i = 10;			//int��������ֵ
	cout << "i = " << i << endl;			//���int������ֵ
	cout << "*ptr = " << *ptr << endl;	//���int��ָ����ָ��ַ������
	return 0;
}

//;;;==================================================*
//;;;��73: [����] 
//6_6.cpp
#include <iostream>
using namespace std;

int main() {
//!	void voidObject;	//����������void���͵ı���
	void *pv;	//�ԣ���������void���͵�ָ��
	int i = 5;
	pv = &i;	//void����ָ��ָ�����ͱ���
	int *pint = static_cast<int *>(pv);	//void����ָ�븳ֵ��int����ָ��
	cout << "*pint = " << *pint << endl;
	return 0;
} 

//;;;==================================================*
//;;;��74: [����] 
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
//;;;��75: [����] 
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
//;;;��76: [����] 
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
//;;;��77: [����] 
//6_8.cpp
#include <iostream>
using namespace std;

int main() {
	int line1[] = { 1, 0, 0 };	//�������飬����ĵ�һ��
	int line2[] = { 0, 1, 0 };	//�������飬����ĵڶ���
	int line3[] = { 0, 0, 1 };	//�������飬����ĵ�����
	
	//��������ָ�����鲢��ʼ��
	int *pLine[3] = { line1, line2, line3 };	
	
	cout << "Matrix test:" << endl;	//�����λ����
	for (int i = 0; i < 3; i++) {	//��ָ������Ԫ��ѭ��
		for (int j = 0; j < 3; j++) 	//�Ծ���ÿһ��ѭ��
			cout << pLine[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��78: [����] 
//6_9.cpp
#include <iostream>
using namespace std;

int main() {
	int array2[3][3]= { { 11, 12, 13 }, { 21, 22, 23 }, { 31, 32, 33 } };
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			cout << *(*(array2 + i) + j) << " ";	//��������ά�����i��Ԫ��ֵ
		cout << endl;
	}
	return 0;
}

//;;;==================================================*
//;;;��79: [����] 
//account.cpp
#include "account.h"
#include <cmath>
#include <iostream>
using namespace std;

double SavingsAccount::total = 0;

//SavingsAccount����س�Ա������ʵ��
SavingsAccount::SavingsAccount(const Date &date, const string &id, double rate)
	: id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	date.show();
	cout << "\t#" << id << " created" << endl;
}

void SavingsAccount::record(const Date &date, double amount, const string &desc) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;	//����С�������λ
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
	double interest = accumulate(date) * rate	//������Ϣ
		/ date.distance(Date(date.getYear() - 1, 1, 1));
	if (interest != 0)
		record(date, interest, "interest");
	accumulation = 0;
}

void SavingsAccount::show() const {
	cout << id << "\tBalance: " << balance;
}

//;;;==================================================*
//;;;��80: [����] 
//date.cpp
#include "date.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace {	//namespaceʹ����Ķ���ֻ�ڵ�ǰ�ļ�����Ч
	//�洢ƽ����ĳ����1��֮ǰ�ж����죬Ϊ����getMaxDay������ʵ�֣���������һ��
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
//;;;��81: [����] 

//;;;==================================================*
//;;;��82: [����] 
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

