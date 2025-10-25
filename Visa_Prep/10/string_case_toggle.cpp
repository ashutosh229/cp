#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string solution(string inputText)
{
    for (char &c : inputText)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
        else if (islower(c))
        {
            c = toupper(c);
        }
    }
    return inputText;
}