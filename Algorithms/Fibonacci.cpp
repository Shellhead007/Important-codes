#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Recursive_fib(int n) {               // Recursive method for fibonacci
    if(n <= 1)
        return n;
    return Recursive_fib(n-1) + Recursive_fib(n-2);
}
int Iterative_fib(int n) {             // Iterative method for fibonacci
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3;i<=n;i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}
int space_opti_fib(int n) {            // Iterative and space optimized method for fibonacci
    int c = 0;
    int a = 0;
    int b = 1;
    for(int i=2;i<=n;i++) {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int direct_formula_fib(int n) {       // Direct formula for calculating fibonacci series : Fn = {[(√5 + 1)/2] ^ n} / √5 
    double ans = 0;
    ans = (pow(((sqrt(5)+1)/2),n))/sqrt(5);
    return round(ans);
}
int main() {
   int n;
   cin>>n;
   int ans = Recursive_fib(n);
   int ans2 = Iterative_fib(n);
   int ans3 = space_opti_fib(n);
   int ans4 = direct_formula_fib(n);
   cout<<ans<<endl;
   cout<<ans2<<endl;
   cout<<ans3<<endl;
   cout<<ans4<<endl;
   return 0;
}
