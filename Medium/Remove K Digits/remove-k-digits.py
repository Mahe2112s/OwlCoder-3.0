#User function Template for python3

class Solution:

    def removeKdigits(self, S, r_moves):
        # code here
        Mynum = []
        for num in S:
            while Mynum and Mynum[-1] > num and r_moves > 0:
                r_moves -= 1
                Mynum.pop()
            Mynum.append(num)
        
        while r_moves:
            Mynum.pop()
            r_moves-=1
        
        #print(Mynum)
        ans = "".join(Mynum).lstrip("0")
        if not ans:
            return "0"
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()
        K = int(input())

        obj = Solution()

        ans = obj.removeKdigits(S, K)

        print(ans)


# } Driver Code Ends