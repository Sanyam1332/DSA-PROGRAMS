#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[minIndex], v[i]);
    }
}

int main()
{
    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    selection_sort(v);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
}