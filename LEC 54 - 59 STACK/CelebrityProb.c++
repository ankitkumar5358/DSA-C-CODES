

class Solution
{
    private:
        bool knows(vector<vector<int> >& M, int a, int b, int n)  {
        if(M[a][b] == 1)
        return true;
        else
        return false;

    }

    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n)
    {
        stack<int> s ;
        //  STEP - 1 push all elements in tack
        for(int i=0; i<n ;i++){
            s.push(i);
        }

        // step - 2
        while(s.size() > 1){

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if(knows(a,b, n)) {
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans = s.top();
        // step :3 single element in stack is potential celebrity and verify it

        bool rowCheck = false;
        int zeroCount = 0;for

        for(int i=0; i<n; i++){
            if(M[ans] [i] == 0)
            zeroCount++;
        }
        // all zeros
        if(zeroCount == n){
            rowCheck = true;
        }

        // check col
        bool colCheck = false;
        int colCount = 0;
        for(int i=0; i<n; i++){
            if(M[i][ans] == 1)
            oneCount++;
        }

        if(oneCount == n-1){
            colCheck = true;
        }
        if(rowCheck == true && colCheck == true) {
            return ans;
        }
        else{
            return -1;
        }

    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
