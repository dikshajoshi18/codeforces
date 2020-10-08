#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
// int largest(int p[], int n) 
// { 
//     int i;
//     int max = p[0]; 
//     for (i = 1; i < n; i++) 
//         if (p[i] > max) 
//             max = p[i]; 
  
//     return max; 
// } 
  
int main() {
    int n,count=0;
    cin>>n;
    int p[n];
    fo(i,n){
        cin>>p[i];
    }
    sort(p,p+n);
    fo(i,n){
     count+=p[n-1]-p[i];
    }
    cout<<count<<endl;
	return 0;
}
