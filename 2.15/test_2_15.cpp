#define _CRT_SECURE_NO_WARNINGS 1


//判断是否有环
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param head ListNode类
  * @return bool布尔型
  */
int hasCycle(struct ListNode* head) {
    // write code here
    struct ListNode* pfast = head;
    struct ListNode* pslow = head;
    while ((pfast->next != NULL) && (pfast != NULL))
    {

        pfast = pfast->next->next;
        pslow = pslow->next;

        if (pfast == pslow)
            return 1;
    }
    return 0;
}


/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
    /**
     *
     * @param root TreeNode类
     * @return bool布尔型
     */
    int isSymmetric(TreeNode* root) {
        // write code here
        if (root == NULL) return 1;
        return subSymmetric(root->left, root->right);

    }

    int subSymmetric(struct TreeNode* left, struct TreeNode* right)
    {
        if ((left != NULL) ^ (right != NULL))return 0;
        if ((left == NULL) && (right == NULL))return 1;
        if (left->val != right->val) return 0;
        if (subSymmetric(left->left, right->right) && subSymmetric(left->right, right->left))
            return 1;
        return 0;

    }
};