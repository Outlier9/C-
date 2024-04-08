#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Date.h"


Date::Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;

		if (!CheckInvalid())
		{
			cout << "�������ڷǷ�" << endl;
		}
	}


bool Date::operator<(const Date& d) const
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			if (_day < d._day)
			{
				return true;
			}
		}
	}
	return false;
}


bool Date::operator<=(const Date& d) const
{
	return *this < d || *this == d;
}

bool Date::operator>(const Date& d) const
{
	return !(*this <= d);
}

bool Date::operator>=(const Date& d) const
{
	return !(*this < d);
}

bool Date::operator==(const Date& d) const
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d) const
{
	return !(*this == d);
}

// ���ڼӵ�����
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day = _day - GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;

	
}


// ���ڼ�����
Date Date::operator+(int day) const
{
	//Date tmp(*this);// ��������
	//tmp._day += day;
	//while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	//{
	//	tmp._day = tmp._day - GetMonthDay(tmp._year, tmp._month);
	//	++tmp._month;
	//	if (tmp._month == 13)
	//	{
	//		++tmp._year;
	//		tmp._month = 1;
	//	}
	//}
	//return tmp;

	Date tmp = *this; // ��������
	tmp += day; // ֱ�ӵ���+=

	return tmp;

}

// ���ڼ�������
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
		}
		_day = GetMonthDay(_year, _month);
	}
	return *this;
}


Date Date::operator-(int day) const
{
	Date tmp = *this;
	tmp -= day;

	return tmp;
}

// ǰ��++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
// ����++,���õ�����������ص��ǵ���ǰ��ֵ�������ǵ������ֵ
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;

	return tmp; //�����˵���ǰ����ʱ����tmp�������ǵ������ֵ
}

// ǰ��--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
// ����--�������������һ��int�β�,ǿ�й������ؽ�������
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;

	return tmp; //�����˵ݼ�ǰ����ʱ����tmp�������ǵݼ����ֵ
}

// ���ڼ����ڣ����ͺ�������
int Date::operator-(const Date& d)
{
	int flag = 1;
	Date max = *this;
	Date min = d;

	if (max < min)
	{
		int flag = -1;
		Date max = d;
		Date min = *this;
	}

	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}
	return n * flag;

}

bool Date::CheckInvalid() const
{
	if (_year <= 0 || _month < 1 || _month > 12 || _day < 1 || _day > 12)
	{
		return false;
	}
	else
	{
		return true;
	}

}


ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	while (1)
	{
		cout << "���Դ����������գ�>";
		in >> d._year >> d._month >> d._day;

		if (!d.CheckInvalid())
		{
			cout << "����������Ч������������" << endl;
		}
		else
		{
			break;
		}
	}

	
	return in;
	
}