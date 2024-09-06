//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int max_so_far = arr[0];
        int curr_max = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            curr_max = curr_max + arr[i];
            if (curr_max < arr[i]) {
                curr_max = arr[i];
            }
            if (max_so_far < curr_max) {
               max_so_far = curr_max;
            }
        }
        return max_so_far;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends