#pragma once
#include<iostream>
#include<assert.h>
using namespace std;


class Date
{
public:
	bool CheckInvalid() const;

	Date(int year = 1, int month = 1, int day = 1);

	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	// ���ڼӵ�����
	Date& operator+=(int day);
	// ���ڼ�����
	Date operator+(int day) const;
	// ���ڼ�������
	Date& operator-=(int day);
	// ���ڼ�����
	Date operator-(int day) const;

	// ǰ��++
	Date& operator++();
	// ����++�������������һ��int�β�,ǿ�й������ؽ�������
	Date operator++(int);

	// ǰ��--
	Date& operator--();
	// ����--�������������һ��int�β�,ǿ�й������ؽ�������
	Date operator--(int);

	// ���ڼ����ڣ����ͺ�������
	int operator-(const Date& d);




	// ���ʾ���linline,��ȡ��ǰ������
	int GetMonthDay(int year, int month)
	{
		assert(month > 0 && month < 13);
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31 ,30, 31 , 30, 31 };

		// �����ж�
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		return monthDays[month];
	}

	void Print()const  // ����const���ᷢ��Ȩ�޷Ŵ�����ΪDate*����Ҫ��Ϊconst Date*����C++��д��Ϊ�ں�����߼�const
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	// ���д�ɳ�Ա��������ʽ��this����ôthisռ���˵�һ��������Date���������������������ͷ��ˣ���this�����ɸ���
	// ��˸���������ز���д��Ա������Ҫд��ȫ�ֺ��������ܿ���Date��������
	/*void operator<<(ostream& out)
	{
		out << _year << "��" << _month << "��" << _day << "��" << endl;
	}*/

	// ��Ԫ����,��������������˽�г�Ա
	// ��Ԫ�������﷨��ʹ�� friend �ؼ��֣�������ź���ԭ�͡�
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

private:
	int _year;
	int _month;
	int _day;
};
// ��������������
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d); // ���ܼ�const