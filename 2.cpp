#include <iostream>
using namespace std;
int maxLength(int *arr, int arrLen);
int main()
{
    int arr[100], arrlen = 7;
    for (int i = 0; i < arrlen; i++)
        scanf("%d", &arr[i]);
    printf("%d", maxLength(arr, arrlen));
}

int maxLength(int *arr, int arrLen)
{
    // write code here
    int i, j, n, sum = 1, x, k, f = 0; //sum所有最大
    for (i = 0; i < arrLen; i = j)
    {
        for (j = i + 1; j < arrLen; j++)
        {
            f = 0;
            n = 1; //连续最大
            x = arr[j];
            for (k = i; k < j; k++)
            {
                if (x != arr[k])
                    n++;
                else
                {
                    f = 1;
                    break;
                }
            }
            if (n >= sum)
                sum = n;
            if (f == 1)
                break;
        }
    }
    return sum;
}