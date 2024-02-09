class Solution {
public:
    int c=0;
    void Link(ListNode * head)
    {
        if(head==NULL) return;
        Link(head->next);
        c+=1;
       // return c;

    }
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>st;
        Link(head);
        vector<int>v(c,0);
        c=0;
        st.push({head->val,0});
        head=head->next;
        // cout<<st.top().first<<" "<<st.top().second;
        int i=1;
        while(head!=NULL)
        {
            while(!st.empty() and st.top().first<head->val)
            {
                // cout<<st.top().first<<" "<<st.top().second;
                v[st.top().second]=head->val;
                // cout<<v[st.top().second]<<st.top().first<<st.top().second<<endl;
                st.pop();
            }
            st.push({head->val,i++});
            // cout<<i<<"";
            head=head->next;
        }
        return v;
    }
};
