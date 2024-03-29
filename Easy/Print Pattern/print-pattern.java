//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine().trim());
            
            Solution ob = new Solution();
            List<Integer> ans = new ArrayList<Integer>();
            ans = ob.pattern(N);
            for(int i = 0;i < ans.size();i++)
                System.out.print(ans.get(i) + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    void pattern(int n,ArrayList<Integer> al)
    {
        if(n<=0)
        {
            al.add(n);
            return;
        }
        al.add(n);
        n-=5;
        pattern(n,al);
        n+=5;
        al.add(n);
        
    }
    public List<Integer> pattern(int N){
        // code here
        ArrayList<Integer> al = new ArrayList<>();
        pattern(N,al);
        return al;
    }
}