int solution(vector<string> resources, int conversionRate)
{
    int countA = 0;
    for (const string &resource : resources)
    {
        if (resource == "A")
        {
            countA++;
        }
    }
    int countP = resources.size() - countA;

    int cycles = 0;
    while (true)
    {
        if (countP >= conversionRate)
        {
            countP -= conversionRate;
            countA++;
            cycles++;
        }
        else if (countA > 0)
        {
            countA--;
            countP++;
            cycles++;
        }
        else
        {
            break;
        }
    }
    return cycles;
}