#ifndef SONG_H
#define SONG_H

#include "../solfege/solfege.h"

typedef struct Song {
    PlayNote *notes;
    int size;
    int replay;
} Song;

/**
* ALL SONGS ARE DEFINED HERE
*/

void createDoReMiFaSolLaSi();

void createQuienSeHaTomado();

void createTetris();

#endif
