#include <iostream>
#include <string>
#include <cctype> // For std::isalpha, std::tolower, std::toupper

std::string toggleCase(const std::string &inputText)
{
    std::string result = inputText; // Create a copy to modify
    for (char &ch : result)
    {
        if (std::isalpha(ch))
        { // Check if the character is alphabetic
            if (std::islower(ch))
            {
                ch = std::toupper(ch); // Convert to uppercase
            }
            else
            {
                ch = std::tolower(ch); // Convert to lowercase
            }
        }
    }
    return result;
}

int main()
{
    std::string inputText = "Hello, World!";
    std::string outputText = toggleCase(inputText);
    std::cout << "Original: " << inputText << "\n";
    std::cout << "Toggled: " << outputText << "\n";
    return 0;
}  


// done   

