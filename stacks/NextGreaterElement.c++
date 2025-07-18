link:-https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
// using stacks pop,ans,push
    // t.c ==> n+n 
    int res[n];
    res[n-1] = -1;
    stack<int>st;
    st.push(arr[n-1]);
    for(int i = n-2;i>=0;i--){
        
        while(!st.empty() && arr[i] >= st.top()) {st.pop();}
        
        if(st.empty()) 
            res[i] = -1;
        else 
            res[i] = st.top();
        
        st.push(arr[i]);
        
    }
    for(int i = 0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
