/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* ptr = num1;
        Node* p = num2;
        Node* h = new Node(-1);
        Node* a = h;
        int carry = 0,sum = 0;
        while(ptr!=NULL && p!=NULL)
        {
           sum = ptr->data + p->data + carry;
           if(sum>9)
           {
               Node * n = new Node(sum%10);
               carry = 1;
               h->next = n;
               h = n;
               n->next = NULL;
           }else{
               Node * n = new Node(sum);
               carry = 0;
               h->next = n;
               h = n;
               n->next = NULL;
           }
           ptr = ptr->next;
           p = p->next;
        }
        if(ptr!=NULL || p!=NULL)
        {
           Node*w;
           if(ptr!=NULL)
           {
               w = ptr;
           }else{
               w = p;
           }
           while(w!=NULL)
           { 
            sum = w->data + carry;
             if(sum>9)
           {
               Node * n = new Node(sum%10);
               carry = 1;
               h->next = n;
               h = n;
               n->next = NULL;
           }else{
               Node * n = new Node(sum);
               carry = 0;
               h->next = n;
               h = n;
               n->next = NULL;
           }
           w = w->next;
           }
        }
        if(carry ==1)
           {
               Node * n = new Node(1);
               h->next = n;
               h = n;
               n->next = NULL;
           }
        return a->next;
}
