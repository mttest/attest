#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

/** @brief Doxylainen
 * 
 * Berre toill og fantaskap.
 * 
 * @param argc Antall argument.
 * @param argv Peikere til argument.
 * 
 * @return Alltid alt i orden
 */
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
