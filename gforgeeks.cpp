#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int n,m;
    cin >> n;
    int arr[n];
    //get input for array
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //sort the array in ascending order
    sort(arr,arr+n);
    int min = 0, max = 0;
    for(int i = 0; i < m; i++) {
        min += arr[i];
    }
    reverse(arr, arr + n);
    for(int i = 0; i < m; i++) {
        max += arr[i];
    }
    cout << max-min;
    return 0;
}