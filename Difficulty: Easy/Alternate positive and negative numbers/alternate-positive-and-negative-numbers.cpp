//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    void rearrange(vector<int> &arr) {
        vector<int> v,vr;
        int i = 0;

        // Separate positive and negative numbers
        while (i < arr.size()) {
            if (arr[i] >= 0) {
                v.push_back(arr[i]);
            } else {
                vr.push_back(arr[i]);
            }
            i++;
        }

        i = 0;
        int j = 0;
        int n = arr.size();

        // Merge positive and negative numbers in an alternating manner
        for (int k = 0; k < n; k++) {
            if (k % 2 == 0) {
                if (i < v.size()) {
                    arr[k] = v[i++];
                } else {
                    arr[k] = vr[j++];
                }
            } else {
                if (j < vr.size()) {
                    arr[k] = vr[j++];
                } else {
                    arr[k] = v[i++];
                }
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends