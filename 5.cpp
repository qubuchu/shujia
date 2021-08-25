#include <iostream>
#include <vector>
#include <array>
//#include <math.h>
using namespace std;
int GetNumberOfK(vector<int> data, int k);
int main()
{
    int k = 2;
    vector<int> arr{1, 1, 1, 3, 3, 3, 4};
    cout << GetNumberOfK(arr, k) << endl;
}

int GetNumberOfK(vector<int> nums, int target)
{
    int lbound = 0, rbound = 0;
    // 寻找上界
    int l = 0, r = nums.size();
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    lbound = l;
    // 寻找下界
    l = 0, r = nums.size();
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] <= target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    rbound = l;
    return rbound - lbound;
}
/*int GetNumberOfK(vector<int> data, int k)
{
    int i;
    int n = 0;
    for (i = 0; i < data.size(); i++)
    {
        if (data[i] < k)
            continue;
        if (data[i] == k)
            n++;
        if (data[i] > k)
            break;
    }
    return n;
}*/