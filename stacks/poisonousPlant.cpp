#include <bits/stdc++.h> 
#include <stack>
#include <vector>

using namespace std;

int poisonousPlants(vector<int> p) {
    int n = p.size();
    stack<pair<int,int>>s;
    vector<int>v;
    int maxday = 0;
    int day = 0;
    
    for(int i = 0;i< n;i++){
        while(s.size() > 0 && s.top().first >=p[i]){
            day = max(day,s.top().second);
            s.pop();
        }
        if(s.size()>0)
            day += 1;
            
        else
            day = 0;
            
        maxday = max(maxday,day);
        
        s.push({p[i],day});
    }
    return maxday;
}
    


    int main(){
        vector<int> p = {6,5,8,4,7,10,9};
        int result = poisonousPlants(p);

        return 0;
    }
