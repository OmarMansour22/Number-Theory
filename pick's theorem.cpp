#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void FAST()
{
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    FAST();
    int n;
    cin>>n;
    ll x[n+1], y[n+1];
    for(int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }
    x[n] = x[0];
    y[n] = y[0];
    ll area=0;
    for(int i = 0; i < n; i++){
        area += x[i] * y[i+1];
        area -= y[i] * x[i+1];
    }
    area = abs(area);
    ll bound=0;
    for(int i = 0; i < n; i++){
        if(x[i+1] == x[i])
        {
            bound += abs(y[i+1]-y[i]);
        }
        else if(y[i+1] == y[i])
        {
            bound += abs(x[i+1]-x[i]);
        }
        else
        {
            bound += __gcd(abs(x[i+1]-x[i]), abs(y[i+1]-y[i]));
        }
    }
    cout<<(area+2-bound)/2;
}
