#define _CRT_SECURE_NO_WARNINGS 1

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pHead ListNodeÀà
  * @return ListNodeÀà
  */
struct ListNode* ReverseList(struct ListNode* pHead) {
    // write code here
//     struct ListNode* pforward ,*temp,*pback;
//     if(pHead = NULL) return 0;
//     pforward = pHead;
//     temp = pHead -> next  ;
//     pback = temp ->next;
//     while(pback != NULL)
//     {
//            /* if(pback != NULL)pback = pback ->next;
//             temp-> next ->next = temp;*/
//         temp->next = pforward;
//         pforward = temp;
//         temp = pback;
//         pback = pback->next;

//     }
//     pHead ->next =NULL;
//     pHead = temp;
    struct ListNode* p, * temp;
    p = pHead;
    while (p->next != NULL)
    {
        p->next->next = temp;
        p->next->next = p->next;
        p = temp;
    }
    pHead = p;
    return pHead;

}