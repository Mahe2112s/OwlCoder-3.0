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
    int getCount(ListNode *head)
    {
        ListNode * temp = head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head==NULL) return NULL;
        int  cnt=getCount(head);
        //cout<<cnt;
        if(cnt==1 and n==1) return NULL;
        if((cnt==2 and n==2) or cnt==n)
        {
            head=head->next;
            return head;
        }
        if(cnt==2 and n==1)
        {
            head->next=NULL;
            return head;
        }
        ListNode * temp = head->next;
        ListNode *prev = head;
        int h=1;
        while(temp!=NULL)
        {
            h++;
            if((cnt-n+1)==h)
            {
                prev->next=temp->next;
                delete temp;
                break;
            }
            else
            {
                prev=prev->next;
                temp = temp->next;
            }
        }
        return head;
        
    }
};
