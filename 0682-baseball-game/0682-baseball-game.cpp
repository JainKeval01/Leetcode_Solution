class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> st;
        for (int i = 0 ; i< operations.size();i++) {
            if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                int a = st.top();
                st.push(a * 2);
            } else if (operations[i] == "+") {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            } else {
                st.push(stoi(operations[i]));
            }
        }
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};