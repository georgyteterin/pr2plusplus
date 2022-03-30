#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ten = 0;
    string two, twodubl;
    cout << "insert your binary number ";
    cin >> two;
    twodubl = two;
    for (int i = 0; i < two.size(); i++)
    {
        twodubl[i] = (int)two[i] - 48;
        twodubl[i] = twodubl[i] * pow(2, twodubl.size() - i - 1);
        ten += twodubl[i];
    }
    cout << "answer is " << ten << endl;
    return 0;
}