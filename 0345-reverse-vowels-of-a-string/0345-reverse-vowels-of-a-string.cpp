
class Solution {
public:
    bool isVowel(char ch) {
        return ch=='A'||ch=='a'||ch=='E'||ch=='e'||
               ch=='I'||ch=='i'||ch=='O'||ch=='o'||
               ch=='U'||ch=='u';
    }

    void solve(string &s, int left, int right) {
        if (left >= right)
            return;

        if (isVowel(s[left]) && isVowel(s[right])) {
            swap(s[left], s[right]);
            solve(s, left + 1, right - 1);
        }
        else if (!isVowel(s[left])) {
            solve(s, left + 1, right);
        }
        else {
            solve(s, left, right - 1);
        }
    }

    string reverseVowels(string s) {
        solve(s, 0, s.size() - 1);
        return s;
    }
};
