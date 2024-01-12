class Solution(object):
    def Count_v(self,s):
        vow="aeiouAEIOU"
        c=0
        for i in s:
            if i in vow:
                c+=1
        return c
    def halvesAreAlike(self,s):
        n=len(s)
        a=s[0:n//2]
        b=s[n//2:]
        return self.Count_v(a)==self.Count_v(b)
        
        
