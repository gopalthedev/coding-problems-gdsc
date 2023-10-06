#include <iostream>
#include <vector>

using namespace std;

vector<int> moveNegativesToLeft(vector<int>& arr) {
    vector<int> result;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            result.insert(result.begin(), arr[i]);
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> inputArray = {1, -2, 3, -4, 5, -6};
    vector<int> rearrangedArray = moveNegativesToLeft(inputArray);
    
    cout << "Rearranged Array: ";
    for (int i = 0; i < rearrangedArray.size(); i++) {
        cout << rearrangedArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}
