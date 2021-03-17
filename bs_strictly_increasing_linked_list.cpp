/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    LLNode* slow=head;
    LLNode* fast=head->next;
    while (fast) {
        if (fast->val <= slow->val) {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}