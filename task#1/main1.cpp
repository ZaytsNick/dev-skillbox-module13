#include <iostream>
#include <vector>
using namespace std;
vector<int> delete_number(vector<int> dnVec, int deleter)
{
    for (int i = 0; i < dnVec.size(); ++i)
    {
        if (dnVec[i] == deleter)
        {
            for(int j=i;j<dnVec.size()-1;++j)
            {
                swap(dnVec[j],dnVec[j+1]);
            }
            dnVec.pop_back();
        }
    }
    return dnVec;
}
void write_vec(vector<int> wVec)
{
    for (int i = 0; i < wVec.size(); ++i)
    {
        cout << wVec[i] << " ";
    }
}
int main()
{
    int n, X;
    cout << "Input vector size: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Input numbers: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cin >> vec[i];
    }
    cout << "Input number to delete: ";
    cin >> X;
    vec = delete_number(vec, X);
    cout << "Result: ";
    write_vec(vec);
}