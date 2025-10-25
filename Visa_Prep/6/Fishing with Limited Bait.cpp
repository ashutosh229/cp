#include <bits/stdc++.h>
using namespace std;

int maxFishCatch(vector<int> &fish, vector<int> &baits)
{
    // Sort fish in descending order (largest first)
    sort(fish.rbegin(), fish.rend());
    // Sort baits in descending order (largest first)
    sort(baits.rbegin(), baits.rend());

    int fishIndex = 0; // Index for fish array
    int fishCaught = 0;

    for (int bait : baits)
    {
        int baitUsage = 0;
        // Try to catch up to 3 fish with this bait
        while (baitUsage < 3 && fishIndex < fish.size())
        {
            if (fish[fishIndex] > bait)
            {
                fishCaught++;
                baitUsage++;
                fishIndex++;
            }
            else
            {
                // Fish too small, skip
                fishIndex++;
            }
        }
        if (fishIndex >= fish.size())
            break; // No more fish
    }

    return fishCaught;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int nFish, nBaits;
        cin >> nFish >> nBaits;
        vector<int> fish(nFish), baits(nBaits);
        for (int i = 0; i < nFish; i++)
            cin >> fish[i];
        for (int i = 0; i < nBaits; i++)
            cin >> baits[i];

        cout << maxFishCatch(fish, baits) << "\n";
    }
    return 0;
}
