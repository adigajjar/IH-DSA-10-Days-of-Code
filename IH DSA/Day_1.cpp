#include<iostream>
#include<vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max = 0;
    for(int i = 0; i<candles.size(); i++){
        if(max < candles[i]){
            max = candles[i];
        }
    }
    int max_count = 0;
    for(int i = 0; i<candles.size(); i++){
        if(max == candles[i]){
            max_count++;
        }
    }
    return max_count;


}

int main() {
    vector<int> candleHeights = {4, 4, 1, 3};

    int result = birthdayCakeCandles(candleHeights);

    cout << "The number of tallest candles is: " << result << std::endl;

    return 0;
}
