#include <bits/stdc++.h>
using namespace std;

vector<int> find_nge(vector<int> nums)
{
    int n = nums.size();
    vector<int> nge(n);
    stack<int> index_stack;
    int i = 0;
    while (n--)
    {
        while (!index_stack.empty() && nums[i] > nums[index_stack.top()])
        {
            nge[index_stack.top()] = i;
            index_stack.pop();
        }
        index_stack.push(i);
        i++;
    }
    while (!index_stack.empty())
    {
        nge[index_stack.top()] = -1;
        index_stack.pop();
    }

    return nge;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> nge = find_nge(nums);
    int i = 0;
    int size_nums = nums.size();
    while (size_nums--)
    {
        cout << nums[i] << " " << (nge[i] == -1 ? -1 : nums[nge[i]]) << endl;
        i++;
    }
    return 0;
}
