#include<iostream>
#include<climits> 
using namespace std;

int main() {
    int arr[] = {4, 3, 5, 2, 1};
    int n = 5;
    int maxsum = INT_MIN; 
    for (int start = 0; start < n; start++) {
            int currsum = 0;
        for (int end = start; end < n; end++) { 
          currsum += arr[end];
            maxsum = max(maxsum, currsum);
        }
    }
    cout << maxsum << endl;
    return 0;
}
T.C -> O(N^2)