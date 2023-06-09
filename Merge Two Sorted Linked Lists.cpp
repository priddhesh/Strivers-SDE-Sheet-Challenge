#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* ptr = new Node<int>(-1);
    Node<int>* ans = ptr;
    Node<int>* a = first;
    Node<int>* b = second;
    Node<int>* K = NULL;
    while(a!=NULL && b!=NULL)
    {
        int k = 0;
        if(a->data<=b->data)
        {
            k = a->data;
            a = a->next;
        }else{
            k = b->data;
            b = b->next;
        }
        Node<int>* dummy = new Node<int>(k);
        ptr->next = dummy;
        ptr = dummy;
    }
    if(a!=NULL)
    {
       K = a;
    }else if(b!=NULL)
    {
        K = b;
    }
    while(K!=NULL)
    {
        Node<int>* dummy = new Node<int>(K->data);
        ptr->next = dummy;
        ptr = dummy;
        K = K->next;
    }
    ptr->next = NULL;
    return ans->next;
}
