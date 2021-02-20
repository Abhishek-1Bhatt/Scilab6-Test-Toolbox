// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Rupak Rokade
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
// Edited By: Abhishek Bhatt for the purpose of FOSSEE screening task

extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include<stdlib.h>
#include<cstdio>
#include "trans.h"




static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	double* in1 = NULL;
	double* out1 = NULL;
	int inr1 = 0;
	int inc1 = 0;
	int size1 = 0;
  
if (nin < 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0)
    {
        Scierror(999, _("%s: Wrong type for input argument : A double matrix expected.\n"), fname);
        return STATUS_ERROR;
    }

    size1 = scilab_getDim2d(env, in[0], &inr1, &inc1);
    scilab_getDoubleArray(env, in[0], &in1);

		out[0] = scilab_createDoubleMatrix2d(env, inc1, inr1, 0);
   	scilab_getDoubleArray(env, out[0], &out1);

		trans((double *)in1, (double *)out1, inr1, inc1);

    return 0;
}
}
