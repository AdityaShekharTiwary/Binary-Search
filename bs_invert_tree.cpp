/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if(!root) return NULL;
    Tree* right=solve(root->right);
    Tree* left=solve(root->left);
    root->left=right;
    root->right=left;
    return root;
}