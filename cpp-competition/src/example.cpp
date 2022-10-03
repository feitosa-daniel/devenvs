#include <bits/stdc++.h>
using namespace std;

vector<string> split_str(string s, const char delim) {
	vector<string> out;
	istringstream ss(s);
	string e;
	while (getline(ss, e, delim)){  
		out.push_back(e);
	}
	return out;
}

int main() {
  freopen("input.txt", "r", stdin);
  string s;
  while (getline(cin, s)) {
	vector<string> items = split_str(s, ' ');
	for (int i = 0; i < items.size(); i++) {
		cout << items[i];
	}
  	cout << "\n";
  }
  return 0;
}