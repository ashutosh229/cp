#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
long long prefix_sum[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            prefix_sum[i][j] = ar[i][j] + prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << prefix_sum[c][d] - prefix_sum[a][b] + ar[a][b] << endl;
    }
    return 0;
}