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
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;
    int b;
 
for (int i = 0; i < n; i++){
    getline(cin, b);
    v.push_back(n);
}
    sort(begin(v), end(v));
    for (int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    
    return 0;
}


