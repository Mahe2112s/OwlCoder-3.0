#User function Template for python3

class Solution:
    def search(self, pat, text):
        # code here
        joinn=pat+'$'+text #combination of both the strings
        coun=0
        i=0
        j=1
        z=[]
        c=[]
        while(j<len(joinn)):
            
            if(joinn[i]==joinn[j]):
                coun+=1
                j+=1
                i+=1
                continue
            else:
                z.append(coun)
                coun=0
                j-=i
                i=0
                
            j+=1
        
        if(joinn[j-len(pat):]==pat):
            z.append(len(pat))
        for i in range(len(z)):
            if(z[i]==len(pat)):
                c.append(i-len(pat)+1)
        return c
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
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends