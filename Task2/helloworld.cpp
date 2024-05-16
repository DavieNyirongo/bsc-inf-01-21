#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
    vector<string> msg { "hello", "c++", "from", "VS code", "and the c++ extention!"};
    for (const string& world : msg)
    {
        cout << world << " ";
    }
    cout << endl;
}
