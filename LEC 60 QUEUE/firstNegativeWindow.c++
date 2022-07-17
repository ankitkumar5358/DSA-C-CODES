#include <deque>
vector<int> firstNegative(vector<int> arr, int n, int k) {

    deque<int> dq;
    vector<int> ans;

    // process first window of size k
    for(int i=0; i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    // store answer of first k  sized window
    if(dq.size() > 0){
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    // process for remaining windows
    for(int i=k;i<n;i++){
        //removal
        if(!dq.empty() && i - dq.front() >= k){
            dq.pop_front();
        }

        //addition
        if(arr[i] < 0){
            dq.push_back(i);
        }

        //store ans
        if(dq.size() > 0){
        ans.push_back(arr[dq.front()]);
        }

        else {
        ans.push_back(0);
        }

    }
    return ans;
}
