#include "IStrategy.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/*
Context *context_new(){
    return (Context *)malloc(sizeof(Context));
}*/

void Context_ctor(Strategy *_strategy){
    strategy = _strategy;
}
/*
void Context_dtor(Context *this){
    free(this);
}*/

void SetStrategy(Strategy *_strategy){
    strategy = _strategy;
}

void DoSomeBussinessLogic(){

    //Context *context = (Context *)malloc(sizeof(Context));

    printf("Context: Sorting data using the strategy (not sure how it'll do it) %s\n");
    char list[] = {"a", "b", "c", "d", "e"};
    //char list[] = strategy->DoAlgorithm(){"a", "b", "c", "d", "e"};


    char *rslt = strategy->DoAlgorithm_((char *)list);


    printf("%s\n"context->resultStr);
}