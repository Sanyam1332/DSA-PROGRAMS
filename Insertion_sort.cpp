#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int temp=v[i];
        int j=i-1;
        for(;j>=0;j--){
           if(v[j]>temp){
            v[j+1]=v[j];
           }
           else{
            break;
           }
          
        }
         v[j+1]=temp;
        

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

    insertion_sort(v);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
}
