//1.
#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;

    double **p = new double *;

    *p = new double;

    **p = n;

    cout << **p << endl;

    delete *p;
    delete p;

    return 0;
}

//2.
  #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double* arr = new double[n];
    vector<double> v(n);
    for (int i = 0; i < n; ++i) v[i] = i + 1;
    srand(time(0));
    random_shuffle(v.begin(), v.end());
    for (int i = 0; i < n; ++i) arr[i] = v[i];
    double sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    cout << sum << endl;
    delete[] arr;
}
//3. 

#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (c == 1) {
		cout << a << endl;
		return 0;
	}
	if (c == 2) {
		cout << b << endl;
		return 0;
	}

	int x = a;
	int y = b;
	int z;

	for (int i = 3; i <= c; ++i) {
		z = x * y;
		x = y;
		y = z;
	}

	cout << y << endl;

	return 0;
}
