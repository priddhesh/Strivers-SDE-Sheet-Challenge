/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solve(TreeNode<int>*root,int &height)
{
    if(root==NULL)  return 0;

    int left = solve(root->left,height);
    int right = solve(root->right,height);
    
    height = max(height,left+right);
    return 1 + max(left,right);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    int height = 0;
    solve(root,height);
    return height;
}
