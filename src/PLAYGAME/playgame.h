/* File playgame.h */
#include <stdio.h>
#include "../adt/Queue/queue.h"
#include "../adt/Array/array.h"

#ifndef PLAYGAME_H
#define PLAYGAME_H

void playgame(Queue *game, Array array_game);
/* 
I.S.: menerima input queue game 
F.S.: melakukan dequeue dan menyimpan hasil elemen yang baru dihapus di dalam name
*/

#endif