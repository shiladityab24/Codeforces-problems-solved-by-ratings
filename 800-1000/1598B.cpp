// Groups Rating - 1000 

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    bool ans= false;
    vector<vector<int>> a(n,vector<int>(5));
    for(int i=0;i<n;++i){
        for(int j=0;j<5;++j){
            cin>>a[i][j];
        }
    }
    if(n & 1){
        ans = false;
    }
    for(int x = 0; x< 5;++x){
        for(int y = x+1; y<5;++y){
            int x_cnt = 0,y_cnt = 0,xy_cnt = 0;
            for(int i = 0;i< n;++i){
                if(a[i][x] && a[i][y])
                    xy_cnt++;
                else if(a[i][x])
                    x_cnt++;
                else if(a[i][y])
                    y_cnt++;
                else
                    break;
                
            }
            if(x_cnt +y_cnt+ xy_cnt == n && x_cnt <= n/2 && y_cnt <= n/2){
                ans = true;
            }
        }
    }
    if(ans)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
    }
    return 0;
}