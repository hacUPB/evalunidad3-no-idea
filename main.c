#include "ConcreteStrategyA.h"
#include <stdio.h>

int main(){
    ConcreteStrategyA sA;
    
    Strategy const *strategy = &sA.strategy;
    Strategy const *s;

    char list[] = {'a', 'b', 'c', 'd', 'e'};

    ConcreteStrategyA_ctor(&sA);

    //s = DoAlgorithm(list);
}