#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

int romanToInt(string s)
{

    unordered_map<char, int> m;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] < m[s[i + 1]])
        {
            ans -= m[s[i]];
        }
        else
        {
            ans += m[s[i]];
        }
    }
    return ans;
}

int main() {
    string romanNumeral = "IX";

    int result = romanToInt(romanNumeral);
    cout << "The integer representation of " << romanNumeral << " is: " << result << endl;

    return 0;
}