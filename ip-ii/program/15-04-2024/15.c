#include <stdio.h>
#include <stdlib.h>

void nonrepeat(int *arr, int n, int *ans)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    i = 0;
    while (i < n - 1)
    {
        if (arr[i] != arr[i + 1])
        {
            ans[0] = arr[i];
            i++;
            if (arr[i] != arr[i + 1])
            {
                ans[1] = arr[i];
                return;
            }
        }
        i += 2;
    }
    ans[1] = arr[n - 1];
}

int main()
{
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[100];
    nonrepeat(arr, n, ans);
    printf("The non-repeating elements are %d and %d\n", ans[0], ans[1]);
    return 0;
}