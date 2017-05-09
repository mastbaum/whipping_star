#ifndef SBNCOVAR_H_
#define SBNCOVAR_H_

#include <cmath>
#include <vector>
#include <iostream>
#include "SBNspec.h"
#include "SBNconfig.h"

#include "TMatrixDEigen.h"
#include "TMatrixDSymEigen.h"
#include "TMatrixD.h"
#include "TMatrixT.h"
#include "TVectorD.h"
#include "TRandom3.h"
#include "TFile.h"
#include "TTree.h"
#include "TH2D.h"

#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

#include <ctime>
#include "params.h"

namespace sbn{


class SBNcovar : public SBNconfig{
	

	public:
	
	
	SBNcovar(std::string rootfile, std::string xmlname);

	// a vector of num_multisim vectors, with a vector of subchannel*bin histograms in each	
	std::vector<SBNspec> multi_hists;
	
	int formCovarianceMatrix();
	TMatrixD full_covariance;
};


};
#endif