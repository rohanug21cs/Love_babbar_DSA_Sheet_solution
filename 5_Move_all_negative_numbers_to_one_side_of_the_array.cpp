#include<bits/stdc++.h>
using namespace std;
void moveNegativeToLeft(vector<int> & v, int n)
{
    int l=0;
    int r=n-1;
    //using two pointer approach
    while(l<r)
    {   if(v.at(l)>=0 && v.at(r)<0) //swap them
        {
            swap(v.at(l),v.at(r));
        }
        else if(v.at(l)<0 && v.at(r)>=0)
        {
            l++;
            r--;
        }
        else if(v.at(l)>=0 && v.at(r)>=0) 
        {
            r--;
        }
        else if(v.at(l)<0 && v.at(r)<0) 
        {
            l++;
        }

    }
}
int main()
{   
    cout<<"Enter the isze of the vector"<<endl;
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    moveNegativeToLeft(vec,n);
    for(auto it:vec)
    {
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}
