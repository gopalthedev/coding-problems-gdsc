#include <iostream>
#include <vector>

using namespace std;

void rearrangeAlternating(vector<int>& arr) {
    int n = arr.size();
    vector<int> pos, neg;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    
    int i = 0, j = 0, k = 0;
    
    while (i < pos.size() && j < neg.size()) {
        arr[k] = pos[i];
        arr[k + 1] = neg[j];
        ++i;
        ++j;
        k += 2;
    }
    
    while (i < pos.size()) {
        arr[k] = pos[i];
        ++i;
        k += 2;
    }
    
    while (j < neg.size()) {
        arr[k] = neg[j];
        ++j;
        k += 2;
    }
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, 5, -6, 7, 8};
    rearrangeAlternating(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}
