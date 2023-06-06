//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int maxmeetings=1;
        
        pair<int,int> p[n+1]; //array to store pairs of end,finish time
        for(int i=0;i<n;i++)
        {
            p[i].first=end[i];
            p[i].second=start[i];
        }
        sort(p,p+n); //sorting according to the finish time, so that we can do more number of jobs
        int limit=p[0].first;
        for(int i=1;i<n;i++)
        {
            if(p[i].second>limit)
            {
                maxmeetings++;
                limit=p[i].first;
            }
        }
        return maxmeetings;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
