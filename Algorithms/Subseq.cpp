//print all the subsequence of a string in lexicographical order

#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void subseq(string input,string output) {
    if(input.length() == 0) {
        ans.push_back(output);
        return;
    }
    subseq(input.substr(1),output+input[0]);
    subseq(input.substr(1),output);
}
int main() {
    string s = "abc";
    ans.push_back("");
    subseq(s,"");
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) 
        cout<<ans[i]<<endl;
    return 0;
}
/* OUTPUT

a
ab
abc
ac
b
bc
c

*/
