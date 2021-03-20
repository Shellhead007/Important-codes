//https://www.geeksforgeeks.org/the-celebrity-problem/
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        stack<int>st;
        for(int i=0;i<n;i++)
            st.push(i);
        while(st.size() > 1) {
            int c1 = st.top();
            st.pop();
            int c2 = st.top();
            st.pop();
           // cout<<c1<< " " << c2<<endl;
            if(M[c1][c2] == 1)
                st.push(c2);
            else
                st.push(c1);
        }
        if(!st.empty()) {
            int potential_cand = st.top();
            //cout<<potential_cand<<endl;
            st.top();
            for(int i=0;i<n;i++) {
                if(M[potential_cand][i] == 1)
                    return -1;
            }
            for(int i=0;i<n;i++) {
                if(i != potential_cand) {
                    if(M[i][potential_cand] == 0)
                        return -1;
                }
            }
            return potential_cand;
        } else
            return -1;
    }
};
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
