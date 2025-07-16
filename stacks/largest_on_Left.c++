#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]  = {4,13,11,5,9,7,8,6};
    int n = sizeof(arr)/arr[0];
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i = n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i =0 ;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
