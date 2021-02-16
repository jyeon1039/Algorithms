#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<string,int> a, pair<string,int> b){
    return a.second < b.second ;
}

int main(){
    int n;
    cin >> n;
    
    vector<pair<string, int>> v;
    
    for(int i=0; i<n; i++){
        string name;
        int score;
        cin >> name >> score;
        v.push_back(make_pair(name, score));
    }
        
    sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<n; i++)
        cout << v[i].first << " ";

    return 0;
}