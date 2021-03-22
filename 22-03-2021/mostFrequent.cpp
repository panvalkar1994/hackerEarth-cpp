#include<iostream>
#include<unordered_map>
using namespace std;

int mostFrequent(unordered_map<int, int> map)
{
    int maxFreq = 0, value;
    for(auto x:map)
    {
        if(x.second>=maxFreq)
        {
            maxFreq = x.second;
            value = x.first;
        }
    }
    return value;
    
}

int main()
{
    int N, x;
    unordered_map<int, int> hm;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>x;
        hm[x]++;
    }
    cout<<mostFrequent(hm)<<endl;
    return 0;

}