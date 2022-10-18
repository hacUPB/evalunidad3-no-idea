#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "IStrategy.h"

typedef struct _context
{
    char resultStr[20];
    IStrategy *strategy;
} Context;

void SetStrategy(IStrategy *strategy);
void DoSomeBussinessLogic();