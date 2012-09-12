//#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
    double tallofant = NAN;
    cout << tallofant << endl;
    if (isnan(tallofant) == true)

    {
        cout << "Nicht ein Numberlainen. Ja, bitte." << endl;
    }

    double neutall;
    neutall = atof("nan");
    cout << neutall << endl;
    return 0;
}
