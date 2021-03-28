/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    int len = 0;
    LLNode* temp = node;
    while (temp!=NULL) {
        temp=temp->next;
        len++;
    }
    temp = node;
    for (int i=1;i<len-k;i++) temp = temp->next;
    return temp->val;
}