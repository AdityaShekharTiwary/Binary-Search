/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
//int cnt=0;
 int inorder(Tree*root,int lo,int hi,int &cnt){
     if(root){
         if (root->val > lo) inorder(root->left,lo,hi,cnt);
         if(root->val >=lo && root->val <=hi) cnt++;
         if (root->val < hi) inorder(root->right,lo,hi,cnt);
     }
     return cnt;
 }
int solve(Tree* root, int lo, int hi) {
    if(!root) return 0;
    int cnt=0;
    inorder(root,lo,hi,cnt);
    return cnt;
}