#include<cstdio>
#include<cstring>
int main()
{
	int n;
	scanf("%d", &n);
	int a[3005];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int all = 0;
	for (int j = 0; j < n; j++)
	{
		all = all + a[j] - 1;
	}
	printf("%d", all);
	return 0;
}