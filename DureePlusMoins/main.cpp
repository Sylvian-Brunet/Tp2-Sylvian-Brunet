/**
 *
 * \file     TestDuree.cpp
 *
 * \authors  M. Laporte, D. Mathieu
 *
 * \date     29/10/2007
 *
 * \version  V1.0
 *
 * \brief    Test des operateurs + et -
 *
 **/
#include <vector>
#include <iostream>
#include <iomanip>            // setw()

#include "duree.h"

using namespace nsUtil;
using namespace std;

#define classdef typedef

namespace
{
    void testDuree (void)
    {
        Duree d1 (123);
        Duree d2 (12);

        d1.display ();
        cout << " + ";
        d2.display ();
        cout << " = ";
        (d1 + d2).display ();
        cout << '\n';

        d2.display ();
        cout << " + ";
        d1.display ();
        cout << " = ";
        (d2 + d1).display ();
        cout << '\n';

        d1.display ();
        cout << " - ";
        d2.display ();
        cout << " = ";
        (d1 - d2).display ();
        cout << '\n';

        d2.display ();
        cout << " - ";
        d1.display ();
        cout << " = ";
        (d2 - d1).display ();
        cout << '\n';

    } // TestCDuree()

} // namespace anonyme

int main ()
{
    /*vector <Duree> vDuree;
    for (unsigned long long duree; cin >> duree;)
        vDuree.push_back (duree);
    for (const Duree & duree : vDuree)
    {
        duree.display ();
        cout << endl;
    }*/
    testDuree();

    return 0;
}
