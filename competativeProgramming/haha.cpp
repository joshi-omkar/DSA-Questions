#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string str1, string str2,long long m, long long n)
{

    if (m == 0)
        return true;
        
    if (n == 0)
        return false;
 
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    return isSubSequence(str1, str2, m, n - 1);
}

    string binary(string s){
	    queue<string>q;
	    q.push("1");
	    
	    while(true){
	        
	        string s1 = q.front();
	        q.pop();
	        
	        long long m = s1.size();
	        long long n = s.size();
	        
	        if(isSubSequence(s1,s, m, n) == false){
				return s1;
				
			}
	            
	           
	        string s2 = s1;
	        q.push(s1.append("0"));
	        q.push(s2.append("1"));
	    }
    }

int main() {
	
	int t ;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    
	    int flag = 0;
	    
	    for(int i = 0;i<s.size();i++){
	        if(s[i]=='0') flag = 1;
	    }
	    
	    if(flag == 0){
	        cout<<"0"<<endl;
	    }else{
	    
	    cout<<binary(s)<<endl;
	    }
	}
	
	return 0;
}