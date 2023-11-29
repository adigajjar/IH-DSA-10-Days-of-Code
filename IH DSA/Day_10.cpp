#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

string intToRoman(int num)
{
    vector<pair<int, string>> romanMap{
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};

    int lastIndex = romanMap.size() - 1;
    string result = "";

    while (num != 0)
    {
        while (romanMap[lastIndex].first > num)
        {
            lastIndex--;
        }

        result += romanMap[lastIndex].second;
        num -= romanMap[lastIndex].first;
    }

    return result;
}

int main() {

    int number = 1994;

    string result = intToRoman(number);
    cout << "The Roman numeral representation of " << number << " is: " << result << endl;

    return 0;
}
