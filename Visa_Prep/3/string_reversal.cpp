#include <iostream>
#include <string>
#include <algorithm>

std::string findLexicographicallySmallestString(const std::string &word)
{
    std::string smallest = word;
    int n = word.length();

    for (int k = 1; k <= n; ++k)
    {
        // Reverse the first k characters
        std::string reversedFirstK = word;
        std::reverse(reversedFirstK.begin(), reversedFirstK.begin() + k);
        smallest = std::min(smallest, reversedFirstK);

        // Reverse the last k characters
        std::string reversedLastK = word;
        std::reverse(reversedLastK.end() - k, reversedLastK.end());
        smallest = std::min(smallest, reversedLastK);
    }

    return smallest;
}

int main()
{
    std::string word = "dbaca";
    std::cout << "Lexicographically smallest string: " << findLexicographicallySmallestString(word) << std::endl;
    return 0;
}

// done   

