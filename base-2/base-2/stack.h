#pragma once
#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int* a;
    int size;
    int capacity;
};
//ʹ��ȱʡ������Ĭ��ֵ������������ʱ�����ȱʡ���������ں��������Ͷ�����ͬʱ����
void StackInit(struct Stack* ps, int n = 4);
void StackPush(struct Stack* ps, int x);
