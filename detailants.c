//
// Created by Anass Bairouk on 1/14/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "supports.h"

#include "detailants.h"

typedef struct plan_detailants{
    int chapeaux_a_vendre;
    int prix_par_piece;
    int chapeaux_a_acheter;
    int chapeaux_a_acheter_fabricants1;
    int chapeaux_a_acheter_fabricants2;

}plan_detailants;



typedef struct detailants{
    int compte; //
    int chapeaux;
    plan_detailants *plan;
    int chapeaux_a_vendre;

}detailants;

int detailant_jour_1(struct detailants *info){

    /*after the chat will end you will give the ability
     * to enter the info after the deal
     *
     * */

    printf("Donner le nombre de chapeaux a vendre : ");
    scanf("%d",&(info->plan->chapeaux_a_vendre));
    info->plan->prix_par_piece=offre_et_demande(info->plan->chapeaux_a_vendre);
    printf("\ncombien de chapeaux le fabricant 1 va te vendre :");
    scanf("%d",&(info->plan->chapeaux_a_acheter_fabricants1));
    printf("\ncombien de chapeaux le fabricant 2 va te vendre : ");
    scanf("%d",&(info->plan->chapeaux_a_acheter_fabricants2));
    info->plan->chapeaux_a_acheter = info->plan->chapeaux_a_acheter_fabricants1 + info->plan->chapeaux_a_acheter_fabricants2;

    return 0;


}
