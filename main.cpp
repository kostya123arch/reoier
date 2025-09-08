//1
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i+=2) cout << s[i];
    cout << endl;
    for (int i = 1; i < s.length(); i+=2) cout << s[i];
}


//2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main() {

vector<int> v;
int n;
cin >> n;
int c;
for (int i = 0; i < n;++i){
    cin >> c;
    v.push_back(c);
}


    stable_sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
