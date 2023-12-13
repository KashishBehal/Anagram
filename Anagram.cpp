class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
     unordered_map<char , int>m;
     unordered_map<char , int>n;
     
        if(a.length()!=b.length()){
            return false;
        }
        for(int i=0;i<a.length();i++){
            m[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            n[b[i]]++;
        }
        return m==n;
    }

};
