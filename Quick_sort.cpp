#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    int pivot = v[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (v[s] >= v[i])
        {
            count++;
        }
    }
    int pivot_index = s + count;
    swap(v[pivot_index], v[s]); // swap

    // left and right dekhte h//
    int i = s, j = e;
    while (i < pivot_index && j > pivot_index)
    {

        while (v[i] <= v[pivot_index])
        {
            i++;
        }
        while (v[j] >= v[pivot_index])
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(v[i++], v[j--]);
        }
    }
    return pivot_index;
}

void quick_sort(vector<int> &v, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(v, s, e);
    // left
    quick_sort(v, s, p - 1);
    // right
    quick_sort(v, p + 1, e);
}

int main()
{
    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    quick_sort(v, 0, n - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
}