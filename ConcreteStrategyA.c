#include "ConcreteStrategyA.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


static void DoAlgorithm_(char list[]);

void ConcreteStrategyA_ctor(ConcreteStrategyA * const me){
    static struct StratVtbl const vtbl = {
        &DoAlgorithm_
    };

    IStrategy_ctor(&me->strategy);
    me->strategy.vptr = &vtbl;
}

static void DoAlgorithm_(char list[]){

    char *aux = NULL;

    //for(int i = 0; i < 5; i++){
        //for(int j = 0; j < i; j++){
            //if(list[j] == list[0] /*tal vez tambien se pueda poner solo list para su primera 
            //posición*/ && list[j] < list[j+1]){
                //aux = list[j+1];
                //list[j+1] = list[j];
                //list[j] = aux;
            //}/*else if(list[j] > list[j+1]){
                //aux = list[j+1];
                //list[j+1] = list[j];
                //list[j] = aux;
            //}*/
       // }
    //}

    int inr = 1;
    int pas, j;
    int n = 5;
    for(pas = 0; pas < n-1 && inr; pas++){
        inr = 0;
        for(j = 0; j < n-pas; j++){
            if(list[j] > list[j+1]){
                list[j] = list[j+1];
                list[j+1] = aux;
            }
        }
    }
}
