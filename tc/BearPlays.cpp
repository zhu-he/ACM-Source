// BEGIN CUT HERE
/*

*/
// END CUT HERE
#line 7 "BearPlays.cpp"
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

int f[2000000];


class BearPlays
{
	public:
	int pileSize(int A, int B, int K)
	{
		int a = A;
		int b = B;
		int p = 0;
		int T = 0;
		while (p * 2 <= K)
		{
			f[p * 2] = min(a, b);
			if (a > b)
			{
				int t = b;
				a -= t;
				b += t;
			}
			else
			{
				int t = a;
				a += t;
				b -= t;
			}
			f[p * 2 + 1] = min(a, b);
			if (a > b)
			{
				int t = b;
				a -= t;
				b += t;
			}
			else
			{
				int t = a;
				a += t;
				b -= t;
			}
			if (f[p] == f[p * 2 + 1])
			{
				T = p + 1;
				break;
			}
			p++;
		}
		if (p * 2 > K)
		{
			return f[K];
		}
		else
		{
			K -= (K - p) / T * T;
			return f[K];
		}
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 4; int Arg1 = 7; int Arg2 = 2; int Arg3 = 5; verify_case(0, Arg3, pileSize(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 5; int Arg1 = 5; int Arg2 = 3; int Arg3 = 0; verify_case(1, Arg3, pileSize(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 2; int Arg1 = 6; int Arg2 = 1; int Arg3 = 4; verify_case(2, Arg3, pileSize(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 2; int Arg1 = 8; int Arg2 = 2000000000; int Arg3 = 2; verify_case(3, Arg3, pileSize(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 900000000; int Arg1 = 350000000; int Arg2 = 3; int Arg3 = 300000000; verify_case(4, Arg3, pileSize(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
	BearPlays ___test;
	___test.run_test(-1);
	return 0;
}
// END CUT HERE