class Solution {
public:
    int strStr(string& a, string& t) {
	unordered_set<char> S;
	unordered_map<char, int> d;
	int ans=-1;
	const int M = t.size();
	for (int i = M - 2; i >= 0; i--) {
		auto it = S.find(t[i]);
		if (it == S.end()) {
			d[t[i]] = M - i - 1;
			S.emplace(t[i]);
		}
	}
	auto it = S.find(t[M - 1]);
	if (it == S.end()) d[t[M - 1]] = M;
	d['*'] = M;

	const int N = a.size();
	if (N >= M) {
		int i = M - 1;
		while (i < N) {
			int k = 0, j;
			for (j = M - 1; j >= 0; j--) {
				if (a[i - k] != t[j]) {
					int off;
					if (j == M - 1) {
						off = d.count(a[i]) ? d[a[i]] : d['*'];
					}
					else off = d[t[j]];
					i += off;
					break;
				}
				k++;
			}
			if (j == -1) {
				ans = i - k + 1 ;
				break;
			}
		}
	}
	else ans = -1;
	return ans;

   }
};