#define _CRT_SECURE_NO_WARNINGS 1


//将两个有序的链表合并为一个新链表，要求新的链表是通过拼接两个链表的节点来生成的，且合并后新链表依然有序。
struct ListNode {
    int val;
    struct ListNode* next;
    
};

class Solution {
public:
    /**
     *
     * @param l1 ListNode类
     * @param l2 ListNode类
     * @return ListNode类
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




 //对于一个给定的链表，返回环的入口节点，如果没有环，返回null,链表环的入口点


 /**
  *
  * @param head ListNode类
  * @return ListNode类
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