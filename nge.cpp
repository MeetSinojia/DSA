vector<int> nextGreaterElement(const vector<int>& nums) 
{
    int n = nums.size();
    vector<int> result(n, -1); 
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && nums[i] > nums[st.top()]) 
        {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return result;
}
