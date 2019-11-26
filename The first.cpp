#include<cstdio>
#include<cstring>
int main()
{
	int n, m, i, j;
	int a[102][102];
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int min;
	int all = 0;
	for (i = 0; i < n; i++)
	{
		min = 120;
		for (j = 0; j < m; j++)
		{
			if (a[j][i] < min && a[j][i] != -1) min = a[j][i];
		}
		all += min;
	}
	printf("%d", all);
	return 0;
}