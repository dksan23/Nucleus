
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * detachWfPurgeRespDelSessionResp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/


#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"
#include "mmeSmDefs.h"
#include "utils/mmeStatesUtils.h"
#include "utils/mmeTimerTypes.h"

#include "mmeStates/detachWfPurgeRespDelSessionResp.h"	
#include "mmeStates/detachWfPurgeResp.h"	
#include "mmeStates/detachWfDelSessionResp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
DetachWfPurgeRespDelSessionResp::DetachWfPurgeRespDelSessionResp():State(detach_wf_purge_resp_del_session_resp, defaultStateGuardTimerDuration_c)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
DetachWfPurgeRespDelSessionResp::~DetachWfPurgeRespDelSessionResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
DetachWfPurgeRespDelSessionResp* DetachWfPurgeRespDelSessionResp::Instance()
{
        static DetachWfPurgeRespDelSessionResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void DetachWfPurgeRespDelSessionResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_del_session_resp);
                actionTable.setNextState(DetachWfPurgeResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(DEL_SESSION_RESP_FROM_SGW, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_pur_resp);
                actionTable.setNextState(DetachWfDelSessionResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(PURGE_RESP_FROM_HSS, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::detach_accept_to_ue);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(STATE_GUARD_TIMEOUT, actionTable));
        }
}
