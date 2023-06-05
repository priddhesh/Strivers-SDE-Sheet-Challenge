/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool solve(BinaryTreeNode<int>*l,BinaryTreeNode<int>*r)
{
    if((!l || !r) || (!l && !r)) return !l && !r;
    return (l->data==r->data) && solve(l->left,r->right) && solve(l->right,r->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    return solve(root,root);   
}
