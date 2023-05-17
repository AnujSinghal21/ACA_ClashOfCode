#include<bits/stdc++.h>
using namespace std;
int func(int x){
    return x*x;
}

int main(){
    int x = 5;
    pair<int, int> p;
    p.first = 6;
    p.second = 2;
    int arr[5];
    pair<int, int> q;
    
    vector<pair<int,int> > v;
    pair<int, pair<int, int> > z = make_pair(5,make_pair(1,2));
    cout << z.first << " " << z.second.first << endl;

    
    // int * ptr;
    // string s;
    // s = "Hello";
    // s += " world";
    // cout << s.size() << endl;
    // cout << s << endl;
    
    
    // vector<int> v(5,2);
    // int arr[5];
    // // v[0] = 5;
    // // v[1] = 8;
    // // v[2] = 6;
    // // v.push_back(8);
    // vector<int>::iterator iter = v.begin();
    // for (auto i = v.begin(); i != v.end(); i++){
    //     cout << *i << endl;
    //     // 
    // }

}