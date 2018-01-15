//
// Created by Anass Bairouk on 1/14/18.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "supports.h"

int offre_et_demande(int piece){
    int prix;
    switch(piece){
        case 1: prix = 140 ;break;
        case 2: prix = 138 ;break;
        case 3: prix = 136 ;break;
        case 4: prix = 134 ;break;
        case 5: prix = 132 ;break;
        case 6: prix = 130 ;break;
        case 7: prix = 127 ;break;
        case 8: prix = 124 ;break;
        case 9: prix = 121 ;break;
        case 10: prix = 118 ;break;
        case 11: prix = 115 ;break;
        case 12: prix = 111 ;break;
        case 13: prix = 107 ;break;
        case 14: prix = 103 ;break;
        case 15: prix = 99 ;break;
        case 16: prix = 94 ;break;
        case 17: prix = 89 ;break;
        case 18: prix = 82 ;break;
        default: printf("you can't sell more than 18 pieces");
    }

    return prix;

}


