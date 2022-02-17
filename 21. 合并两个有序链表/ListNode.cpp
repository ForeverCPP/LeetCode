#include "ListNode.h"
#include <iostream>

int main()
{
	ListNode* mynode = new ListNode(5);
	mynode->addNode(3);
	mynode->addNode(5);
	mynode->addNode(8);
	mynode->addNode(6);
	mynode->printnode();
}
bool ListNode::addNode(ListNode* newnode)
{
	ListNode* curnode	=	next;
	while (curnode)
	{
		curnode = curnode->next;
	}
	//curnode point the null node now
	curnode = newnode;
    return false;
}

bool ListNode::addNode(int v)
{
	ListNode* curnode = this;
	while (curnode->next)
	{
		curnode = curnode->next;
	}
	//curnode point the null node now
	curnode->next = new ListNode(v);
	return false;
}

void ListNode::printnode()
{
	ListNode* curnode	=	this;
	while (curnode)
	{
		std::cout << curnode->val;
		curnode = curnode->next;
	}
}
