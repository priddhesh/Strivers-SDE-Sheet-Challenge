/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
#include<bits/stdc++.h>

Node* flattenLinkedList(Node* head) 
{
	Node* ptr = head;
	vector<int>v;
	while(ptr!=NULL)
	{
		Node* k = ptr->next;
		Node* t = ptr->child;
		v.push_back(ptr->data);
		while(t!=NULL)
		{
		    v.push_back(t->data);
			t = t->child;
		}
		ptr = k;
	}
	sort(v.begin(),v.end());
	Node* ans = new Node(-1);
	Node* u  = ans;
	for(int i =0;i<v.size();i++)
	{
	    Node* dummy = new Node(v[i]);
	    ans->child = dummy;
	    ans = dummy;
	}
	ans->child = NULL;
	return u->child;
}

