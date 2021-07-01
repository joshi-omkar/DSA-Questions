#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,S = 0,A = 0;
	    cin>>n>>a>>b;
	    
	    for(int i = 0;i<n;i++){
            string s;
	        cin>>s;
	        
	        if(s[0] == 'E' ||s[0] == 'Q' ||s[0] == 'U' ||s[0] == 'I' ||s[0] == 'N' ||s[0] == 'O'||s[0] == 'X'){
	            S += a;
	        }else{
	            A += b;
	        }
	    }
	    
	    if(S == A){
	        cout<<"DRAW"<<endl;
	    }else if(S>A){
	        cout<<"SARTHAK"<<endl;
	    }else{
	        cout<<"ANURADHA"<<endl;
	    }
	}
	return 0;
}