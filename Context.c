#include "IStrategy.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void Context(IStrategy *_strategy){
    strategy = _strategy;
}

void SetStrategy(IStrategy *_strategy){
    strategy = _strategy;
}

void DoSomeBussinessLogic(){

    Context *context = (Context *)malloc(sizeof(Context));

    printf("Context: Sorting data using the strategy (not sure how it'll do it) %s\n");
    char list[] = {"a", "b", "c", "d", "e"};
    //char list[] = strategy->DoAlgorithm(){"a", "b", "c", "d", "e"};

    char *rslt = strategy->DoAlgorithm((char *)list);

    for(int i = 0; i < sizeof(list); i++){
        context->resultStr[i] = list[i] + ",";
    }

    printf("%s\n"context->resultStr);
}