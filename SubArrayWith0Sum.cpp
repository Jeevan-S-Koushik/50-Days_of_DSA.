
#include <iostream>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	for (int i = 0; i < n; i++) {

		int sum = arr[i];
		if (sum == 0)
			return true;
		for (int j = i + 1; j < n; j++) {

			sum += arr[j];
			if (sum == 0)
				return true;
		}
	}
	return false;
}

int main()
{
	int arr[] = { -3, 2, 3, 1, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	if (subArrayExists(arr, N))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;
}

