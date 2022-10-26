#include "ConcreteStrategyA.h"
#include "Context.h"
#include <stdio.h>

int main(){
    ConcreteStrategyA sA;

    //Context c;
    
    Strategy const *strategy = &sA.strategy;
    Strategy const *s;

    char list[] = {'a', 'b', 'c', 'd', 'e'};

    ConcreteStrategyA_ctor(&sA);

    sA->list = list;

    s = DoAlgorithm_(&sA);

    //c->SetStrategy(sA);

    //s = DoAlgorithm(list);
}