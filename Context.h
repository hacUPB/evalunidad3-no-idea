#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "IStrategy.h"

typedef struct _context
{
    char resultStr[20];
    Strategy *strategy;
} Context;

Context *context_new();
void Context_ctor(Strategy *strategy);
void Context_dtor(Context *this);

void SetStrategy(Strategy *strategy);
void DoSomeBussinessLogic();