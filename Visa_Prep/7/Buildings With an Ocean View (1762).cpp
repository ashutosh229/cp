// Given an array heights representing the heights of buildings facing the ocean, determine which buildings have an unobstructed view of the ocean.

// A building has an ocean view if all the buildings to its right are shorter.
// Return the indices of all buildings with an ocean view, ordered from left to right.

// Input: heights = [4, 2, 3, 1]
// Output: [0, 2, 3]
// Explanation:
// - Building 0 has an ocean view because there are no taller buildings to its right.
// - Building 2 has an ocean view because building 3 is shorter.
// - Building 3 always has an ocean view.

// Input: heights = [4, 3, 2, 1]
// Output: [0, 1, 2, 3]
// Explanation: All buildings have an ocean view.

// Input: heights = [4, 3, 2, 1]
// Output: [0, 1, 2, 3]
// Explanation: All buildings have an ocean view.

// Most Optimal(Right to Left) - O(N), O(1) :
class Solution
{
public
    int[] findBuildings(int[] heights)
    {
        int max = 0;
        List<Integer> l = new ArrayList<>();
        for (int i = heights.length - 1; i >= 0; i--)
        {
            if (heights[i] > max)
            {
                max = heights[i];
                l.add(i); // Add the index to the list
            }
        }
        // Reverse the list to maintain left-to-right order
        int[] answer = new int[l.size()];
        for (int i = 0; i < l.size(); i++)
        {
            answer[i] = l.get(l.size() - 1 - i);
        }
        return answer;
    }
}

// Follow-up: Left to Right Traversal - O(N), O(N):
class Solution
{
public
    int[] findBuildings(int[] heights)
    {
        List<Integer> l = new ArrayList<>();
        for (int i = 0; i < heights.length; i++)
        {
            while (!l.isEmpty() && heights[i] >= heights[l.get(l.size() - 1)])
            {
                l.remove(l.size() - 1); // Remove shorter buildings
            }
            l.add(i); // Add the current index to the stack
        }

        // Convert the result to an array
        int[] a = new int[l.size()];
        for (int i = 0; i < l.size(); i++)
        {
            a[i] = l.get(i);
        }
        return a;
    }
}

// Follow-up: Ocean View from Both Sides
// Dynamic Programming Solution - O(N), O(N):
public int[] findBuildings(int[] heights)
{
    List<Integer> result = new ArrayList<>();
    int n = heights.length;

    int[] leftmax = new int[n];
    int[] rightmax = new int[n];

    leftmax[0] = heights[0];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = Math.max(leftmax[i - 1], heights[i]);
    }

    rightmax[n - 1] = heights[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = Math.max(rightmax[i + 1], heights[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (heights[i] >= leftmax[i] && heights[i] >= rightmax[i])
        {
            result.add(i);
        }
    }

    return result.stream().mapToInt(Integer::intValue).toArray();
}

// One - Pass Solution - O(N), O(1) :
public
int[] findBuildings(int[] heights)
{
    List<Integer> result = new ArrayList<>();
    int leftMax = 0, rightMax = 0, n = heights.length;

    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;

        leftMax = Math.max(leftMax, heights[i]);
        rightMax = Math.max(rightMax, heights[j]);

        if (heights[i] == leftMax && heights[i] >= rightMax)
        {
            result.add(i);
        }
    }

    return result.stream().mapToInt(Integer::intValue).toArray();
}

// Follow - up : Streaming Heights Array
import java.util.ArrayList;
import java.util.List;

class StreamingBuildingsWithOceanView
{
private
    List<Integer> stack = new ArrayList<>();
private
    int currentIndex = 0;

public
    void processNewBuilding(int height, List<Integer> heights)
    {
        while (!stack.isEmpty() && heights.get(stack.get(stack.size() - 1)) <= height)
        {
            stack.remove(stack.size() - 1); // Remove shorter buildings
        }
        stack.add(currentIndex); // Add the current building
        currentIndex++;
    }

public
    List<Integer> getBuildingsWithOceanView()
    {
        return stack;
    }
}