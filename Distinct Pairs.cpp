#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m,x;cin >> n >> m;
    vector< pair <int,int> > f;
    vector< pair <int,int> > s;
    for(int i=0;i<n;i++){
        cin >> x;
        f.push_back(make_pair(x,i));
    }
    for(int i=0;i<m;i++){
        cin >> x;
        s.push_back(make_pair(x,i));
    }
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());

    for(int i=0;i<m;i++){
        cout << f[0].second << " " << s[i].second << endl;
    }
    for(int i=1;i<n;i++){
        cout << f[i].second << " " << s[m-1].second << endl;
    }

    return 0;
}
