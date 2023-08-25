#include<iostream>
using namespace std;
int main()
{
	int arr[] = {1, 4, 5, 9, 1};
	int n = end(arr) - begin(arr);
    	int count = 0; 
    for (int p1=0,p2=n-1; p1<=p2;)
	{
		if (arr[p1] == arr[p2])
		{
			p1++;
			p2--;
		}
		else if (arr[p1] > arr[p2])
		{
			p2--;
			arr[p2] += arr[p2+1] ;
			count++;
		}
		else
		{
			p1++;
			arr[p1] += arr[p1-1];
			count++;
		}
    }
        cout << count << endl;

	return 0;
}


