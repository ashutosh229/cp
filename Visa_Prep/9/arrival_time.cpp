// 3. given a list of arrival times - Reactor can process one sample at a time, and processing it
// takes 300 seconds. Cooling chamber can hold 10 samples at max (waiting queue for getting
// into the reactor). Samples arriving when cooling chamber is full are rejected . If a sample
// completes synthesis at time T , the sample already waiting in the queue enters the reactor
// first.
// Goal is to find the total time when the last accepted sample finishes its synthesis. (priority
// queue simulation)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arrivals(n);
    for (int i = 0; i < n; i++)
        cin >> arrivals[i];

    queue<int> chamber; // waiting queue
    long long reactor_free_time = 0;
    long long last_finish_time = 0;

    for (int i = 0; i < n; i++)
    {
        long long t = arrivals[i];

        // Free up reactor and queue if possible
        while (!chamber.empty() && t >= reactor_free_time)
        {
            int next_sample = chamber.front();
            chamber.pop();
            reactor_free_time = max(reactor_free_time, (long long)next_sample) + 300;
            last_finish_time = reactor_free_time;
        }

        // If reactor is free now
        if (t >= reactor_free_time)
        {
            reactor_free_time = t + 300;
            last_finish_time = reactor_free_time;
        }
        else
        {
            // Reactor busy, check cooling chamber capacity
            if ((int)chamber.size() < 10)
            {
                chamber.push(t);
            }
            // else reject sample (do nothing)
        }
    }

    // Process remaining samples in chamber
    while (!chamber.empty())
    {
        int next_sample = chamber.front();
        chamber.pop();
        reactor_free_time = max(reactor_free_time, (long long)next_sample) + 300;
        last_finish_time = reactor_free_time;
    }

    cout << last_finish_time << endl;
    return 0;
}
