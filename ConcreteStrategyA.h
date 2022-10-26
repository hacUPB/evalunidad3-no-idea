#ifndef _CONCRETESTRATEGYA_H
#define _CONCRETESTRATEGYA_H

#include "IStrategy.h"
/*
class ConcreteStrategyA : IStrategy
    {
        public object DoAlgorithm(object data)
        {
            var list = data as List<string>;
            list.Sort();

            return list;
        }
    }
*/
typedef struct _concrete_strategyA
{
    char data;
    char list[5];

    /*struct*/ Strategy strategy;
}ConcreteStrategyA;

void ConcreteStrategyA_ctor(ConcreteStrategyA * const me);

//void *DoAlgorithm(char *data);

#endif
