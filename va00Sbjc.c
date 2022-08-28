#include <stdio.h>
#include "va50Blck.h"

int main () {
        qbqetell_etnica_BLCK* infr;
        int _ba00_ = -900; int* _ba00 = &_ba00_;
        int _bb00_ = -100; int* _bb00 = &_bb00_;
        (*_bb00) = qbqetell_etnica_BLCK____intl (&infr, _ba00 + 0);
        if ((*_bb00) == 0) {
                printf ("Init errr: %d\n", (*_bb00));
                return 1;
        }
        printf ("Test stts: 10--00\n");
        (*((*infr).strm +    0)) = 11;
        printf ("Test stts: 20--00\n");
        (*((*infr).strm + 1023)) = 22;
        printf ("Test stts: 30--00\n");
        printf ("Init data: %d\n", (*((*infr).strm +    0)));
        printf ("Test stts: 40--00\n");
        printf ("Init data: %d\n", (*((*infr).strm + 1023)));
        printf ("Test stts: PASSED\n");
        return 0;
}
