//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct Job {
    int id;       // Job Id
    int deadline; // Deadline of job
    int profit;   // Profit if job is over before or on deadline
};


// } Driver Code Ends
/*
struct Job
{
    int id;	 // Job Id
    int deadline; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
*/

class Solution {
    static bool cmp(Job A, Job B){
        return A.profit > B.profit;
        
    }
    public:
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) {
        // your code here
        sort(arr, arr+n, cmp);
        int total_profit = 0;
        int jobs_count = 0;
        
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(arr[i].deadline > maxi){
                maxi = arr[i].deadline;
            }
        }
        vector<int> vc(maxi+1, -1);
        for(int i = 0; i < n; i++){
            for(int j = arr[i].deadline -1; j >= 0; j--){
                if(vc[j] == -1){
                    vc[j] = 1;
                    jobs_count++;
                    total_profit += arr[i].profit;
                    break;
                }
            }
        }
        return {jobs_count, total_profit};
    }
};

//{ Driver Code Starts.
//    Driver program to test methods
int main() {
    int t;
    // testcases
    cin >> t;

    while (t--) {
        int n;

        // size of array
        cin >> n;
        Job arr[n];

        // adding id, deadline, profit
        for (int i = 0; i < n; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            arr[i].id = x;
            arr[i].deadline = y;
            arr[i].profit = z;
        }
        Solution ob;
        // function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends