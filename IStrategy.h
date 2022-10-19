#ifndef _ISTRATEGY_H
#define _ISTRATEGY_H

struct stratVtbl;
typedef struct
{
    struct stratVtbl const *vptr;
    
    /*char (*list)(void *data);*/
} Strategy;

struct stratVtbl{
    void (*list)(Strategy const * const data);
}

void IStrategy_ctor(Strategy * const data);

static inline void Strategy_list(Strategy const * const data){
    (*me->vptr->list)(data);
}

void DoAlgorithm(void *data);

#endif
