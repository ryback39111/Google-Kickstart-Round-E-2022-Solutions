#include <bits/stdc++.h> 
using namespace std; 
int32_t main() 
{ 
    ios::sync_with_stdio(0);  
    cin.tie(0);  
    cout.tie(0); 
     
    int t; 
    cin>>t; 
    for (int q = 0; q < t; q++) 
    { 
        cout<<"Case #"<<q+1<<":"<<" "; 
        int n; 
        cin>>n; int arr[n]; int brr[n]; 
        for (int i = 0; i < n; i++)            cin>>arr[i]; 
        for (int i = 0; i < n; i++)  brr[i]=arr[i]; 
        sort(brr,brr+n); 
        for (int i = 0; i < n; ++i) 
        {   auto yoman=upper_bound(brr,brr+n,arr[i]*2)-brr; yoman--; 
            if(brr[yoman]==arr[i]) yoman--;if(yoman>=0) cout<<brr[yoman]<<" "; 
            else cout<<"-1"<<" "; 
        }  
        cout<<endl; 
         
    } 
     
    return 0; 
}
