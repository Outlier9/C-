#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//struct Stack
//{
//	// ��Ա����
//	int* a;
//	int top;
//	int capacity;
//
//	// ��Ա����
//	void Init(int n = 4)
//	{
//		a = (int*)malloc(sizeof(int) * n);
//		if (nullptr == a)
//		{
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		capacity = n;
//		top = 0;
//	}
//};



//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//
//	}
//
////private:
//	int _year;// �����淶����ǿ���ԣ���Ϊ�����ֱ����Ͳ���
//	int _month; // �����������ٿռ�
//	int _day;
//};

//int main()
//{
//	/*Date s;
//	s.Init(2024,3,24);
//	s.Print();*/
//
//	Date d1; // ���壬����ʵ����,���ٿռ�
//	d1.Init(2024, 3, 24);
//	//d1._year++; 
//	// 
//	//Date::_year++; 
//	//������Ϊ��ֻ������,��ĳ�Ա�����������ʵ���������
//	//��˲���ͨ��������ֱ�ӷ������ǣ���Ӧ��ͨ�����ʵ��������
//
//
//}


//class A2
//{
//public:
//	void f2()
//	{
//		cout << "void f2()" << endl;
//	}
//};
//
//class A3
//{};
//
//int main()
//{
//	//Date d1;
//	//Date d2;
//	//d1._year;
//	//d2._year;
//	//d1.Print();
//	//d2.Print();
//
//	//// û�г�Ա������������СΪ1byte��ռλ����ʶ����ʵ����������������ڹ�
//	//cout << sizeof(A2) << endl; // 1
//	//cout << sizeof(A3) << endl; // 1
//
//	//A2 aa1;
//	//A2 aa2;
//
//	A2 a2;
//	A2* p1 = &a2;
//	p1->f2();
//	a2.f2();
//
//	A2* p3 = nullptr;
//	p3->f2();
//
//	return 0;
//}

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2;
	d1.Init(2024, 3, 25);
	d2.Init(2024, 3, 26);
	d1.Print();
	d2.Print();

	return 0;

}









