//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        for (int i = A; i <= B; i++) {
            int count = 0;
            // Check if the current number exists in the array
            for (int j = 0; j < n; j++) {
                if (i == arr[j]) {
                    count++;
                }
            }
            // If the current number does not exist in the array, return false
            if (count == 0) {
                return false;
            }
        }
        // If all numbers in the range [A, B] exist in the array, return true
        return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, A, B;
        cin >> n >> A >> B;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        Solution ob;
        if (ob.check_elements(a, n, A, B))
            cout << "True";
        else
            cout << "False";

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends