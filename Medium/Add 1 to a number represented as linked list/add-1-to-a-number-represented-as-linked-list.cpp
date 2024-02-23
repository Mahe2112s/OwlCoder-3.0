//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * reverse(Node * node)
    {
        Node * prev= NULL;
        Node * curr=node;
        while(curr)
        {
            Node *front=curr->next;
            
            curr->next=prev;
            
            prev=curr;
            
            curr=front;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int carry=1;
        Node *temp=reverse(head);
        Node *dummy = new Node(-1);
        Node *curr=dummy;
        while(temp)
        {
            int s=carry;
            carry=0;
            s=s+temp->data;
            carry=s/10;
            // cout<<carry;
            if(carry!=0){
                Node *NN= new Node(s%10);
                curr->next=NN;
            }
            else
            {
                Node *NN =new Node(s);
                curr->next=NN;
            }
            curr=curr->next;
            temp=temp->next;
        }
        if(carry!=0)
        {
            Node * NN = new Node(carry);
            curr->next=NN;
            curr=curr->next;
        }
        dummy=dummy->next;
        Node * res=reverse(dummy);
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
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends