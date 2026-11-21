class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        sort(deck.begin(),deck.end());

        deque<int> dq;

        for(int i=deck.size()-1;i>=0;i--)
        {
            if(!dq.empty())
            {
                int x=dq.back();
                dq.pop_back();
                dq.push_front(x);
            }

            dq.push_front(deck[i]);
        }

        vector<int> ans;

        while(!dq.empty())
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }

        return ans;
    }
};