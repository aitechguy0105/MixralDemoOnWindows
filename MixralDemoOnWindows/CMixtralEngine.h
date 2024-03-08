#pragma once

#include "common/common.h"

#include "common/console.h"
#include "llama.h"

class CMixtralEngine
{
public:
	CString getAnswer(CString *pCsText);
	bool loadModel(CString* pCsModelPath, int nMode = 0);
	int releaseModel();
	
	gpt_params params;
};

