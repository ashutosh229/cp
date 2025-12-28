#include <bits/stdc++.h>
using namespace std;

// Solution By Larning Unique
// https://t.me/+tLEfDVe9k4JlMDI1

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int trialRounds;
    cin >> trialRounds;

    while (trialRounds--)
    {
        int depthLevel, rootWeight;
        cin >> depthLevel >> rootWeight;

        int maxLeafIndex = 1 << depthLevel;
        int totalNodes = (1 << (depthLevel + 1)) - 1;

        vector<int> treeArray(1 << (depthLevel + 1));
        treeArray[maxLeafIndex] = rootWeight;

        vector<int> splitPlan(depthLevel, 0);
        int remainingWeight = rootWeight - 1;

        // Solution By Larning Unique
        for (int level = depthLevel - 1; level >= 0; level--)
        {
            int capacity = 1 << level;
            if (remainingWeight > 0)
            {
                int assignable = min(remainingWeight, capacity);
                splitPlan[level] = assignable;
                remainingWeight -= assignable;
            }
        }

        vector<int> smallPool, largePool;
        for (int i = 1; i < rootWeight; i++)
            smallPool.push_back(i);
        for (int i = rootWeight + 1; i <= maxLeafIndex; i++)
            largePool.push_back(i);

        set<int> maxNodes;
        int currentNode = maxLeafIndex;
        int smallIndex = 0, largeIndex = 0;

        // https://t.me/+tLEfDVe9k4JlMDI1
        for (int level = 0; level < depthLevel; level++)
        {
            int parentNode = currentNode / 2;
            int siblingNode = parentNode * 2 + 1;
            int siblingLevel = 31 - __builtin_clz(siblingNode);
            int siblingHeight = depthLevel - siblingLevel;
            int leafCount = 1 << siblingHeight;
            int leftmostLeaf = siblingNode << siblingHeight;
            int startIndex = leftmostLeaf;
            int totalLeafs = leafCount;
            int assignCount = splitPlan[level];

            for (int j = 0; j < totalLeafs; j++)
            {
                int position = startIndex + j;
                if (j < assignCount)
                    treeArray[position] = smallPool[smallIndex++];
                else
                    treeArray[position] = largePool[largeIndex++];
            }

            // Solution By Larning Unique
            if (assignCount > 0)
                maxNodes.insert(parentNode);
            currentNode = parentNode;
        }

        // Solution By Larning Unique
        for (int i = totalNodes; i >= 1; i--)
        {
            if (i >= maxLeafIndex)
                continue;
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            if (maxNodes.count(i))
                treeArray[i] = max(treeArray[leftChild], treeArray[rightChild]);
            else
                treeArray[i] = min(treeArray[leftChild], treeArray[rightChild]);
        }

        // https://t.me/+tLEfDVe9k4JlMDI1
        for (int i = 1; i <= totalNodes; i++)
        {
            cout << treeArray[i] << (i < totalNodes ? ' ' : '\n');
        }

        // Solution By Larning Unique
    }

    // Solution By Larning Unique
    return 0;
}