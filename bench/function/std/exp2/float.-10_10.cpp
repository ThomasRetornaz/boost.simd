// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor exp2 in std mode for float type with std_.
#include <simd_bench.hpp>
#include <boost/simd/function/exp2.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SCALAR_BENCH(std_exp2, bs::std_(bs::exp2));

DEFINE_BENCH_MAIN()
{
  nsb::for_each<std_exp2, float>(-10, 10);
}