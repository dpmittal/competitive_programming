#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();
    string x;
    vector<string> sentences;
    for(int i=0;i<n;i++){
        getline(cin, x);
        sentences.push_back(x);
    }

    unordered_set<string> m[n];
    string temp;
    for(int i=0;i<sentences.size();i++){
        temp.clear();
        for(int j=0;sentences[i][j] != '\0';j++){
            if(sentences[i][j] != ' '){
                temp+=sentences[i][j];
            }
            else{
                m[i].insert(temp);
                temp.clear();
            }
        }
        m[i].insert(temp);
    }

    int q;
    cin>>q;
    getchar();
    vector<string> querries;
    for(int i=0;i<q;i++){
        getline(cin, x);
        querries.push_back(x);
    }

    vector<string> words;
    for(int i=0;i<q;i++){
        words.clear();
        temp.clear();
        for(int j=0;querries[i][j] != '\0';j++){
            if(querries[i][j] != ' '){
                temp+=querries[i][j];
            }
            else{
                words.push_back(temp);
                temp.clear();
            }
        }
        words.push_back(temp);

        bool atleastOneFound=false;
        for(int k=0;k<n;k++){
            bool found=true;
            for(int l=0;l<words.size();l++){
                if(m[k].find(words[l]) == m[k].end()){
                    found=false;
                    break;
                }
                else{
                    atleastOneFound=true;
                }
            }
            if(found) cout<<k<<" ";
        }
        if(!atleastOneFound) cout<<-1<<"\n";
        cout<<"\n";
    }
    return 0;
}