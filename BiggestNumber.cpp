#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool customCompare(int a, int b) {
    string strA = to_string(a);
    string strB = to_string(b);
    
    return strA + strB > strB + strA;
}

string formLargestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), customCompare);
    
    string largestNumber;
    for (int num : nums) {
        largestNumber += to_string(num);
    }
    
    return largestNumber;
}

int main() {
    vector<int> numbers = {3, 30, 34, 5, 9};
    string largest = formLargestNumber(numbers);
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}
