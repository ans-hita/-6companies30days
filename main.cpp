// C++ program to put spaces between words starting
// with capital letters.
#include <iostream>
using namespace std;

// Function to amend the sentence
void amendSentence(string str)
{
    // Traverse the string
    for(int i=0; i < str.length(); i++)
    {
        // Convert to lowercase if its
        // an uppercase character
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;

            // Print space before it
            // if its an uppercase character
            if (i != 0)
                cout << " ";

            // Print the character
            cout << str[i];
        }

        // if lowercase character
        // then just print
        else
            cout << str[i];
    }
}

// Driver code
int main()
{
    string str ="BruceWayneIsBatman";
    amendSentence(str);
    return 0;
}
