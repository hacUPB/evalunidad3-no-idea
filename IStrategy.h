#ifndef _ISTRATEGY_H
#define _ISTRATEGY_H

typedef struct _istrategy
{
    char (*list)(void *data);
} IStrategy;

void DoAlgorithm(void *data);

#endif