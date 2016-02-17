#include "hal.h"

#include "matrix_ram_pool.hpp"

namespace matrix {

/*
 ******************************************************************************
 * DEFINES
 ******************************************************************************
 */

/*
 ******************************************************************************
 * EXTERNS
 ******************************************************************************
 */

/*
 ******************************************************************************
 * PROTOTYPES
 ******************************************************************************
 */

/*
 ******************************************************************************
 * GLOBAL VARIABLES
 ******************************************************************************
 */

/*
 ******************************************************************************
 ******************************************************************************
 * LOCAL FUNCTIONS
 ******************************************************************************
 ******************************************************************************
 */

/*
 ******************************************************************************
 * EXPORTED FUNCTIONS
 ******************************************************************************
 */

/**
 *
 */
void * mempool_malloc(size_t pool_index, size_t size) {
  void *ret = nullptr;

//  osalDbgCheck(pool_index < MATRIX_MEMPOOL_LEN);
//  osalDbgCheck(pool_array[pool_index].mp_object_size >= size);
//  ret = chPoolAlloc(&pool_array[pool_index]);

  osalSysHalt("write me");
  osalDbgCheck(NULL != ret);

  return ret;
}

/**
 *
 */
void mempool_free(size_t pool_index, void *mem) {
  if (NULL != mem){
    //chPoolFree(&pool_array[pool_index], mem);
    osalSysHalt("write me");
  }
}


} // namespace


