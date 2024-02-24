//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node * temp = head;
        Node * res=new Node(-1);
        Node * curr=res;
        int cnt=0;
        while(temp and k!=0)
        {
            k-=1;
            Node * NN = new Node(temp->data);
            curr->next=NN;
            curr=curr->next;
            temp=temp->next;
        }
        res = res ->next;
        if(temp!=NULL){
            Node * temp1=temp;
            while(temp1->next!=NULL)
            {
             //   cout<<temp1->data;
                temp1=temp1->next;
            }
             temp1->next=res;
            return temp;
        }
        return res;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends