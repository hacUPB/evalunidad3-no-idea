#ifndef _CONCRETESTRATEGYB_H
#define _CONCRETESTRATEGYB_H

#include "IStrategy.h"

typedef struct _concrete_strategyB
{
    char data;
    char list[5];

    /*struct*/ Strategy strategy;
}ConcreteStrategyB;

void ConcreteStrategyB_ctor(ConcreteStrategyB * const me, char *list);

//void *DoAlgorithm(char *data);

#endif