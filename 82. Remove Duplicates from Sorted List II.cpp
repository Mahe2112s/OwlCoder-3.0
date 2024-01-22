/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL) return NULL;
        ListNode * prev= NULL, *tail=NULL;
        ListNode * temp = head;
        int v=0;
        while(temp!=NULL)
        {
            v=temp->val;
            if(temp->next!=NULL and v==temp->next->val)
            {

               while(temp!=NULL and v==temp->val)
               {
                   temp=temp->next;
               }
            }
            else
            {
                ListNode *NN=new ListNode(temp->val);
                if(prev==NULL)
                {
                    prev=NN;
                    tail=prev;
                }
                else
                {
                    tail->next=NN;
                    tail=tail->next;
                }
                temp=temp->next;
               // Nxt=Nxt->next;
            }
        }
        return prev;
    }
};
