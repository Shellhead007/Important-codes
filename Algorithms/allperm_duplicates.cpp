#include <iostream>
using namespace std;
bool shouldswap(string s,int start,int end) {
    for(int i=start;i<end;i++) {
        if(s[i] == s[end])
            return 0;
    }
    return 1;
}
void perm(string s,int l,int r) {
    if(l == r) {
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++) {
        if(shouldswap(s,l,i)) {         // condition to check if we have encountered the present character before or not.
            swap(s[i],s[l]);
            perm(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}
int main() {
    string s;
    cin>>s;
    int n = s.length();
    perm(s,0,n-1);
    return 0;
}
