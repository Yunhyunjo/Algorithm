#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, num;
	int ch[100];

	cin >> n;

	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ch[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i] < v[j]) ch[i]++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ch[i] << " ";
	}

	return 0;
}


//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//
//    int n, num;
//    
//    cin >> n;
//    vector <pair <int, int>> v;
//    int ch[100];
//    for (int i = 0; i < n; i++) {
//        cin >> num;
//        v.push_back(make_pair(-num, i));
//    }
//
//    stable_sort(v.begin(), v.end());
//
//    vector <int> t(n);
//    t[v[0].second] = 1;
//    int j = 1;
//    for (int i = 1; i < n; i++) {
//        if (v[i - 1].first == v[i].first) t[v[i].second] = t[v[i - 1].second];
//        else t[v[i].second] = i + 1;
//
//    }
//    
//    for (int i = 0; i < n; i++) {
//        cout << t[i] << " ";
//    }
//    return 0;
//}