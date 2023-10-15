vector<int> nextGreaterElement(const vector<int>& nums) 
{
    int n = nums.size();
    vector<int> result(n, -1); 
    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && nums[st.top()]<nums[i])
        {
            st.pop();
        }
        if(!st.empty())
        {
            result[i]=st.top();
        }
        st.push(i);
    }

    return result;
}
