class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
            if(root){
                int x=sumOfLeafNodes(root->left);
                int y=sumOfLeafNodes(root->right);
                if((!root->left)&&(!root->right)){
                    return x+y+root->data;
                }
                else return x+y;
            }
            return 0;
        }
};
