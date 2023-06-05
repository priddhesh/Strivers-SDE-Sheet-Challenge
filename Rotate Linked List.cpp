/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     int cnt = 0;
     Node* ptr = head;
     Node* p = NULL;
     Node* ptr1 = head;
     Node* ptr2 = head;
     while(ptr!=NULL)
     {
          if(ptr->next == NULL)
          {
               p = ptr;
          }
          ptr = ptr->next;
          cnt++;
     }
     ptr = head;
     if(k%cnt==0)
     {
          return head;
     }else{
          k = k%cnt;
     }
     int a = cnt-k;
     while(a!=0)
     {
          ptr1 = ptr1->next;
          a--;
          if(a!=0)
          {
             ptr2 = ptr2->next;
          }
     } 
     p->next = ptr;
     head = ptr1;
     ptr2->next = NULL;
     return head;
}
