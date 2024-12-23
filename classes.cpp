#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void Binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}
void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incoorect binary format" << endl;
            exit(0);
        }
    }
}
void Binary::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary::display()
{
    cout << "Displaying ypur binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Binary obj;
    obj.read();
    obj.chk_bin();
    obj.ones();
    obj.display();

    return 0;
}
