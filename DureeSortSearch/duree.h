#ifndef DUREE_H
#define DUREE_H

namespace nsUtil {
    class Duree
    {
        unsigned long long myDuree;
        unsigned long long mySeconds;
        unsigned short     myMinutes;
        unsigned short     myHours;
        unsigned short     myDays;

        void normaliser();

    public:
        Duree (unsigned long long duree = 0);

        unsigned long long getDuree(void) const;
        void display(void) const;

        void incr(unsigned long long delta);
        void decr(unsigned long long delta);

        Duree operator + (const Duree & D) const ;
        Duree operator - (const Duree & D) const ;
        bool operator == (const Duree & D) const ;
        bool operator <  (const Duree & D) const ;
    }; //Duree
}
#endif // DUREE_H
