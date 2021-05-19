#include <stdio.h>
#include <stdlib.h>
#include "../flute-master/flute.h"

int main()
{
    int d = 0;
    int x[10] = {0,1,3};
    int y[10] = {3,1,3};
    Flute::Tree flutetree;
    Flute::FluteState *flute1 = Flute::flute_init(FLUTE_POWVFILE, FLUTE_PORTFILE);
    flutetree = Flute::flute(flute1, 3, x, y, FLUTE_ACCURACY);
    Flute::plottree(flutetree);

    return 0;
}   
