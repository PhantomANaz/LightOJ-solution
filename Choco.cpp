#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string> i, pair<int,string> j)
{
    return i.first<j.first;
}
int main()
{
    int t,n;
    double l,w,h,V,vol;
    string name;

    cin >> t;

    for(int i = 1; i<=t; i++)
    {
        cin >> n;
        int N = n;
        pair <int,string> par[n];
        V = 0;
        int j = 0;
        while(n--)
        {
            cin>>name>>l>>w>>h;
            vol = l*w*h;
            par[j] = make_pair(vol, name);
            j++;
        }
        sort(par, par+N, cmp);
        if(par[0].first != par[N-1].first)
            cout<<"Case "<<i<<": "<<par[N-1].second<<" took chocolate from "<<par[0].second<<endl;
        else
            cout<<"Case "<<i<<": no thief"<<endl;
    }
}
