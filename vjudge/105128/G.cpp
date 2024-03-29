#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

long double ans[52][52];

int main()
{
	int n, w, m;
	scanf("%d %d %d", &n, &w, &m);
	long double avg = 1.0l * n * w / m;
	long double last = w;
	for (int i = 0, j = 0; i < m; ++i)
	{
		long double rem = avg;
		while (1)
		{
			if (last > rem)
			{
				ans[i][j] = rem;
				last -= rem;
				rem = 0;
				break;
			}
			else
			{
				rem -= last;
				ans[i][j] = last;
				j++;
				last = w;
			}
		}
	}
	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for (int j = 0; j < m; ++j)
			if (ans[j][i] > 1e-10)
				cnt++;
		if (cnt > 2)
			flag = false;
	}
	if (!flag)
		puts("NO");
	else
	{
		puts("YES");
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (ans[i][j] > 1e-10)
					printf("%d %.10f ", j + 1, (double)ans[i][j]);
			}
			puts("");
		}
	}
	return 0;
}
