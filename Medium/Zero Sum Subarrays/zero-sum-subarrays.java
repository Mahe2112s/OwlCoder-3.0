//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		sc.nextLine();
		while(t-->0)
		{
		    int n;
		    n=sc.nextInt();
		    
		    long arr[]=new long[n];
	
		    
		    for(int i=0;i<n;i++)
		    {
		        arr[i]=sc.nextLong();
		    }
            Solution ob = new Solution();
		    System.out.println(ob.findSubarray(arr,n));
		}
		
	}
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    //Function to count subarrays with sum equal to 0.
    public static long findSubarray(long[] arr ,int n) 
    {
        //Your code here
        HashMap<Long,Integer> hm=new HashMap<>();
        long p[]=new long[n];
        long s=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            p[l++]=s;
        }
        int c=0;
        hm.put(1L*(0),1);
        for(int i=0;i<n;i++)
        {
             if(hm.containsKey(p[i]))
            {
                c+=hm.get(p[i]);
                hm.put(p[i],hm.getOrDefault(p[i],0)+1);
            }
            else
            {
                hm.put(p[i],hm.getOrDefault(p[i],0)+1);
            }
            
           
        }
        return c;
    }
}