#include <iostream>
int main()
{
    using namespace std;
    enum unnown
    {
        red,
        yellow,
        pink,
        green
    };
    unnown collor = yellow;
    enum unnown1
    {
        a = 1,
        b = 3,
        c = 7
    };
    unnown1 d = c;
    cout << d << endl;
    cout << collor << endl;
}