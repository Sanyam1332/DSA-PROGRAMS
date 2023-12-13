#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &v)
{
    int n = v.size();
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if (flag == true){
            break;
        }
    }
    return;
}
int main()
{
    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bubble_sort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
    return 0;
}