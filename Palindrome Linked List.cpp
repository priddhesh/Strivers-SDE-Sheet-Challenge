#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int>*head)
{
    LinkedListNode<int>*prev = NULL;
    LinkedListNode<int>*curr = head;
    LinkedListNode<int>*front;
    while(curr!=NULL)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int>*fast = head;
    LinkedListNode<int>*slow = head;
    LinkedListNode<int>*ptr = NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast==NULL)
    {
        ptr = reverse(slow);
    }else{
        ptr = reverse(slow->next);
    }
    fast = head;
    while(ptr!=NULL)
    {
        if(ptr->data!=fast->data)
        {
            return false;
        }
        fast = fast->next;
        ptr = ptr->next;
    }
    return true;
}
