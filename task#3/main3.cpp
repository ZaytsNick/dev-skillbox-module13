#include <iostream>
#include <vector>
using namespace std;

void write_vec(vector<int> wVec,int j)
{
    cout << "output: ";
    for (int i = 0; i < wVec.size(); ++i)
    {
        cout << wVec[(j+i)%20] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> storage(20);
   for (int i=0;true;i++)
    {
        int number;
        cout << "input number: ";
        cin >> number;
        if (number == -1)
        {
            write_vec(storage,i);
            i--;
        }
        else
        {
            storage[i%20]=number;
        }
    }
}