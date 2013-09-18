
//@HEADER
// ************************************************************************
//
//               HPCG: Simple Conjugate Gradient Benchmark Code
// Questions? Contact Michael A. Heroux (maherou@sandia.gov)
//
// ************************************************************************
//@HEADER

#ifndef SYMTEST_HPP
#define SYMTEST_HPP

#include "hpcg.hpp"
#include "SparseMatrix.hpp"
#include "Geometry.hpp"
#include "CGData.hpp"

struct SymTestData_STRUCT {
  double depsym_spmv, depsym_symgs;
  int count_fail;
};
typedef struct SymTestData_STRUCT SymTestData;

extern int SymTest(Geometry & geom, SparseMatrix & A, double * const b, double * const xexact, SymTestData * symtest_data);

#endif  // SYMTEST_HPP
