#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];

        for(ll i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }

        if(n%2 == 0)
        {
            cout<<"2"<<endl;
            cout<<"1"<<" "<<n<<endl;
            cout<<"1"<<" "<<n<<endl;
        }
        else{
            cout<<"4"<<endl;
            cout<<"1"<<" "<<n<<endl;
            cout<<"1"<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}

