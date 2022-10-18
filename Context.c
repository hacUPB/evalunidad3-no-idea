#include "IStrategy.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SetStrategy(IStrategy *strategy){
    strategy = malloc(sizeof(IStrategy));
}

void DoSomeBussinessLogic(){

    Context *context = (Context *)malloc(sizeof(Context));

    printf("Context: Sorting data using the strategy (not sure how it'll do it) %s\n");
    char list[] = {"a", "b", "c", "d", "e"};
    //char list[] = strategy->DoAlgorithm(){"a", "b", "c", "d", "e"};
    for(int i = 0; i < sizeof(list); i++){
        context->resultStr[i] = list[i] + ",";
    }

    printf("%s\n"context->resultStr);
}