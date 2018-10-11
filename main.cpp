#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> v;
    string s;
    cout << "Enter Strings: " << endl;
    while(cin >> s) {
        v.push_back(s);

    }
    cout << "Palindromes: " << endl;
    for (int i = 0; i < v.size() ; ++i) {
        if (equal(v[i].begin(), v[i].begin() + v[i].size() / 2, v[i].rbegin())){
            cout << v[i] << endl;
        }

    }

}