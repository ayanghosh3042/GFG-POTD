// Given a binary search tree and a number N, find the greatest number in the binary search tree that is less than or equal to N. 


int findMaxForN(Node* root, int N)
{
    int temp=-1;
    while(root){
        if(root->key==N){
            return N;
        }
        else if(root->key<N){
            if(root->key<N)temp=root->key;
            root=root->right;
        }
        else{
            if(root->key<N)temp=root->key;
            root=root->left;
        }
    }
    return temp;
}
