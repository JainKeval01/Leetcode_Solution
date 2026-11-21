
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r;
        queue<int> d;

        int n = senate.size();

        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R') {
                r.push(i);
            } else {
                d.push(i);
            }
        }

        while (!r.empty() && !d.empty()) {

            int radiant = r.front();
            int dire = d.front();

            r.pop();
            d.pop();

            if (radiant < dire) {
                r.push(radiant + n);
            } else {
                d.push(dire + n);
            }
        }

        return r.empty() ? "Dire" : "Radiant";
    }
};
