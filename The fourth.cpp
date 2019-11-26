#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n, x, y;
	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	int a[5005];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n, cmp);
	if (x >= y)
	{
		if (a[0] % x == 0) printf("%d", a[0] / x);
		else printf("%d", a[0] / x + 1);
		return 0;
	}
	else
	{
		int max, min;
		int count = 0;
		if (a[0] % x == 0) max=a[0]/x;
		else max=a[0]/x+1;
		if (a[n - 1] % x == 0) min = a[0] / x;
		else min = a[0] / x + 1;
		while (max > min)
		{
			count++;
			a[0] -= y;
			for (int i = 0; i < n - 1; i++)
			{
				int t;
				if (a[i] < a[i + 1])
				{
					t = a[i];
					a[i] = a[i + 1];
					a[i + 1] = t;
				}
			}
			if (a[0] % x == 0) max = a[0] / x;
			else max = a[0] / x + 1;
		}
		printf("%d", max + count);
		return 0;
	}
	return 0;
}