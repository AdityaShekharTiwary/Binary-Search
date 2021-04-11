/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    if(root == nullptr) return true;
        
        if(root->left != nullptr && root->left->val != root->val) return false;
        if(root->right != nullptr && root->right->val != root->val) return false;
        
        return solve(root->left) && solve(root->right);
}