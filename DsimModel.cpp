#include "StdAfx.h"
#include "DsimModel.h"

INT DsimModel::isdigital (CHAR *pinname)
{
	return TRUE;							// Indicates this is a digital model
}

VOID DsimModel::setup (IINSTANCE *instance, IDSIMCKT *dsimckt)
{
	inst = instance;
	ckt = dsimckt;
	pin_A = inst->getdsimpin("A", true);	// Creates pin A
	pin_B = inst->getdsimpin("B", true);	// Creates pin B
	pin_Q = inst->getdsimpin("Q", true);	// Creates pin Q
}

VOID DsimModel::runctrl (RUNMODES mode)
{
}

VOID DsimModel::actuate (REALTIME time, ACTIVESTATE newstate)
{
}

BOOL DsimModel::indicate (REALTIME time, ACTIVEDATA *data)
{
	return FALSE;
}

VOID DsimModel::simulate(ABSTIME time, DSIMMODES mode) {
	// Q = A & B
	if (ishigh(pin_A->istate()) && ishigh(pin_B->istate())) {
		pin_Q->setstate(time, 1, SHI);
	} else {
		pin_Q->setstate(time, 1, SLO);
	}
}

VOID DsimModel::callback (ABSTIME time, EVENTID eventid)
{
}
