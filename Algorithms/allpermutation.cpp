// Print all permutation of the given string.
// Time : O(n*n!)

#include<bits/stdc++.h>
using namespace std;
void printperm(string input,int l,int r) {
   if(l == r) 
        cout<<input<<endl;
    else {
        for(int i=l;i<=r;i++) {
            swap(input[l],input[i]);
            printperm(input,l+1,r);
            swap(input[l],input[i]);
        }
    }

}
int main() {
    string s = "abc";
    printperm(s,0,s.length()-1);
    return 0;
}
/* OUTPUT
abc
acb
bac
bca
cba
cab
*/
