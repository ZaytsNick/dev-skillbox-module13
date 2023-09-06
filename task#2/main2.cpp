
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
vector<T> enter_vector(vector<T> vec, int size)
{
    T x;
    cout << "Input numbers: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> x;
        vec.push_back(x);
    }
    return vec;
}

float summ(vector<float> product, vector<int> buys)
{
    float sum(0);
    for (int i = 0; i < product.size(); ++i)
    {
        if (buys[i] < product.size()){
            sum += product[buys[i]];}
        else
        {cout << "Error product with index " << buys[i] << ": absent";
            return false;}
    }
    return sum;
}
int main()
{

    int size;
    cout << "Input vector size on price: ";
    cin >> size;
    vector<float> price;
    price = enter_vector<float>(price, size);
    cout << "Input vector size on buy: ";
    cin >> size;
    vector<int> buy;
    buy = enter_vector<int>(buy, size);
    
    
    int answer(summ(price,buy));
    if(answer)
    cout<<"The total summ is "<<answer;
}