#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back
#define int long long 
#define mp make_pair
#define PI 3.14159265
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



bool sec( const pair<int,int>&a, const pair<int,int> &b){
  return (a.second>b.second);
}

int power(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }

    return result;
}
int getR(ll a){
    ll ct=0;
    while(a % 2 == 0)
        {
            a /= 2;
            ++ct;
        }

        ll v=power(a,ct);

        // cout<<ct<<" ";
    return ct;
}

int prime(int N) {
        int count = 0;
        for( int i = 1;i * i <=N;++i ) {
             if( N % i == 0) {
                 if( i * i == N )
                         count++;
                 else       // i < sqrt(N) and (N / i) > sqrt(N)
                         count += 2;
              }
        }
        if(count == 2)
           return 1;
        else
            return 0;
    }


    struct Comp {
  bool operator()(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.second != b.second) {
      return a.second > b.second;
    }
    return a.first < b.first;
  }

};



  

int32_t main()
{
    fio;
    int n,p,e,s=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>e;
        s=s-p;
        s=s+e;
        if(r<=s){
            r=s;
        }
    }
    cout<<r<<endl;
    return 0;
}