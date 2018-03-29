#include <iostream>
#include <iomanip>

#include "duree.h"

using namespace std;

#define CDUREE nsUtil::CDuree

void CDUREE::normaliser (void)
{
    myDays    = myDuree / 86400;
    myHours   = (myDuree % 86400) / 3600;
    myMinutes = (myDuree % 3600) / 60;
    mySeconds = myDuree % 60;
} // normaliser ()

CDUREE::Duree (unsigned long long duree) : myDuree (duree)
{
    normaliser ();
    display ();
    cout << "créé" << endl;
} // Duree ()

unsigned long long CDUREE::getDuree(void) const { return myDuree; }

void CDUREE::display(void) const
{
    cout << '[' << setw (10) << myDays << ':'
         << setfill ('0') << setw (2) << myHours   << ':'
                          << setw (2) << myMinutes << ':'
                          << setw (2) << mySeconds << ']'
         << setfill (' ');
} // display ()

void CDUREE::incr(unsigned long long delta)
{
    myDuree += delta;
    normaliser ();
} // incr ()

void CDUREE::decr(unsigned long long delta)
{
    myDuree -= delta > myDuree ? myDuree : delta;
    normaliser();
} // decr ()

CDUREE CDUREE::operator + (const Duree & D) const
{
    return (getDuree() + D.getDuree());
} // operator +()

CDUREE CDUREE::operator - (const Duree & D) const
{
    if (getDuree() < D.getDuree())
        return 0;
    return (getDuree() - D.getDuree());
} // decr ()

bool nsUtil::Duree::operator == (const nsUtil::Duree &D) const
{
    return (getDuree() == D.getDuree());
}

bool nsUtil::Duree::operator <  (const nsUtil::Duree &D) const
{
    return (getDuree() < D.getDuree());
}

#undef CDUREE


