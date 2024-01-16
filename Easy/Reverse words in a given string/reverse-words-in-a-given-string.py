# User function Template for python3

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,n):
        # code here 
        n=n[::-1]
        s=""
        for i in n.split("."):
            s+=i[::-1]
            s+="."
        return (s[:-1])
        


#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))

# } Driver Code Ends