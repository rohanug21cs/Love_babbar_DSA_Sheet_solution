#include<bits/stdc++.h>
using namespace std;
void reversearr(vector<int> &vec,int N)
{
    for(int i=0;i<N/2;i++)
    {
        swap(vec[i],vec[N-1-i]);
    }
}
void printarr(vector<int> vec, int N)
{
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}
int main()
{   
    vector<int> vec;
    cout<<"Enter the number of elements:"<<endl;
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {   int temp;
        cin>>temp;
        vec.emplace_back(temp);

    }cout<<endl;
    reversearr(vec,N);
    printarr(vec,N);
    return 0;
}
