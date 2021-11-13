#include <iostream>
#include <algorithm>
#include <set>

using namespace std;


void solution(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;++i){
        int elem;
        cin>>elem;
        s.insert(elem);
    }
    int res=0;
    while(!s.empty()){
        int m=*s.rbegin();
        s.erase(m);
        if(m %2 ==0){
            res++;
            s.insert(m/2);
        }
    }
    cout<<res<<endl;
}

int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        solution();
    }
    return 0;
}