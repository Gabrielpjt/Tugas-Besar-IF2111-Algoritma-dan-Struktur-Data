/* File deletegame.c */
#include <stdio.h>
#include "deletegame.h"

void deletegame(Array* game, Queue queue_game)
/* 
I.S.: input list game yang akan dihapus dan nomor dari list tersebut
F.S.: Program menghapus nama game dengan nomor padalist tersebut
*/
{
    printf("Berikut adalah daftar game yang tersedia\n");
    int i;
    for(i = 0; i < game->Neff; i++){
        printf("%d. %s\n",i+1,game->TI[i]);
    }
    char *strnumber;
    printf("Masukkan nomor game yang akan dihapus:");
    strnumber = Input();
    if(count_space(strnumber) > 0)
    {
        printf("Masukan tidak valid");
    } else
    {
        int number = StrToInt(strnumber);
        if (number < 6){
        printf("Game gagal dihapus");
        } else
        {
            if(SearchElmtQueue(queue_game, game->TI[number-1]))
            {
                printf("Game gagal dihapus");
            } else
            {
                int j;
                for(j = number-1; j<game->Neff; j++){
                    game->TI[j] = game->TI[j+1];
                }
                game->Neff--;
                printf("Game berhasil dihapus");
            }
        }
    }

}