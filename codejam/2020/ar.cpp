#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int inp = 1;inp <= t;inp++){
        int n;
        cin >> n;
        vector<pair<int,int>> original,sorted;
        for(int i=0;i < n;i++){
            int x,y;
            cin >> x >> y;
            original.push_back({x,y});
            sorted.push_back({x,y});
        }
        sort(sorted.begin(),sorted.end());
        map<pair<int,int>,char> m;
        unordered_map<char,int> occupied_till;
        bool impossible = false;
        m[sorted[0]] = 'J';
        occupied_till['J'] = sorted[0].second,occupied_till['C'] = 0;
        for(int i=1;i < sorted.size();i++){
            if(sorted[i].first < occupied_till['C'] && sorted[i].first < occupied_till['J']){
                impossible = true;
                break;
            }
            char selected;
            if(occupied_till['C'] <= occupied_till['J'])
                selected = 'C';
            else
                selected = 'J';
            m[sorted[i]] = selected;
            occupied_till[selected] = sorted[i].second;
        }
        if(impossible)
            cout << "Case #" << inp << ": " << "IMPOSSIBLE" << "\n";
        else{
            string ans = "";
            for(int i=0;i < original.size();i++)
                ans += m[original[i]];
            cout << "Case #" << inp << ": " << ans << "\n";
        }
    }
    return 0;
}
