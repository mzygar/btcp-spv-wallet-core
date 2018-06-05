//
//  BREquihashSolver.h
//  BRCore
//
//  Created by Michal Zygar on 02/06/2018.
//  Copyright © 2018 breadwallet LLC. All rights reserved.
//

#ifndef BREquihashSolver_h
#define BREquihashSolver_h

#include <stdio.h>
#include "BRInt.h"
void BREquihash(uint8_t* header, UInt256 nonce);
void dump_hex(uint8_t *data, size_t len);
//int SolverFunction(const unsigned char *input,
//                   bool (*validBlock)(void*, const unsigned char *),
//                   void *validBlockData,
//                   bool (*cancelled)(void *),
//                   void* cancelledData,
//                   int numThreads,
//                   int n, int k);
#endif /* BREquihashSolver_h */
