#ifndef DCA_SOLVER_BASE_H
#define DCA_SOLVER_BASE_H
#include "Vector.h"
#include "TridiagonalMatrix.h"
#include "ContinuedFractionCollection.h"
#include "ContinuedFraction.h"

namespace OpenDca {

template<typename DcaToDmrgType,typename VaryingGeometryType>
class DcaSolverBase {

public:

	typedef typename PsimagLite::Vector<SizeType>::Type VectorSizeType;
	typedef typename DcaToDmrgType::RealType RealType;
	typedef std::complex<RealType> ComplexType;
	typedef PsimagLite::Matrix<ComplexType> MatrixType;
	typedef PsimagLite::TridiagonalMatrix<RealType> TridiagonalMatrixType;
	typedef PsimagLite::ContinuedFraction<TridiagonalMatrixType> ContinuedFractionType;
	typedef PsimagLite::ContinuedFractionCollection<ContinuedFractionType> ContinuedFractionCollectionType;
	typedef typename ContinuedFractionType::PlotParamsType PlotParamsType;

	virtual ~DcaSolverBase() {}

	virtual void solve(MatrixType& gf,const VectorSizeType& sites,const PlotParamsType& plotParams) = 0;

};
}

#endif
