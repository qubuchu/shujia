#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> a1(n);
    for (i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    n=7;
    a1[6]=0;
    array<int, 4> a2 = {1, 2, 3, 4};
    for (i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 4; i++)
    {
        cout << a2[i] << endl;
    }
}