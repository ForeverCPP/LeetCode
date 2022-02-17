// 21. 合并两个有序链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* myMerge(ListNode* l1, ListNode* l2)
	{
		ListNode* c1 =  l1;
		ListNode* c2 =  l2;
		ListNode* newl = nullptr;
		while (c1 && c2)//c1,c2都不为空指针的情况下循环继续
		{
			ListNode* smallnode;
			smallnode = c1->val < c2->val ? c1 : c2;
			
			if (newl == nullptr)
			{
				newl = smallnode;
			}
			else
			{
				ListNode* tail = gettail(newl);
				tail->next = smallnode;
			}
			//移动游标
			if (smallnode==c1)
			{
				c1 = c1->next;
			}
			else
			{
				c2 = c2->next;
			}
			
		}
		//c1为空，或者c2为空,再或者c1,c2都为空
		if (c1==nullptr&&c2==nullptr)
		{
			return newl;
		}
		ListNode* tail = gettail(newl);
		tail->next = c1==nullptr?c2:c1;
		return newl;
		
	}
	ListNode* gettail(ListNode* l)
	{
		if (l==nullptr)
		{
			return l;
		}
		while (l->next!=nullptr)
		{
			l = l->next;
		}
		return l;
	}
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
	{
		//创建一个新的链表
		ListNode* newlist	=	nullptr;
		while (l1==nullptr&&l2==nullptr)
		{
			if (l1 == nullptr)
			{
				ListNode* newnode = new ListNode(l2->val);
				newnode->next = l2->next;
			}
			if (l2==nullptr)
			{
			}

		}
	}
	void Addnode(ListNode*& list, ListNode* newnode)
	{
		ListNode* cur = list;
		while (cur->next!=nullptr)
		{
			cur = cur->next;
		}
		

		if (list==nullptr)
		{
			list = new	ListNode;
			list->val = newnode->val;
			list->next = newnode->next;
		}
		else
		{
			list->next = newnode;
		}
	}
	
};
ListNode* makeList(std::vector<int> vec)
{
	ListNode* head = nullptr;
	ListNode* first = nullptr;
	for (size_t i = 0; i < vec.size(); i++)
	{
		ListNode* newnode = new ListNode(vec[i]);
		if (head==nullptr)
		{
			head = newnode;
			first = head;
		}
		else
		{
			head->next = newnode;
		}
		head = newnode;
	}
	return first;

}
void printList(ListNode* list)
{
	while (list)
	{
		std::cout << list->val << std::endl;
		list = list->next;
	}
}
int main1()
{
	vector<int> tmpvec{ 1,2,3,5,8 };
	ListNode* list = makeList(tmpvec);
	printList(list);
	std::cout << "Hello World!\n";
	return true;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件