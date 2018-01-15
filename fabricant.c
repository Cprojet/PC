//
// Created by Anass Bairouk on 1/14/18.
#include <stdio.h>


#include "supports.h"
#include "fabricant.h"

typedef struct plan_fabricant{

    int chapeaux_a_vendre;
    int matiere_a_acheter;
    int chapeaux_vendre_au_detailants;
    int prix_detailant;
    int chapeaux_a_sally;

}plan_fabricant;


typedef struct fabricant{
    int compte;
    int chapeaux;
    plan_fabricant *plan;

}fabricant;

int fabricant_jour_1(struct fabricant *info){

    /*after the chat will end you will give the ability
     * to enter the info after the deal
     *
     * */


    printf("Donner le nombre de chapeaux a vendre : ");
    scanf("%d",&(info->plan->chapeaux_a_vendre));
    printf("Donner le nombre de matiere a acheter : ");
    scanf("%d",&(info->plan->matiere_a_acheter));
    printf("\ncombien de chapeaux a vendre au detailant : ");
    scanf("%d",&(info->plan->chapeaux_vendre_au_detailants));
    printf("Prix :");
    scanf("%d",&(info->plan->prix_detailant));
    printf("\ncombien de chapeaux a vendre  a sally : ");
    scanf("%d",&(info->plan->chapeaux_a_sally));

    return 0;




}

