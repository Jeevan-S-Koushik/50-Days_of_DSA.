#include <iostream>
#include <vector>

using namespace std;

void generateCombinations(vector<int>& arr, vector<int>& currentCombination, int s, int r) {
    if (r == 0) {
        for (int num : currentCombination) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = s; i <= arr.size() - r; i++) {
        currentCombination.push_back(arr[i]);
        generateCombinations(arr, currentCombination, i + 1, r - 1);
        currentCombination.pop_back();
    }
}

int main() {
    int n, r;
    n = 5;
    r = 3;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }    

    vector<int> currentCombination;
    generateCombinations(arr, currentCombination, 0, r);

    return 0;
}
