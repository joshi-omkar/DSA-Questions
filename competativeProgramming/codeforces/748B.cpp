#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i;
        int ans = 0;
        int final_ans = 0;
        int cnt = 0;
        if(s == "0"){
            cout<<0<<"\n";
            
        }

        for(i = s.size()-1;i>=0;i--){
            if(s[i] == '0'){break;}
            cnt++;
        }
        for(i = i-1;i>=0;i--){
            if(s[i] == '0' || s[i] == '5'){break;}
            cnt++;
        }
        final_ans = cnt;
        cnt = 0;
        for(i = s.size()-1;i>=0;i--){
            if(s[i] == '5'){break;}
            cnt++;
        }
        for(i = i-1;i>=0;i--){
            if(s[i] == '2' || s[i] == '7'){break;}
            cnt++;
        }

        if(final_ans > cnt){
            final_ans = cnt;
            
        }
        cout<<final_ans<<endl;
    }

 
return 0;
}