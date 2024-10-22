//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
public:
    int convertFive(int n) {
        int result = 0;
        int placeValue = 1;
        if(n==0) return 5;
        while (n != 0) {
            int digit = n % 10;  
            if (digit == 0) {
                digit = 5; 
            }
            result = result + digit * placeValue;  
            placeValue *= 10;  
            n /= 10;  
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;
    }
}
// } Driver Code Ends