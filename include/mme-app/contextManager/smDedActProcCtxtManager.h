 /*
 * Copyright 2021-present, Infosys Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __SmDedActProcCtxtManager__
#define __SmDedActProcCtxtManager__
/******************************************************
* smDedActProcCtxtManager.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/blockPoolManager.h.tt>
 ***************************************/
#include "memPoolManager.h"

namespace mme
{
	class SmDedActProcCtxt;
	class SmDedActProcCtxtManager
	{
		public:
			/****************************************
			* SmDedActProcCtxtManager
			*  constructor
			****************************************/
			SmDedActProcCtxtManager(int numOfBlocks);
			
			/****************************************
			* SmDedActProcCtxtManager
			*    Destructor
			****************************************/
			~SmDedActProcCtxtManager();
			
			/******************************************
			 * allocateSmDedActProcCtxt
			 * allocate SmDedActProcCtxt data block
			 ******************************************/
			SmDedActProcCtxt* allocateSmDedActProcCtxt();
			
			/******************************************
			 * deallocateSmDedActProcCtxt
			 * deallocate a SmDedActProcCtxt data block
			 ******************************************/
			void deallocateSmDedActProcCtxt(SmDedActProcCtxt* SmDedActProcCtxtp );
	
		private:
			cmn::memPool::MemPoolManager<SmDedActProcCtxt> poolManager_m;
	};
};

#endif
		
		