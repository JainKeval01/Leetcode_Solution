class Solution {
public:
    bool isPalindrome(int x) {
        long long  rev=0;
        int temp=x;
        int a;
        if(x<0){
            return false;
        }
        while(temp!=0){
            a = temp%10;
            rev=rev * 10+a;
            temp=temp/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};