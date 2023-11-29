#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

bool isRotated(string s1, string s2)
{
    // Your code here
    if (s1.length() > 1)
    {
        if (s1 == s2)
        {
            return false;
        }
        else if (s1.size() != s2.size())
        {
            return false;
        }
        else
        {
            int n = s1.size();
            string temp = s1 + s1;
            if (temp.find(s2) == 2 || temp.find(s2) == n - 2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
}

int main() {

    string str1 = "waterbottle";
    string str2 = "erbottlewat";

    bool result = isRotated(str1, str2);

    if (result) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }

    return 0;
}