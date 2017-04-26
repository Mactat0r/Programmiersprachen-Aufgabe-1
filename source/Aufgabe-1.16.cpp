#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    float m;
    cout << "MToKilometer \n"
	      << "meilen: \n";
    cin >> m;
    float rechner(float m);
    cout << rechner(m) << " Kilometer! \n";
}

float rechner(float m)
{
    float ergebniss = m * 1.609344;

    return ergebniss;
}
