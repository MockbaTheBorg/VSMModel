// VSMModel.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "sdk/vsm.hpp"
#include "ActiveModel.h"
#include "DsimModel.h"

#define VSMModel_key 0x00000000

extern "C" {
	IDSIMMODEL __declspec (dllexport) *createdsimmodel(CHAR *device, ILICENCESERVER *ils) {
		if (ils->authorize(VSMModel_key))
			return new DsimModel;
		else
			return NULL;
	}
}

extern "C" VOID __declspec (dllexport) deletedsimmodel(IDSIMMODEL *model) {
	delete (DsimModel *)model;
}
