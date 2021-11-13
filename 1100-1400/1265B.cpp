// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <map>
// #include <set>
// #include <stack>
// #include <queue>
// #include <deque>
// #include <cmath>
// #include <cstdio>
// #include <cstring>
// #include <cassert>
// #include <cstdlib>
// #include <climits>
// #include <ctime>
// #include <iomanip>
// #include <sstream>
// #include <utility>
// #include <bitset>
// #include <list>
// #include <fstream>
// #include <numeric>
// #include <iterator>
// #include <complex>
// #include <functional>
// #include <stack>
// #include <valarray>
#include <bits/stdc++.h>
using namespace std;

const int M = 3e5;

void solution(){
    int n,x,p[M];
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x;
        p[x-1] = i;
    }
   int l=n,r=0;
   string res = "";
   for(int i=0;i<n;++i){
       l = min(l,p[i]);
       r = max(r,p[i]);
       (r-l == i)? res += '1': res +='0'; 
   }
   cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);
    int testcases;
    cin>>testcases;
    while(testcases--){
        solution();
    }
    
    return 0;
}