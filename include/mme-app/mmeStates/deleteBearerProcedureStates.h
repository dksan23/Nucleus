

 /*
 * Copyright 2021-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
 /******************************************************
 * deleteBearerProcedureStates.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.h.tt>
 ******************************************************/
 #ifndef __DELETE_BEARER_PROCEDURE__
 #define __DELETE_BEARER_PROCEDURE__

 #include "state.h"

 namespace mme {
	class DeleteBearerStart : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DeleteBearerStart* Instance();

			/****************************************
			* DeleteBearerStart
			*    Destructor
			****************************************/
			~DeleteBearerStart();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DeleteBearerStart
			*    Protected constructor
			****************************************/
			DeleteBearerStart();  
	};
	
	class DeleteBearerWfPagingComplete : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DeleteBearerWfPagingComplete* Instance();

			/****************************************
			* DeleteBearerWfPagingComplete
			*    Destructor
			****************************************/
			~DeleteBearerWfPagingComplete();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DeleteBearerWfPagingComplete
			*    Protected constructor
			****************************************/
			DeleteBearerWfPagingComplete();  
	};
	
	class DeleteBearerWfDeactComplete : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DeleteBearerWfDeactComplete* Instance();

			/****************************************
			* DeleteBearerWfDeactComplete
			*    Destructor
			****************************************/
			~DeleteBearerWfDeactComplete();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DeleteBearerWfDeactComplete
			*    Protected constructor
			****************************************/
			DeleteBearerWfDeactComplete();  
	};
	
};
#endif // __DELETE_BEARER_PROCEDURE__