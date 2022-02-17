#pragma once
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	bool addNode(ListNode* newnode);
	bool addNode(int v);
	bool removeNode(ListNode* rmnode);
	bool removetail();
	void printnode();
};
