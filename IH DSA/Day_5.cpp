#include <iostream>
#include <vector>
#include <unordered_map>
#include<math.h>
using namespace std;

int migratoryBirds(std::vector<int> arr) {
    int temp[6] = {0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < arr.size(); i++){
        temp[arr[i]]++;
    }
    int max = 0;
    for(int i = 1; i < 6; i++){
        if(temp[i] > temp[max]){
            max = i;
        }
    }
    
    return max;
}

int main() {
 
    vector<int> birds = {1, 4, 4, 4, 5, 3, 3, 3, 2, 2, 2, 2, 6, 6};

    int result = migratoryBirds(birds);
    cout << "The most common bird type is: " << result << endl;

    return 0;
}

