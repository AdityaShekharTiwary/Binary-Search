/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int dfs(Tree* root,int target){
    if(root->val==target) return 1;
    if(root->left){
        if(dfs(root->left,target)) return 1;
    }
    if(root->right){
        if(dfs(root->right,target)) return 1;
    }
    return 0;
}

bool solve(Tree* root, int target) {
    int res = dfs(root, target);
    if (res == 1)  return true;
    else  return false;

}