#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;

//class ob
//{
//public:
//	void func()
//	{ 
//		cout << "void func()" << endl;
//	}
//};
//
//typedef void(ob::* pobfunc)();
//
//int main()
//{
//	pobfunc p = &ob::func;
//	ob temp;
//	(temp.*p)();
//}




//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator<(const Date& d)
//	{
//		if (_year < d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year)
//		{
//			if (_month < d._month)
//			{
//				return true;
//			}
//			else if(_month == d._month)
//			{
//				if (_day < d._day)
//				{
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//
//	//�ж��Ƿ����
//	bool operator==( const Date& d2)
//	{
//		return _year == d2._year
//			&& _month == d2._month
//			&& _day == d2._day;
//	}
//	//��ʽ���ݣ���Ϊ���ұ���������Ҫ�ı䣬���Զ�Ϊ�������ã����Ҷ�Ҫ��const����д��ʱ��operator��������ֻ����һ����d1����ʽ�����ˣ�����ֻдd2����
//	/*bool operator==(const Date& d1, const Date& d2)
//	{
//		return d1._year == d2._year
//			&& d1._month == d2._month
//			&& d1._day == d2._day;
//	}*/
//
//	Date& operator=(const Date& d) // ����������
//	{
//		if (this != &d) // ������ȡ��ַ
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		
//
//		return *this;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	Date d1(2024, 4, 2);
//	Date d2(2024, 4, 1);
//
//	bool ret1 = d1 < d2;
//	bool ret2 = d1.operator<(d2);
//
//	int i = 0;
//	int j = 1;
//	bool ret3 = i < j;
//
//	Date d3(d1); // ��������
//
//	d1 = d2; // ��ֵ���������
//	d1.Print();
//	d2.Print();
//
//	i = j = 10;
//
//	printf("%d",i);
//
//	return 0;
//}


#include"Date.h"

//int main()
//{
//	Date d1(2024, 4, 6);
//	Date d2 = d1 + 20;
//	d2.Print();
//	d1.Print();
//
//	d2 -= 20;
//	d2.Print();
//
//	d1 += 1000;
//	d1.Print();
//
//	++d1;
//	d1.operator++(); // ��ʾ����
//	d1.Print();
//
//	d1++;
//	d1.operator++(1); // ��ʾ���ã���㴫һ��int,ֻ��Ϊ��ƥ��
//	d1.Print();
//
//	Date d4(2024, 4, 6);
//	Date d5(2024, 8, 1);
//	cout << d5 - d4 << endl;
//}



//int main()
//{
//	Date d1(2024, 4, 7);
//	Date d2 = d1 + 20;
//	d2.Print();
//	d1.Print();
//
//	// ���<<����������ǳ�Ա������Ҫд���±�������ʽ��
//	/*d1 << cout;
//	d1.operator<<(cout);*/
//
//	// �±���<<�����������ȫ�ֺ��������
//	operator<<(cout,d1);
//	cout << d1;
//
//	cin >> d2 >> d1;
//	cout << d1 << d2;
//}


int main()
{
	Date d1(2024, 4, 7);
	Date d2 = d1 + 20;
	

	cin >> d1 >> d2;
	cout << d1 << d2 << endl;

	const Date d3(2024, 4, 1);
	d3.Print();
}




