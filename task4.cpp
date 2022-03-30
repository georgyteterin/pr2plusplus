#include <iostream>
using namespace std;

int main() 
{
    int decimal;
    cin >> decimal;

    int i = 1, binary = 0;
    while (decimal > 0) 
    {
        binary += (decimal % 2) * i;
        decimal = decimal / 2;
        i *= 10;
    }
    cout << binary;
}