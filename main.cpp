#include <iostream>
#include <vector>
#include <string>

using namespace std;

void StringArrayWithVectorView()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string &word : msg)
    {
        cout << word << endl;
    }
    cout << endl;
}

void StringArrayWithVectorInput()
{
    vector<string> msg {};
    string inputString;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> inputString;
        msg.push_back(inputString);
    }
    cout << "--------------Output----------------------";
    for (size_t i = 0; i < 5; i++)
    {
        cout << msg[i] << endl;
    }
}

int main()
{
    // StringArrayWithVectorView();
    StringArrayWithVectorInput();
}

