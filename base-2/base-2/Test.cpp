#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;
//
////2. �����ռ����Ƕ��
//namespace N1
//{
//    int a;
//    int b;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//
//    namespace N2
//    {
//        int c = 10;
//        int d;
//
//        int Sub(int left, int right)
//        {
//            return left - right;
//        }
//    }
//}
//
//int main()
//{
    //// ��<<�������
    //int i = 100;
    //i = i << 1;
    //const char* str = "hello world!";
    //char ch = '\n';

    ////cout << N1::N2::c << endl; // Ƕ��
    //

    //// �����룬�Զ�ʶ������
    //cout << i << endl; // endl�൱��'\n'
    ////printf("%s%d%c",str,i,ch);

    //// ����ȡ
    //cin >> i >> ch;
    //cout << i << ch << endl;
    ////scanf("%d%c", &i, &ch);
//
//
//    double d = 1.1111;
//    printf("%.2lf\n", d);
//    cout << d << endl;
//
//    return 0;
//}

// ȱʡ����
// ȫȱʡ
//void Func(int a = 10, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    //���ֵ��÷���
//    Func(1,2,3);
//    Func(1,2);
//    Func(1);
//    Func();
//
//    return 0;
//}

// ��ȱʡ ��������������������ȱʡ��a���Բ���Ĭ��ֵ����������Ĳ������Ÿ���
//void Func(int a, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    //���ֵ��÷���
//    Func(1, 2, 3);
//    Func(1, 2);
//    Func(1);
//
//    return 0;
//}

#include"stack.h"

//int main()
//{
//    //����ʡ�ռ�
//    //1.ȷ��Ҫ����100������
//    struct Stack st1;
//    StackInit(&st1, 100);
//
//    //2.ֻ����10������
//    struct Stack st2;
//    StackInit(&st2, 100);
//
//    //3.��ȷ��Ҫ������ٸ�
//    struct Stack st3;
//    StackInit(&st3);
//
//    return 0;
//}

//C���Բ�����ͬ������
//CPP����ͬ��������Ҫ�󣺺�������ͬ��������ͬ�����ɺ�������
//1.�������Ͳ�ͬ
//2.����������ͬ
//3.����˳��ͬ


int Add(int left, int right)
{
    cout << "int Add(int left, int right)" << endl;
    return left + right;
}

int Add(double left, double right)
{
    cout << "double Add(int left, double right)" << endl;
    return left + right;
}

int main()
{
    Add(1, 2);
    Add(1.1, 2.2);

    return 0;
}


// C���Բ�֧������ ����ʱ��ֱ���ú�����ȥ�ҵ�ַ����ͬ���������ֲ���
// CPP���֧�֣����������ι�������������������ͣ������������Լ�ʵ����һ��


