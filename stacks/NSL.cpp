#include <bits/stdc++.h> 
#include <stack>
#include <vector>

using namespace std;

int main(){
    vector<int>v;
    stack<int>s;
    vector<int>a = {1,3,2,4};
    for(int i = 0;i<a.size();i++){
        
        if(s.size() == 0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<a[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>= a[i]){
            while(s.size()>0 && s.top()>= a[i]){
                s.pop();
            }
            if(s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(a[i]);
         
    }
    
        for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
        cout << endl;
}

