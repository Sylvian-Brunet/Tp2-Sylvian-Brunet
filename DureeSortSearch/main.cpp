#include <iostream>
#include <iomanip>         // boolalpha
#include <utility>
#include <vector>
#include <ctime>

#include "duree.h"

using namespace std;
using namespace rel_ops;
using namespace nsUtil;

const unsigned long KDureeMax = 1000000;

typedef vector<Duree> CVDuree;
typedef CVDuree::const_iterator Iter_t;


void testDuree (void)
    {
        Duree d1 (3661);
        Duree d2 (2661);
        Duree d3 (3661);

        cout << boolalpha;
        /*         */
        d1.display ();
        cout << " <  ";
        d2.display ();
        cout << " : " << (d1 <  d2) << '\n';

        d2.display ();
        cout << " <  ";
        d1.display ();
        cout << " : " << (d2 <  d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >  ";
        d2.display ();
        cout << " : " << (d1 >  d2) << '\n';

        d2.display ();
        cout << " >  ";
        d1.display ();
        cout << " : " << (d2 >  d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " <= ";
        d2.display ();
        cout << " : " << (d1 <= d2) << '\n';

        d2.display ();
        cout << " <= ";
        d1.display ();
        cout << " : " << (d2 <= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >= ";
        d2.display ();
        cout << " : " << (d1 >= d2) << '\n';

        d2.display ();
        cout << " >= ";
        d1.display ();
        cout << " : " << (d2 >= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d2.display ();
        cout << " : " << (d1 == d2) << '\n';

        d2.display ();
        cout << " == ";
        d1.display ();
        cout << " : " << (d2 == d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d3.display ();
        cout << " : " << (d1 == d3) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d2.display ();
        cout << " : " << (d1 != d2) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d3.display ();
        cout << " : " << (d1 != d3) << '\n';
        /*         */

        cout << noboolalpha;

} // testDuree()

void InitDuree (CVDuree & VDuree)
{
    unsigned size;
    cin >> size;
    VDuree.resize(size);
    for (auto & val : VDuree)
        val = Duree (rand() % KDureeMax);
}

void ShowCVDuree (const CVDuree & VDuree)
{
    for (Iter_t it (VDuree.begin()); it != VDuree.end(); ++it)
    {
        it -> display();
        cout << " = " << it -> getDuree() << endl;
    }
}

int main (void)
{
    srand(time(NULL));
    CVDuree vD;
    InitDuree(vD);
    ShowCVDuree(vD);
    /*testDuree ();*/
    return 0;
} // main()
