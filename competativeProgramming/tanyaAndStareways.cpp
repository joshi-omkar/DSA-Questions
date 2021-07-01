#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
cin >> n;
vector<int> a;
int p = -1;
for(int i = 0;i<n;i++){
    int x;
    cin >> x;
    if (x == 1 && p != -1)
        a.push_back(p);
    p = x;    
}
a.push_back(p);
cout << a.size() << endl;
for (int i: a)
    cout << i << " ";
    return 0;
}