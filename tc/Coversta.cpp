#line 7 "Coversta.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;

#define PB push_back
#define MP make_pair

#define REP(i,n) for(i=0;i<(n);++i)
#define FOR(i,l,h) for(i=(l);i<=(h);++i)
#define FORD(i,h,l) for(i=(h);i>=(l);--i)

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long LL;
typedef pair<int,int> PII;


class Coversta
{
	public:
	struct M
	{
		int x, y, ans;
		bool operator < (const M& rhs) const
		{
			return ans > rhs.ans;
		}
	};
	bool vis[100][100];
	int place(vector <string> a, vector <int> x, vector <int> y)
	{
		vector<M> MM;
		int ans = 0;
		int n = a.size();
		int m = a[0].size();
		int l = x.size();
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				int sum = 0;
				for (int k = 0; k < l; ++k)
				{
					if (i + x[k] >= 0 && i + x[k] < n && j + y[k] >= 0 && j + y[k] < m)
					{
						vis[i + x[k]][j + y[k]] = true;
						sum += a[i + x[k]][j + y[k]] - '0';
					}
				}
				MM.push_back((M){i, j, sum});
				ans = max(ans, sum);
				for (int i1 = 0; i1 < l; ++i1)
				{
					for (int j1 = i1 + 1; j1 < l; ++j1)
					{
						int t = sum;
						for (int k = 0; k < l; ++k)
						{
							if (i - x[i1] + x[j1] + x[k] >= 0 && i - x[i1] + x[j1] + x[k] < n && j - y[i1] + y[j1] + y[k] >= 0 && j - y[i1] + y[j1] + y[k] < m && !vis[i - x[i1] + x[j1] + x[k]][j - y[i1] + y[j1] + y[k]])
							{
								t += a[i - x[i1] + x[j1] + x[k]][j - y[i1] + y[j1] + y[k]] - '0';
							}
						}
						ans = max(ans, t);
					}
				}
				for (int k = 0; k < l; ++k)
				{
					if (i + x[k] >= 0 && i + x[k] < n && j + y[k] >= 0 && j + y[k] < m)
					{
						vis[i + x[k]][j + y[k]] = false;
					}
				}
			}
		}
		sort(MM.begin(), MM.end());
		int maxn = min(100, (int)MM.size());
		for (int i = 0; i < maxn; ++i)
		{
			for (int j = i + 1; j < maxn; ++j)
			{
				bool flag = true;
				for (int i1 = 0; i1 < l && flag; ++i1)
				{
					if (MM[i].x + x[i1] >= 0 && MM[i].x + x[i1] < n && MM[i].y + y[i1] >= 0 && MM[i].y + y[i1] < m)
					{
						for (int j1 = 0; j1 < l && flag; ++j1)
						{
							if (MM[j].x + x[j1] >= 0 && MM[j].x + x[j1] < n && MM[j].y + y[j1] >= 0 && MM[j].y + y[j1] < m)
							{
								if (MM[i].x + x[i1] == MM[j].x + x[j1] && MM[i].y + y[i1] == MM[j].y + y[j1])
								{
									flag = false;
								}
							}
						}
					}
				}
				if (flag)
				{
					ans = max(ans, MM[i].ans + MM[j].ans);
				}
			}
		}
		return ans;
	}
	

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
