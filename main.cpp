#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
   
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
  
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) 
        {
           res++;
           j = 0;
        }
    }
    return res;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
    string s,st;
    cin>>s>>st;

    int lcm=(s.size()*st.size())/__gcd(s.size(),st.size());
    lcm=lcm/max(s.size(),st.size());
    lcm--;
    while(lcm--){
        if(s.size()>=st.size())s+=s;
        else st+=st;
    }

        int f1=0,f2=0;
        for(int i=1;i<s.size();i++)if(s[i]!=s[i-1])f1=1;
        for(int i=1;i<st.size();i++)if(st[i]!=st[i-1])f2=1;

    // for(auto u:s)cout<<u;cout<<endl;
    // for(auto u:st)cout<<u;cout<<endl;
    if(f1==0 && f2==0){
        if(s.size()>st.size()){
            for(auto u:s)cout<<u;cout<<endl;
        }
        else{
            for(auto u:st)cout<<u;cout<<endl;
        }
    }
    else if(s.size()==1 && st.size()==1)cout<<-1<<endl;
    else if(s.size()>st.size()){
        int cnt=countFreq(st, s);
        if(cnt==s.size()/st.size()){
            for(auto u:s)cout<<u;cout<<endl;
        }else cout<<-1<<endl;

    }else{
         int cnt=countFreq(s, st);
         if(cnt==st.size()/s.size()){
             for(auto u:st)cout<<u;cout<<endl;
         }else cout<<-1<<endl;
    }



    }

    return 0;
}





   
/* Driver program to test above function */
// int main()
// {
//    string txt = "dhimanman";
//    string pat = "man";
//    cout << countFreq(pat, txt);
//    return 0;
// }








