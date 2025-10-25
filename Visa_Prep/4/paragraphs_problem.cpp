#include <vector>
#include <string>

using namespace std;

vector<string> solution(vector<vector<string>> paragraphs, vector<string> aligns, int width)
{
    vector<string> result;
    string border(width + 2, '*');
    result.push_back(border);

    for (size_t i = 0; i < paragraphs.size(); ++i)
    {
        const auto &paragraph_words = paragraphs[i];
        const string &alignment = aligns[i];

        if (paragraph_words.empty())
        {
            continue;
        }

        string current_line;

        for (const string &word : paragraph_words)
        {
            if (current_line.empty())
            {
                current_line = word;
            }
            else
            {
                if (current_line.length() + 1 + word.length() <= width)
                {
                    current_line += " " + word;
                }
                else
                {
                    int padding_size = width - current_line.length();
                    string padding(padding_size, ' ');
                    string formatted_line;

                    if (alignment == "LEFT")
                    {
                        formatted_line = current_line + padding;
                    }
                    else
                    {
                        formatted_line = padding + current_line;
                    }

                    result.push_back("*" + formatted_line + "*");
                    current_line = word;
                }
            }
        }

        if (!current_line.empty())
        {
            int padding_size = width - current_line.length();
            string padding(padding_size, ' ');
            string formatted_line;

            if (alignment == "LEFT")
            {
                formatted_line = current_line + padding;
            }
            else
            {
                formatted_line = padding + current_line;
            }

            result.push_back("*" + formatted_line + "*");
        }
    }

    result.push_back(border);
    return result;
}