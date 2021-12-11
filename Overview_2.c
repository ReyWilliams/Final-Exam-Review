#include <stdio.h>

int main()
{

    int goo = 5, bam = 12, hah = 6, eek;
    double meh;
    eek = goo + bam % hah;
            // 5 * 5 + 6 / 4 * 3
            // 25 + 6 / 4 * 3
            // 25 + 1 * 3
            // 25 + 3 = 28
    meh = eek * goo + hah / 4 * 3;

    printf("eek: %d, meh: %.2f\n", eek, meh);

    return 0;
}