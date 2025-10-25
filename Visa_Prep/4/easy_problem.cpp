int solution(vector<int> a)
{
    int result = 0;
    for (int num : a)
    {
        string s = to_string(num);
        int zero_count = count(s.begin(), s.end(), '0');
        if (zero_count % 2 != 0)
        {
            result++;
        }
    }
    return result;
}