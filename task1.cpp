#include <iostream>

using namespace std;

int main()
{
    cout << "do you want to see 'hello world' whole code? 1 for yes and 0 for no" << endl;
    int a;
    cin >> a;
    if (a == 1 || a == 0)
    {
        switch (a)
        {
        case 1: cout << "#include <iostream>\nint main() { \n    std::cout << \"Hello, World!\\n\" << std::endl;\n    return 0;\n}";
        case 0: cout << "ok see you later";
        }
    }
    else
    {
        cout << "i don't understand you";
    }
    return 0;
}