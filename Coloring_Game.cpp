#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int ans = (n+5-1)/5;

        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}
