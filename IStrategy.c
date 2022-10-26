#include "IStrategy.h"
#include <assert.h>

//static void Strategy_list_(Strategy const * const me);

static void DoAlgrithm_(Strategy const * const me);

void IStrategy_ctor(Strategy * const data){
    static struct StratVtbl const vtbl = {
        //&Strategy_list_,
        &DoAlgorithm_
    };
    data->vptr = &vtbl;
}

/*static void Strategy_list_(Strategy const * const me){
    assert(0);
}*/

static void DoAlgorithm_(Strategy const * const me){
    assert(0);
}
