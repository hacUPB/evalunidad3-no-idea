#ifndef _ISTRATEGY_H
#define _ISTRATEGY_H

struct StratVtbl;
typedef struct
{
    struct StratVtbl const *vptr;
    
    /*char (*list)(void *data);*/
} Strategy;

struct StratVtbl{
    //void (*list)(Strategy const * const data);
    void (*algo)(Strategy const * const data);
};

void IStrategy_ctor(Strategy * const data);

/*static inline void Strategy_list(Strategy const * const data){
    (*data->vptr->list)(data);
}*/

//void DoAlgorithm(void *data);

static inline void DoAlgorithm(Strategy const * const data){
    (*data->vptr->algo)(data);
}

#endif
