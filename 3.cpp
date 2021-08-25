#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, k = 0;
    int num[100];
    int sum[100][3];
    int x[100];
    int s;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> sum[i][0] >> sum[i][1] >> sum[i][2];
        if (sum[i][0] == 1)
        {
            num[sum[i][1] - 1] += sum[i][2];
        }
        else if (sum[i][0] == 2)
        {
            s = 0;
            for (j = sum[i][1] - 1; j < sum[i][2]; j++)
            {
                s += num[j];
            }
            x[k++] = s;
        }
    }
    for (i = 0; i < k; i++)
    {
        cout << x[i] << endl;
    }
}