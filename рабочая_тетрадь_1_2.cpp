//задание 1.1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bs(vector<int>& v, int k) {
    int l = 0;
    int r = v.size() - 1;
    int p = 0;

    if (v.empty()) {
        v.push_back(k);
        return -1;
    }

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (v[m] == k) {
            return m;
        } else if (v[m] < k) {
            l = m + 1;
            p = l;
        } else {
            r = m - 1;
            p = m;
        }
    }

    v.insert(v.begin() + p, k);
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    cout << endl;

    int res = bs(v, k);

    if (res != -1) {
        cout << res << endl;
    } else {
        cout << endl;
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
return 0;
}
//задание 1.2
#include <iostream>
#include <vector>

using namespace std;

int fpi(vector<int>& a) {
    if (a.size() < 3) return -1;

    int l = 0;
    int r = a.size() - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (m == 0) {
            l = m + 1;
        } else if (m == a.size() - 1) {
            r = m - 1;
        } else {
            if (a[m] > a[m - 1] && a[m] > a[m + 1]) {
                bool ul = true;
                for (int i = 0; i < m; ++i) {
                    if (a[i] >= a[i + 1]) {
                        ul = false;
                        break;
                    }
                }

                bool dr = true;
                for (int i = m; i < a.size() - 1; ++i) {
                    if (a[i] <= a[i + 1]) {
                        dr = false;
                        break;
                    }
                }

                if (ul && dr) {
                    return m;
                } else {
                    if (a[m] > a[m - 1]) {
                        l = m + 1;
                    } else {
                        r = m - 1;
                    }
                }
            } else if (a[m] < a[m + 1]) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;++i){
        cin >> v[i];
    }
    int p = fpi(v);
    if (p != -1) {
        cout << "yes "<< p << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
// задание 1.3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bSearch( vector<int>& a, int t) {
    int l = 0;
    int r = a.size();

    while (l < r) {
        int m = l + (r - l) / 2;
        if (a[m] < t) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    return l;
}

int main() {
  int n;
  cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;++i){
      cin >> v[i];
    }
    sort(v.begin(),v.end());

    int f = bSearch(v, 0);

    int neg = f;
    int pos = v.size() - neg;

    if (pos > neg) {
        cout << "положительных больше: " << pos << endl;
    } else if (neg > pos) {
        cout << "отрицательных больше: " << neg << endl;
    } else if (neg == pos){
      cout << "равное колличество: " << neg << " " <<  pos << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
//задание 1.4*
#include <iostream>
#include <vector>

using namespace std;

vector<int> cs(vector<int>& nums) {
    int n = nums.size();
    vector<int> counts(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] < nums[i]) {
                counts[i]++;
            }
        }
    }

    return counts;
}

int main() {
  int n;
  cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n;++i){
      cin >> nums[i];
    }
    vector<int> res = cs(nums);

    cout << "[";
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
        if (i < res.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
