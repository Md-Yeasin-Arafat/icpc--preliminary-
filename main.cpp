#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    // cout<<(3002*6002)/__gcd(3002,6002)<<endl;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long p=1,q=0;
            if(n==1)cout<<6<<endl;
            else{
            
                p=p+n;
                if(p%2==0)p++;
                q=p+n;
                if(q%2==0)q++;
                cout<<p*q<<endl;
        }
    }

//294527
// 56279
// 13529
// 17632891
    return 0;
}