#pragma once
// Ҳ������bit1������ͬ�����ڲ��ı������Ʋ����ظ�
namespace bit2
{
	struct LNode
	{
		int val;
		struct LNode* next;
		struct LNode* prev;
	};

	void Init(struct LNode* pq);
	void Push(struct LNode* pq, int x);

}