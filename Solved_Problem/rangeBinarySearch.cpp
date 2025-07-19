#include<bits/stdc++.h>
using namespace std;
int ans (int high){
    int low=1,hi=high;
    int ans=-1;
    while (low<=hi)
    {
        int mid = (hi+low)/2;
        if (mid*mid<=high){
            ans=mid;
            low=mid+1;
        }
        else hi=mid-1;
    } 
    return ans;
    
}
int main (){
    int high;
    cin>>high;
    cout<<ans(high);
}
/*int ans(int high) {
    int low = 1, hi = high;
    int ans = -1;

    while (low <= hi) {
        int mid = (low + hi) / 2;

        // If mid^2 is less than high, it's a candidate answer
        if (mid * mid < high) {
            ans = mid;  // Store mid as the largest value found so far
            low = mid + 1;  // Try for a larger value
        } 
        // If mid^2 is greater than or equal to high, search in the lower half
        else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() {
    int high;
    cin >> high;
    cout << ans(high);
}
*/