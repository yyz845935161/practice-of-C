#define _CRT_SECURE_NO_WARNINGS 1


//���������������ϲ�Ϊһ��������Ҫ���µ�������ͨ��ƴ����������Ľڵ������ɵģ��Һϲ�����������Ȼ����
struct ListNode {
    int val;
    struct ListNode* next;
    
};

class Solution {
public:
    /**
     *
     * @param l1 ListNode��
     * @param l2 ListNode��
     * @return ListNode��
     */
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // write code here
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* ll = NULL;
        ListNode* temp = NULL;

        while (p1 && p2)
        {
            if (p1->val > p2->val)
            {
                temp = ll;
                ll = p2;
                if (temp)temp->next = ll;
                p2 = p2->next;
                ll->next = NULL;
            }
            else
            {
                temp = ll;
                ll = p1;
                if (temp)temp->next = ll;
                p1 = p1->next;
                ll->next = NULL;
            }
        }
        if (!p1)ll->next = p2;
        if (!p2)ll->next = p1;
        return (l1->val) > (l2->val) ? l2 : l1;;
    }
};



 struct ListNode {
 	int val;
 	struct ListNode *next;
 };




 //����һ���������������ػ�����ڽڵ㣬���û�л�������null,��������ڵ�


 /**
  *
  * @param head ListNode��
  * @return ListNode��
  */
struct ListNode* detectCycle(struct ListNode* head) {
    // write code here
    if (head == NULL) return NULL;
    if (head->next == NULL)return NULL;
    struct ListNode* pfast = head->next->next;
    struct ListNode* pslow = head->next;

    while (pfast->next && pfast)
    {
        if (pfast == pslow)
        {
            pslow = head;
            while (pslow != pfast)
            {
                pslow = pslow->next;
                pfast = pfast->next;
            }
            return pslow;
        }
        else
        {
            pfast = pfast->next->next;
            pslow = pslow->next;
        }
    }
    return NULL;
}