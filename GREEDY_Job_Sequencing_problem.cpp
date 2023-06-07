#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 
class Solution 
{
    public:
    bool static comp(Job a, Job b)
    {
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int> ans;
        sort(arr,arr+n,comp); //sorting based in increasing order of profit
        //figuring out the maximum deadline
        int maxdeadline=arr[0].dead;
        for(int i=1;i<n;i++)
        {
            maxdeadline=max(maxdeadline,arr[i].dead);
        }
        int result[maxdeadline+1];
        for(int i=0;i<=maxdeadline;i++)
        {
            result[i]=-1;
        }
        int totaljobs=0,totalprofit=0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(result[j]==-1)
                {
                    result[j]=i; //filling the result array with job ID's
                    totaljobs++;
                    totalprofit+=arr[i].profit;
                    break;
                }
            }
        }
        ans.push_back(totaljobs);
        ans.push_back(totalprofit);
        return ans;
    } 
}; 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}
