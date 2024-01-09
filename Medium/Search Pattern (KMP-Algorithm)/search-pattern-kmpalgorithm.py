#User function Template for python3

class Solution:
    def search(self, pat, txt):
        # code here
        n=len(txt)
        m=len(pat)
        l=[]
        for i in range(0,(n-m)+1):
            t=txt[i:i+m]
            if(t==pat):
                l.append(i+1)
        return l


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends