class Solution {
public:
    vector<string> phn={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void PhoneCombinations(string &n,int i,string temp,vector<string>&c){
        //base case
        if(n[i]=='\0'){
            temp += '\0';
            
            if(temp[0]=='\0') return;
            c.push_back(temp);
            return;
        }
        int dig=n[i]-'0';
        if(dig==0 or dig==1) PhoneCombinations(n,i+1,temp,c);
        for(int j=0;j<phn[dig][j]!='\0';j++){
            PhoneCombinations(n,i+1,temp+phn[dig][j],c);
        }

    }
    vector<string> letterCombinations(string digits) {
       
        vector<string>combinations;
        PhoneCombinations(digits,0,"",combinations);
        return combinations;

    }
};
