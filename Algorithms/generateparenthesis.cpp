#include <iostream>

using namespace std;
char str[100];
void generate(int pos,int size,int open,int close) {
    if(close == size) {
        cout<<str<<endl;
        return;
    } else {
        if(open > close) {
            str[pos] = '}';
            generate(pos+1,size,open,close+1);
        }
        if(open < size) {
            str[pos] = '{';
            generate(pos+1,size,open+1,close);
        }
    }
}
int main() {
    int n;
    cin>>n;
    generate(0,n,0,0);
    return 0;
}
