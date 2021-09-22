#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int four = 0;
    int three = 0;
    int two = 0;
    int one = 0;

    int min = 0;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;

        if(x == 1) one++;
        if(x == 2) two++;
        if(x == 3) three++;
        if(x == 4) four++;

    }

    min += four;

    while(one != 0 && three != 0){

        three -= 1;
        one -= 1;
        min += 1;

    }

    if(one == 0 && three != 0){
        min += three;
        three = 0;
    }

    min = min + two/2;

    if(two%2 != 0){

        if(one <= 2){
            min++;
            one = 0;
            two = 0;
        }
        else{
            one -= 2;
            two = 0;
            min++;
        }

        

    }
    if(one != 0){
            min = min + one/4;

            if(one<4){
                min += 1;
                one = 0;
            }

            if(one%2 != 0){
                min = min +1;
            }

        }
    cout<<min<<endl;
}