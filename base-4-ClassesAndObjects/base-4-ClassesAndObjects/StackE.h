#pragma once
#include<stdio.h>
#include<stdlib.h>
// ����
struct Stack // structĬ�Ϸ����޶���Ϊpublic����
{

	// ��Ա����
	int* a;
	int top;
	int capacity;

public:
	// ��Ա����
	void Init(int n = 4);
	void Push(int x);
};

class Queue // classĬ�Ϸ����޶���Ϊprivate˽��
{
public:
	//��Ա����
	void Init(int n);
	void Push(int n);
};