#include<bits/stdc++.h>
#define int long long int
using namespace std;

int fx[] = { -1, -1, -1, 0, 0, 1, 1, 1};
int fy[] = { -1, 0, 1, -1, 1, -1, 1, 0};

int row, col, mx;

vector<vector<char>>v(1000, vector<char>(1000));
vector<vector<int>>vis(1000, vector<int>(1000));


void dfs(int r, int c, char x, int cnt)
{
	if (vis[r][c] == 1)
		return ;

	vis[r][c] = 1;

	mx = max(mx, cnt);
	for (int i = 0; i < 8; i++)
	{
		int xx = r + fx[i];
		int yy = c + fy[i];

		if (xx >= 0 and xx<row and yy >= 0 and yy < col and vis[xx][yy] == 0 and v[xx][yy] == x + 1)
			dfs(xx, yy, x + 1, cnt + 1);
	}
}


signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int tc;
	tc = 1;

	while (1)
	{
		cin >> row >> col;

		if (!row and !col)break;

		//memset(vis, 0, sizeof(vis));
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				vis[i][j] = 0;
			}
		}
		mx = 0;

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> v[i][j];
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (v[i][j] == 'A' and vis[i][j] == 0)
					dfs(i, j, 'A', 1);
			}
		}


		cout << "Case " << tc++ << ": " << mx << endl;

	}
}










