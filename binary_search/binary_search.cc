#include <vector>

using namespace std;

int binarysearch(vector<int> &a, int item){
    auto low = 0;
    auto high = a.size() -1;

    while (low <= high)
    {
        auto mid = (low + high) / 2;
        auto guess = a[mid];

        if(guess == item){
            return mid;
        } else if(guess > item){
            high = mid -1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}

