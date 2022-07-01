#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends

/*
pair<long long, long long> getMinMax(long long a[], int n) 
{
sort(a.begin(), a.end());
cout<<
}
*/

pair<long long, long long> getMinMax(long long arr[], int n) 
{
    pair <long long ,long long >p;
   sort(arr,arr+n);
   p.first=arr[0];
   p.second=arr[n-1];
   return p;
}