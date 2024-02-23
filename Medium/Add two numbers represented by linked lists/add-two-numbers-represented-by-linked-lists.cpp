//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node * Reverse(Node *node)
    {
        Node *prev=NULL;
        Node *curr=node;
        while(curr)
        {
            Node *front=curr->next;
            
            curr->next=prev;
            
            prev=curr;
            
            curr=front;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *dummy=new Node(-1);
        Node *curr=dummy;
        
        Node*t1= Reverse(first);
        Node *t2=Reverse(second);
        int carry=0;
        while(t1!=NULL || t2!=NULL)
        {
            int sum=carry;
            if(t1)
            {
                sum=sum+t1->data;
                t1=t1->next;
            }
            if(t2)
            {
                sum=sum+t2->data;
                t2=t2->next;
            }
            
             carry=sum/10;
            Node *NN = new Node(sum%10);
           
            curr->next=NN;
            curr=curr->next;
        }
        if(carry!=0)
        {
            Node *NN = new Node(carry);
            curr->next=NN;
            curr=curr->next;
        }
        dummy=dummy->next;
        Node * res = Reverse(dummy);
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends