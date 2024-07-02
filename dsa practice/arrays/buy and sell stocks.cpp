#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int currprofit = 0;
    int maxprofit = 0;
    int buyprice[10000];
    buyprice[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        buyprice[i] = min(buyprice[i - 1], arr[i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        currprofit = arr[i] - buyprice[i];
        maxprofit = max(maxprofit, currprofit);
    }
    cout << maxprofit << endl;
    return 0;
}
