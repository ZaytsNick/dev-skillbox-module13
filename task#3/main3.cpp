#include <iostream>
#include <vector>
using namespace std;

void write_vec(vector<int> wVec)
{
    cout << "output: ";
    for (int i = 0; i < wVec.size(); ++i)
    {
        cout << wVec[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> storage(0);
    while (true)
    {
        int number;
        cout << "input number: ";
        cin >> number;
        if (number == -1)
        {
            write_vec(storage);
        }
        else
        {
            if (storage.size() == 20)
            {
                storage.erase(storage.begin());
            }
            storage.push_back(number);
        }
    }
}