#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

// �������������ͻ�����
//�����ռ����ƿ����ظ������Զ��ϲ��������ڲ��ı������ǲ����ظ�
//namespace bit1 // ����ȫ��
//{
//	int x = 0;
//	int rand = 0;
//	// ����
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	// �ṹ��
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//
//}
//
//namespace bit2 // ����ȫ��
//{
//	int x = 2;
//}

//int rand = 0; //���stdlib�ڵĺ������Ʒ���������ͻ

// ��
// :: �������޶���
// 
// ȫ����      �������� ����
// �ֲ���      �������� ����
// �����ռ���           ����
// ����

//������ ����ԭ��
//��ָ���� 1.��ǰ�ֲ���  2.ȫ���� 
//ָ����   3.���ָ���ˣ�ֱ��ȥָ��������

//int main()
//{
//	int x = 1;
//	printf("hello world\n");
//	printf("%d\n", x); // x=1���ֲ�����
//	printf("%d\n", bit1::x); // �����::x����Ĭ����ȫ����
//	printf("%d\n", bit2::x); // �������������ռ����ڵı���������bit::x
//	printf("%d\n", bit1::rand); // �ŵ�namespace�оͲ����ͻ��
//	printf("%d\n", bit1::Add(1,2)); // ���ú�����ָ��������
//	struct bit1::Node phead; // �ṹ�������淶
//	return 0;
//}

#include"List.h"
#include"Queue.h"

// չ�������ռ�
//using namespace bit1;
//using namespace bit2;
//
//int main()
//{
//	//printf("hello world\n");
//
//	struct QNode node1;// using namespace bit1;
//	struct bit1::QNode node2;
//	struct LNode node3; // using namespace bit2;�õ�����Ϳ���ֱ�ӷ��ʵ�bit2��
//	struct bit2::LNode node4; 
//	
//	return 0;
//}


#include<iostream>

// չ�������ռ䣬��������Ŀ�в��ܾ����ã��ᷢ��������ͻ
using namespace std;

int main()
{
	cout << "hello world" << endl;
	//std::cout << "hello world" << std::endl;// �������using namespace std;

	return 0;
}












