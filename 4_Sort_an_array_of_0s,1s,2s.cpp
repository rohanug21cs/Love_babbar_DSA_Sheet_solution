#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        int numberof0=0,numberof1=0,numberof2=0;
        for(int i=0;i<n;i++) //counting the number of occurence of each
        {
            if(a[i]==1) numberof1++;
            else if(a[i]==2)  numberof2++;
            else numberof0++;
        }
         
        for(int i=0;i<numberof0;i++)
        {
            a[i]=0;
        }
        for(int i=numberof0;i<(numberof0+numberof1);i++)
        {
            a[i]=1;
        }
        for(int i=(numberof0+numberof1);i<(numberof0+numberof1+numberof2);i++)
        {
            a[i]=2;
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
