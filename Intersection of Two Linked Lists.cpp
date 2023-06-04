/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *ptr = firstHead;
    Node *ptr1 = secondHead;
    int cnt=0,cnt1=0;
    while(ptr!=NULL)
    {
        cnt++;
        ptr= ptr->next;
    }
    while(ptr1!=NULL)
    {
        cnt1++;
        ptr1= ptr1->next;
    }
    if(cnt>=cnt1)
    {
        ptr = firstHead;
        ptr1 = secondHead;
    }else{
        ptr = secondHead;
        ptr1 = firstHead;
    }
    int k = abs(cnt-cnt1);
    while(k!=0)
    {
        ptr = ptr->next;
        k--;
    }
    while(ptr!=ptr1)
    {
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }
    return ptr;
}
