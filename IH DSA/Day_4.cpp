#include <iostream>
#include <vector>
#include <unordered_map>
#include<math.h>
using namespace std;

int reverse(int x)
{
    int reverse = 0;
    int y = abs(x);
    while (y)
    {
        if (reverse != 0)
        {
            if (int(pow(2, 31) - 1) / 10 < abs(reverse))
            {
                reverse = 0;
                break;
            }
        }
        reverse = reverse * 10 + y % 10;
        y /= 10;
    }
    if (x < 0)
    {
        reverse *= -1;
    }
    return reverse;
}

int main() {
    int num = 123;

    int result = reverse(num);

    cout << "The reverse of " << num << " is: " << result << endl;

    return 0;
}
