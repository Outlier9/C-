#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj; // û��Ĭ�Ϲ��캯��
//	int& _ref; // ����
//	const int _n; // const 
//};
//
//
//class Date
//{
//public:
//	// ��ʼ���б�
//	// 
//	// ��һ��д��
//	// ��ʼ���б���ÿ����Ա���������ʼ����λ��
//	// _n ����const���ͣ�Ҳ����˵ֻ�ܶ���һ��
//	// �����ڹ��캯���У����Զ�γ�ʼ���������ͻ��ƻ�const������Ҫ�õ���ʼ���б�
//	Date(int year, int month, int day, int& x)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//		, _n(1)
//		, _ref(x)
//		, _aa(1)
//	{}
//
//	// �ڶ���д��
//	/*Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	// �����߳�ʼ���б�
//	const int _n;
//	int& _ref;
//	A _aa;
//};
//
//int main()
//{
//	A _aa;
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{}
//
//	A(const A& aa)
//	{}
//};
//
//A Func()
//{
//	A aa;
//	cout << "Func" << endl;
//	return aa;
//}
//
//
//int main()
//{
//	A aa1;
//	A aa2;
//
//	return 0;
//
//}


//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main() {
//	A aa(1);
//	aa.Print();
//}

// A.���1 1
// B.�������
// C.���벻ͨ��
// D.���1 ���ֵ


class Time
{
public:
	Time(int hour = 0)
		:_hour(hour)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;
};

class Date
{
public:
	Date(int day)
	{}
private:
	int _day;
	Time _t;
};


int main()
{
	Date d(1);
}
