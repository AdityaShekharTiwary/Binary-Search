/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */


void Inorder(Tree* root,vector<int>& res){
    if(root==NULL) return;
    Inorder(root->left,res);
    res.push_back(root->val);
    Inorder(root->right,res);
}

vector<int> solve(Tree* root) {
   vector<int> res;
    Inorder(root,res);
    return res;
}