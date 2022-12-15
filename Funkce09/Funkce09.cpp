#include <iostream>
using namespace std;

bool body(double ax, double bx, double ay, double by, bool& lezivestejnemKV)
{

    bool lezipoloX = false;
    lezivestejnemKV = false;
    double stejnaPol = ay * by > 0;

    if (stejnaPol)
    {
        lezipoloX = true;
        if (ax * bx > 0)
        {
            lezivestejnemKV = true;
        }
    }

    return lezipoloX;
}

int main()
{
    bool lezi;
    double a1;
    double a2;
    double b1;
    double b2;
    cout << "Zadej souradnice: ";
    cin >> a1;
    cin >> a2;
    cin >> b1;
    cin >> b2;

    if (body(a1, a2, b1, b2, lezi))
    {
        cout << "Ano, lezi ve stejne polorovine urcene osou x";
        if (lezi)
        {
            cout << "Ano, lezi ve stejnem kvadrantu";
        }
        else
        {
            cout << "Ne, nelezi ve stejnem kvadrantu";
        }
    }
    else
    {
        cout << "Ne, nelezi ve stejne polorovine urcene osou x";
    }

}