#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair functionn(vector<int> &vec, int n)
{   Pair minmax;
    int min=INT_MAX;
    int max=INT_MIN;
  
    if(n==1) //there is only one element
    {
        minmax.min=vec.at(0);
        minmax.max=vec.at(0);
        return minmax;
    }
    if(vec.at(0)>vec.at(1))
    {
        minmax.min=vec.at(1);
        minmax.max=vec.at(0);
    }
    for(int i=2;i<n;i++)
    {
        if(minmax.min>vec.at(i))
        minmax.min=vec.at(i);
        if(minmax.max<vec.at(i)) minmax.max=vec.at(i);
    }

    return minmax;
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
    
    struct Pair minmax=functionn(vec,N);
    cout<<"Minimum element is "<<minmax.min<<" and maximum element is "<<minmax.max<<endl;
    return 0;
}
