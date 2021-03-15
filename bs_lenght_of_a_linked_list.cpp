/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    if(!node) return 0;
    int cnt=1;
    while(node->next!=NULL){
        node=node->next;
        cnt++;
    }
    return cnt;
}