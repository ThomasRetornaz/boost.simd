//==================================================================================================
/*
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/type/complex/function/sqr_abs.hpp>
#include <boost/simd/type/complex.hpp>
#include <boost/simd/pack.hpp>
#include <simd_test.hpp>
#include <complex>
#include <iomanip>

namespace bs = boost::simd;

STF_CASE_TPL( "Complex sqr_abs on complex<T>", STF_IEEE_TYPES)
{
  bs::complex<T> r0(0,4), r1(4,0), r2(3,3), r3(-1,0), r4(0,-1), r5(-2,-2);

  STF_EQUAL(bs::sqr_abs(r0), T(16));
  STF_EQUAL(bs::sqr_abs(r1), T(16));
  STF_EQUAL(bs::sqr_abs(r2), T(18));
  STF_EQUAL(bs::sqr_abs(r3), T(1));
  STF_EQUAL(bs::sqr_abs(r4), T(1));
  STF_EQUAL(bs::sqr_abs(r5), T(8));
}

