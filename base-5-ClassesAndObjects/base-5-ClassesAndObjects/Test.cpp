#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;

//class A
//{
//private:
//	int _a;
//	char _i;
//};
//
//class B
//{
//private:
//	char _i;
//	int _a;
//	
//};
//
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	return 0;
//}


//class Date
//{
//private:
//	int _year;
//	int _month;
//	int _day;
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
//	}
//
//	//const Date* const this
//	// const��ָ��֮ǰ������ָ������ݣ�Ҳ����ָ��ָ������ݣ�������ָ�룩����*֮������ָ�뱾��
//
//	/*void Print(Date* const this) // this�޷����ı�
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//		// �������д"this->",����һ�㲻д
//	}*/
//
//	// �ص㣺
//	// 1.�βκ�ʵ�ε�λ�ã�������ʾд
//	// 2.�����ڲ�����ʹ��
//};

//int main()
//{
//	Date d1;
//	Date d2;
//
//	d1.Init(2024, 3, 26);
//	d2.Init(2024, 3, 27);
//
//	d1.Print();
//	d2.Print();
//
//	//d1.Print(&d1);
//	//d2.Print(&d2);
//	// ��C�����и��﷨��Ӧ�����ǲ�����ʾд����Ӧ�ص� 1
//}

// ����thisָ��
// this���������� -> b
// a�� bջ c��̬�� d������ e��������
// a.malloc�������ڶ��У���Ҫ�ֶ��ͷţ�
// b.��Ϊ����һ���βΣ��ֲ�����������ջ������Щ����������VS�����üĴ������ݴ洢����Ϊ��ҪƵ�����ʣ�
// c.ȫ�ֺ�static���ھ�̬��
// d.C++��const�������ڳ�����


//class A
//{
//public:
//	void PrintA()
//	{
//		// cout << _a << endl; // ��ͼ����һ�������ڵĶ���ĳ�Ա
//		cout << this << endl; // this ָ����ǵ��øú����� A �����ĵ�ַ��this ָ������Ч�ģ���Ϊ��ָ����һ���Ϸ��Ķ���
//	}
//private:
//	int _a;
//};
//
//
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	// A.������� B.�����б���(��Ӧ�ϱ�_a) C.��������(��Ӧ�ϱ�this)
//	(*p).PrintA();
//	// A.������� B.���б��� C.����������
//	//����Ӧ�ϱ�this��������Ȼ����������
//	//��Ϊpָ���˿�ָ�룬PrintA������û�д浽�������
//	//���Բ�û�з��������ã�ֻ�Ǵ�����thisָ�룩
//	//���������������û��ʵ������
//
//	return 0;
//}


// ����ĳ�Ա����
//class Date
//{
//
//public:
//	//Date() // ���캯���������ǳ�ʼ������������ͬ���޷���ֵ��������Ĭ��ֵ������ʵ����ʱ�����й��캯�����������
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//
//	//Date(int year, int month, int day) // ��������
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	Date(int year = 1, int month = 1, int day = 1) // ȱʡ����������������Ȼ�������أ�ȴ��͹��캯���ᷢ����ͻ
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	//Date func();
//	//Date d1(); // ����д�����뺯������������ͻ
//
//	Date d1;
//	d1.Print(); // ֱ�ӵ��ó�Ա���������Զ���ʼ��
//
//	Date d2(2024, 3, 26); // ��������ʵ����ʱ����ʼ��
//	d2.Print();
//
//	Date d3(2024); // ȱʡ��������
//	d3.Print();
//
//}

// ���캯����Ĭ�ϳ�Ա���������ǲ�д������������һ�������ǻ���Ҫ�Լ�ʵ��һ�����캯��
//class Date
//{
//public:
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//// ���������Ը�ȱʡֵȥ��ʼ���������Ƕ��壬��Ȼ������
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day;
//};


// �������͡���������     int/char/double/ָ�� �����Լ������������
// �Զ�������             struct/class
// Ĭ�����ɵĹ��캯�����������ú������������Զ������ͻ�ȥ��������Ĭ�Ϲ���
// �������û��д�κι��캯�����Ż�����

//����һ�����ͳ�Ա�ͳ�ʼ������
//��Ҫд���캯�����Ǿ��Լ�д������Ҫʱ���ñ������Լ����ɵ�
//������������¶���Ҫ�Լ�ʵ�ֹ��캯��

//int main()
//{
//	Date d1;
//	d1.Print();
//	
//	return 0;
//}


//class Time
//{
//public:
//    Time()
//    {
//        cout << "Time()" << endl;
//        _hour = 0;
//        _minute = 0;
//        _second = 0;
//    }
//
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//private:
//    // ��������(��������)
//    int _year;
//    int _month;
//    int _day;
//    // �Զ�������
//    Time _t;
//};
//
//int main()
//{
//    Date d;
//    return 0;
//}


//class Date
//{
//
//public:
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	~Date() // ������������ǰ�߼�һ��~���ţ���֧�����أ�û�в������޷���ֵ���ͣ��������ʱ�Զ�����
//	{
//		cout << "~Date" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//}

typedef int DataType;

class Stack
{
public:
    Stack(size_t capacity = 3)
        : _capacity(capacity), _size(0)
    {
        _array = new DataType[capacity];
        if (!_array)
        {
            throw std::bad_alloc();
        }
    }
    
    ~Stack()
    {
        delete[] _array;
        _array = nullptr;
    }
    
    void Push(DataType data)
    {
        if (IsFull())
        {
            throw std::overflow_error("Stack is full");
        }
        _array[_size++] = data;
    }
    
    DataType Pop()
    {
        if (IsEmpty())
        {
            throw std::underflow_error("Stack is empty");
        }
        return _array[--_size];
    }
    
    DataType Top() const
    {
        if (IsEmpty())
        {
            throw std::underflow_error("Stack is empty");
        }
        return _array[_size - 1];
    }
    
    bool IsEmpty() const
    {
        return _size == 0;
    }
    
    bool IsFull() const
    {
        return _size == _capacity;
    }

private:
    DataType* _array;
    int _capacity;
    int _size;
};

void TestStack()
{
    Stack s(5); // ָ��ջ������
    for (int i = 1; i <= 5; ++i)
    {
        try
        {
            s.Push(i);
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
        }
    }
    
    while (!s.IsEmpty())
    {
        std::cout << s.Pop() << '\n';
    }
}

int main()
{
    try
    {
        TestStack();
    }
    catch (const std::exception& e)
    {
        std::cerr << "An error occurred: " << e.what() << '\n';
    }

    return 0;
}
