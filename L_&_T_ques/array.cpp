/*01. In an integer array, you need to find out and return 
the sum of two elements such that their absolute sum is closest to zero

Input : arr[]={3,-1,5,-2,4}

Output: 3-2=1, abs(1)=1, which is closest to zero*/

// C++ implementation using STL
#include <bits/stdc++.h>
using namespace std;
													// gfg code hai only for refrence
// Modified to sort by absolute values
bool compare(int x, int y)
{
	return abs(x) < abs(y);
}

void findMinSum(int arr[], int n)
{
	sort(arr, arr + n, compare);
	int min = INT_MAX, x, y;
	for (int i = 1; i < n; i++) {

		// Absolute value shows how close it is to zero
		if (abs(arr[i - 1] + arr[i]) <= min) {

			// if found an even close value
			// update min and store the index
			min = abs(arr[i - 1] + arr[i]);
			x = i - 1;
			y = i;
		}
	}
	cout << "The two elements whose sum is minimum are "
		<< arr[x] << " and " << arr[y];
}

// Driver code
int main()
{

	int arr[] = { 3,-1,5,-2,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	findMinSum(arr, n);
	return 0;
	// This code is contributed by ceeyesharish
}
