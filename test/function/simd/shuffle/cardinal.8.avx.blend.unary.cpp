//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#include <boost/simd/function/shuffle.hpp>
#include <boost/simd/pack.hpp>
#include <simd_test.hpp>
#include "reference.hpp"

using namespace boost::simd;

STF_CASE_TPL( "Cardinal 8 unary shuffle resolving as AVX blend", (float)/*(std::uint32_t)(std::int32_t)*/)
{
  bs::pack<T,8> a{ Valmax<T>(), T(42), T(13), Valmin<T>(), T(19), T(7), T(63), T(101) };
  bs::pack<T,8> b{ T(69), Valmin<T>(), T(37), T(0), T(155), T(511), Valmax<T>(), T(69) };

  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,-1,-1,7>(a)), (unary_ref<-1,-1,-1,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,-1,6,-1>(a)), (unary_ref<-1,-1,-1,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,-1,6,7>(a)), (unary_ref<-1,-1,-1,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,5,-1,-1>(a)), (unary_ref<-1,-1,-1,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,5,-1,7>(a)), (unary_ref<-1,-1,-1,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,5,6,-1>(a)), (unary_ref<-1,-1,-1,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,-1,5,6,7>(a)), (unary_ref<-1,-1,-1,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,-1,-1,-1>(a)), (unary_ref<-1,-1,-1,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,-1,-1,7>(a)), (unary_ref<-1,-1,-1,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,-1,6,-1>(a)), (unary_ref<-1,-1,-1,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,-1,6,7>(a)), (unary_ref<-1,-1,-1,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,5,-1,-1>(a)), (unary_ref<-1,-1,-1,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,5,-1,7>(a)), (unary_ref<-1,-1,-1,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,5,6,-1>(a)), (unary_ref<-1,-1,-1,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,-1,4,5,6,7>(a)), (unary_ref<-1,-1,-1,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,-1,-1,-1>(a)), (unary_ref<-1,-1,-1,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,-1,-1,7>(a)), (unary_ref<-1,-1,-1,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,-1,6,-1>(a)), (unary_ref<-1,-1,-1,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,-1,6,7>(a)), (unary_ref<-1,-1,-1,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,5,-1,-1>(a)), (unary_ref<-1,-1,-1,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,5,-1,7>(a)), (unary_ref<-1,-1,-1,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,5,6,-1>(a)), (unary_ref<-1,-1,-1,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,-1,5,6,7>(a)), (unary_ref<-1,-1,-1,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,-1,-1,-1>(a)), (unary_ref<-1,-1,-1,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,-1,-1,7>(a)), (unary_ref<-1,-1,-1,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,-1,6,-1>(a)), (unary_ref<-1,-1,-1,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,-1,6,7>(a)), (unary_ref<-1,-1,-1,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,5,-1,-1>(a)), (unary_ref<-1,-1,-1,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,5,-1,7>(a)), (unary_ref<-1,-1,-1,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,5,6,-1>(a)), (unary_ref<-1,-1,-1,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,-1,3,4,5,6,7>(a)), (unary_ref<-1,-1,-1,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,-1,-1,-1>(a)), (unary_ref<-1,-1,2,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,-1,-1,7>(a)), (unary_ref<-1,-1,2,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,-1,6,-1>(a)), (unary_ref<-1,-1,2,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,-1,6,7>(a)), (unary_ref<-1,-1,2,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,5,-1,-1>(a)), (unary_ref<-1,-1,2,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,5,-1,7>(a)), (unary_ref<-1,-1,2,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,5,6,-1>(a)), (unary_ref<-1,-1,2,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,-1,5,6,7>(a)), (unary_ref<-1,-1,2,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,-1,-1,-1>(a)), (unary_ref<-1,-1,2,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,-1,-1,7>(a)), (unary_ref<-1,-1,2,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,-1,6,-1>(a)), (unary_ref<-1,-1,2,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,-1,6,7>(a)), (unary_ref<-1,-1,2,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,5,-1,-1>(a)), (unary_ref<-1,-1,2,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,5,-1,7>(a)), (unary_ref<-1,-1,2,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,5,6,-1>(a)), (unary_ref<-1,-1,2,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,-1,4,5,6,7>(a)), (unary_ref<-1,-1,2,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,-1,-1,-1>(a)), (unary_ref<-1,-1,2,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,-1,-1,7>(a)), (unary_ref<-1,-1,2,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,-1,6,-1>(a)), (unary_ref<-1,-1,2,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,-1,6,7>(a)), (unary_ref<-1,-1,2,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,5,-1,-1>(a)), (unary_ref<-1,-1,2,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,5,-1,7>(a)), (unary_ref<-1,-1,2,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,5,6,-1>(a)), (unary_ref<-1,-1,2,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,-1,5,6,7>(a)), (unary_ref<-1,-1,2,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,-1,-1,-1>(a)), (unary_ref<-1,-1,2,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,-1,-1,7>(a)), (unary_ref<-1,-1,2,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,-1,6,-1>(a)), (unary_ref<-1,-1,2,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,-1,6,7>(a)), (unary_ref<-1,-1,2,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,5,-1,-1>(a)), (unary_ref<-1,-1,2,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,5,-1,7>(a)), (unary_ref<-1,-1,2,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,5,6,-1>(a)), (unary_ref<-1,-1,2,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,-1,2,3,4,5,6,7>(a)), (unary_ref<-1,-1,2,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,-1,-1,-1>(a)), (unary_ref<-1,1,-1,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,-1,-1,7>(a)), (unary_ref<-1,1,-1,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,-1,6,-1>(a)), (unary_ref<-1,1,-1,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,-1,6,7>(a)), (unary_ref<-1,1,-1,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,5,-1,-1>(a)), (unary_ref<-1,1,-1,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,5,-1,7>(a)), (unary_ref<-1,1,-1,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,5,6,-1>(a)), (unary_ref<-1,1,-1,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,-1,5,6,7>(a)), (unary_ref<-1,1,-1,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,-1,-1,-1>(a)), (unary_ref<-1,1,-1,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,-1,-1,7>(a)), (unary_ref<-1,1,-1,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,-1,6,-1>(a)), (unary_ref<-1,1,-1,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,-1,6,7>(a)), (unary_ref<-1,1,-1,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,5,-1,-1>(a)), (unary_ref<-1,1,-1,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,5,-1,7>(a)), (unary_ref<-1,1,-1,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,5,6,-1>(a)), (unary_ref<-1,1,-1,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,-1,4,5,6,7>(a)), (unary_ref<-1,1,-1,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,-1,-1,-1>(a)), (unary_ref<-1,1,-1,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,-1,-1,7>(a)), (unary_ref<-1,1,-1,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,-1,6,-1>(a)), (unary_ref<-1,1,-1,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,-1,6,7>(a)), (unary_ref<-1,1,-1,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,5,-1,-1>(a)), (unary_ref<-1,1,-1,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,5,-1,7>(a)), (unary_ref<-1,1,-1,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,5,6,-1>(a)), (unary_ref<-1,1,-1,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,-1,5,6,7>(a)), (unary_ref<-1,1,-1,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,-1,-1,-1>(a)), (unary_ref<-1,1,-1,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,-1,-1,7>(a)), (unary_ref<-1,1,-1,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,-1,6,-1>(a)), (unary_ref<-1,1,-1,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,-1,6,7>(a)), (unary_ref<-1,1,-1,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,5,-1,-1>(a)), (unary_ref<-1,1,-1,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,5,-1,7>(a)), (unary_ref<-1,1,-1,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,5,6,-1>(a)), (unary_ref<-1,1,-1,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,-1,3,4,5,6,7>(a)), (unary_ref<-1,1,-1,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,-1,-1,-1>(a)), (unary_ref<-1,1,2,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,-1,-1,7>(a)), (unary_ref<-1,1,2,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,-1,6,-1>(a)), (unary_ref<-1,1,2,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,-1,6,7>(a)), (unary_ref<-1,1,2,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,5,-1,-1>(a)), (unary_ref<-1,1,2,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,5,-1,7>(a)), (unary_ref<-1,1,2,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,5,6,-1>(a)), (unary_ref<-1,1,2,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,-1,5,6,7>(a)), (unary_ref<-1,1,2,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,-1,-1,-1>(a)), (unary_ref<-1,1,2,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,-1,-1,7>(a)), (unary_ref<-1,1,2,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,-1,6,-1>(a)), (unary_ref<-1,1,2,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,-1,6,7>(a)), (unary_ref<-1,1,2,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,5,-1,-1>(a)), (unary_ref<-1,1,2,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,5,-1,7>(a)), (unary_ref<-1,1,2,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,5,6,-1>(a)), (unary_ref<-1,1,2,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,-1,4,5,6,7>(a)), (unary_ref<-1,1,2,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,-1,-1,-1>(a)), (unary_ref<-1,1,2,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,-1,-1,7>(a)), (unary_ref<-1,1,2,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,-1,6,-1>(a)), (unary_ref<-1,1,2,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,-1,6,7>(a)), (unary_ref<-1,1,2,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,5,-1,-1>(a)), (unary_ref<-1,1,2,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,5,-1,7>(a)), (unary_ref<-1,1,2,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,5,6,-1>(a)), (unary_ref<-1,1,2,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,-1,5,6,7>(a)), (unary_ref<-1,1,2,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,-1,-1,-1>(a)), (unary_ref<-1,1,2,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,-1,-1,7>(a)), (unary_ref<-1,1,2,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,-1,6,-1>(a)), (unary_ref<-1,1,2,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,-1,6,7>(a)), (unary_ref<-1,1,2,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,5,-1,-1>(a)), (unary_ref<-1,1,2,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,5,-1,7>(a)), (unary_ref<-1,1,2,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,5,6,-1>(a)), (unary_ref<-1,1,2,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<-1,1,2,3,4,5,6,7>(a)), (unary_ref<-1,1,2,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,-1,-1,-1>(a)), (unary_ref<0,-1,-1,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,-1,-1,7>(a)), (unary_ref<0,-1,-1,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,-1,6,-1>(a)), (unary_ref<0,-1,-1,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,-1,6,7>(a)), (unary_ref<0,-1,-1,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,5,-1,-1>(a)), (unary_ref<0,-1,-1,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,5,-1,7>(a)), (unary_ref<0,-1,-1,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,5,6,-1>(a)), (unary_ref<0,-1,-1,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,-1,5,6,7>(a)), (unary_ref<0,-1,-1,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,-1,-1,-1>(a)), (unary_ref<0,-1,-1,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,-1,-1,7>(a)), (unary_ref<0,-1,-1,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,-1,6,-1>(a)), (unary_ref<0,-1,-1,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,-1,6,7>(a)), (unary_ref<0,-1,-1,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,5,-1,-1>(a)), (unary_ref<0,-1,-1,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,5,-1,7>(a)), (unary_ref<0,-1,-1,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,5,6,-1>(a)), (unary_ref<0,-1,-1,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,-1,4,5,6,7>(a)), (unary_ref<0,-1,-1,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,-1,-1,-1>(a)), (unary_ref<0,-1,-1,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,-1,-1,7>(a)), (unary_ref<0,-1,-1,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,-1,6,-1>(a)), (unary_ref<0,-1,-1,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,-1,6,7>(a)), (unary_ref<0,-1,-1,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,5,-1,-1>(a)), (unary_ref<0,-1,-1,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,5,-1,7>(a)), (unary_ref<0,-1,-1,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,5,6,-1>(a)), (unary_ref<0,-1,-1,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,-1,5,6,7>(a)), (unary_ref<0,-1,-1,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,-1,-1,-1>(a)), (unary_ref<0,-1,-1,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,-1,-1,7>(a)), (unary_ref<0,-1,-1,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,-1,6,-1>(a)), (unary_ref<0,-1,-1,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,-1,6,7>(a)), (unary_ref<0,-1,-1,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,5,-1,-1>(a)), (unary_ref<0,-1,-1,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,5,-1,7>(a)), (unary_ref<0,-1,-1,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,5,6,-1>(a)), (unary_ref<0,-1,-1,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,-1,3,4,5,6,7>(a)), (unary_ref<0,-1,-1,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,-1,-1,-1>(a)), (unary_ref<0,-1,2,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,-1,-1,7>(a)), (unary_ref<0,-1,2,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,-1,6,-1>(a)), (unary_ref<0,-1,2,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,-1,6,7>(a)), (unary_ref<0,-1,2,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,5,-1,-1>(a)), (unary_ref<0,-1,2,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,5,-1,7>(a)), (unary_ref<0,-1,2,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,5,6,-1>(a)), (unary_ref<0,-1,2,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,-1,5,6,7>(a)), (unary_ref<0,-1,2,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,-1,-1,-1>(a)), (unary_ref<0,-1,2,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,-1,-1,7>(a)), (unary_ref<0,-1,2,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,-1,6,-1>(a)), (unary_ref<0,-1,2,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,-1,6,7>(a)), (unary_ref<0,-1,2,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,5,-1,-1>(a)), (unary_ref<0,-1,2,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,5,-1,7>(a)), (unary_ref<0,-1,2,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,5,6,-1>(a)), (unary_ref<0,-1,2,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,-1,4,5,6,7>(a)), (unary_ref<0,-1,2,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,-1,-1,-1>(a)), (unary_ref<0,-1,2,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,-1,-1,7>(a)), (unary_ref<0,-1,2,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,-1,6,-1>(a)), (unary_ref<0,-1,2,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,-1,6,7>(a)), (unary_ref<0,-1,2,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,5,-1,-1>(a)), (unary_ref<0,-1,2,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,5,-1,7>(a)), (unary_ref<0,-1,2,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,5,6,-1>(a)), (unary_ref<0,-1,2,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,-1,5,6,7>(a)), (unary_ref<0,-1,2,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,-1,-1,-1>(a)), (unary_ref<0,-1,2,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,-1,-1,7>(a)), (unary_ref<0,-1,2,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,-1,6,-1>(a)), (unary_ref<0,-1,2,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,-1,6,7>(a)), (unary_ref<0,-1,2,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,5,-1,-1>(a)), (unary_ref<0,-1,2,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,5,-1,7>(a)), (unary_ref<0,-1,2,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,5,6,-1>(a)), (unary_ref<0,-1,2,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,-1,2,3,4,5,6,7>(a)), (unary_ref<0,-1,2,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,-1,-1,-1>(a)), (unary_ref<0,1,-1,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,-1,-1,7>(a)), (unary_ref<0,1,-1,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,-1,6,-1>(a)), (unary_ref<0,1,-1,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,-1,6,7>(a)), (unary_ref<0,1,-1,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,5,-1,-1>(a)), (unary_ref<0,1,-1,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,5,-1,7>(a)), (unary_ref<0,1,-1,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,5,6,-1>(a)), (unary_ref<0,1,-1,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,-1,5,6,7>(a)), (unary_ref<0,1,-1,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,-1,-1,-1>(a)), (unary_ref<0,1,-1,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,-1,-1,7>(a)), (unary_ref<0,1,-1,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,-1,6,-1>(a)), (unary_ref<0,1,-1,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,-1,6,7>(a)), (unary_ref<0,1,-1,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,5,-1,-1>(a)), (unary_ref<0,1,-1,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,5,-1,7>(a)), (unary_ref<0,1,-1,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,5,6,-1>(a)), (unary_ref<0,1,-1,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,-1,4,5,6,7>(a)), (unary_ref<0,1,-1,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,-1,-1,-1>(a)), (unary_ref<0,1,-1,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,-1,-1,7>(a)), (unary_ref<0,1,-1,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,-1,6,-1>(a)), (unary_ref<0,1,-1,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,-1,6,7>(a)), (unary_ref<0,1,-1,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,5,-1,-1>(a)), (unary_ref<0,1,-1,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,5,-1,7>(a)), (unary_ref<0,1,-1,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,5,6,-1>(a)), (unary_ref<0,1,-1,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,-1,5,6,7>(a)), (unary_ref<0,1,-1,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,-1,-1,-1>(a)), (unary_ref<0,1,-1,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,-1,-1,7>(a)), (unary_ref<0,1,-1,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,-1,6,-1>(a)), (unary_ref<0,1,-1,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,-1,6,7>(a)), (unary_ref<0,1,-1,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,5,-1,-1>(a)), (unary_ref<0,1,-1,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,5,-1,7>(a)), (unary_ref<0,1,-1,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,5,6,-1>(a)), (unary_ref<0,1,-1,3,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,-1,3,4,5,6,7>(a)), (unary_ref<0,1,-1,3,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,-1,-1,-1>(a)), (unary_ref<0,1,2,-1,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,-1,-1,7>(a)), (unary_ref<0,1,2,-1,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,-1,6,-1>(a)), (unary_ref<0,1,2,-1,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,-1,6,7>(a)), (unary_ref<0,1,2,-1,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,5,-1,-1>(a)), (unary_ref<0,1,2,-1,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,5,-1,7>(a)), (unary_ref<0,1,2,-1,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,5,6,-1>(a)), (unary_ref<0,1,2,-1,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,-1,5,6,7>(a)), (unary_ref<0,1,2,-1,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,-1,-1,-1>(a)), (unary_ref<0,1,2,-1,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,-1,-1,7>(a)), (unary_ref<0,1,2,-1,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,-1,6,-1>(a)), (unary_ref<0,1,2,-1,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,-1,6,7>(a)), (unary_ref<0,1,2,-1,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,5,-1,-1>(a)), (unary_ref<0,1,2,-1,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,5,-1,7>(a)), (unary_ref<0,1,2,-1,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,5,6,-1>(a)), (unary_ref<0,1,2,-1,4,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,-1,4,5,6,7>(a)), (unary_ref<0,1,2,-1,4,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,-1,-1,-1>(a)), (unary_ref<0,1,2,3,-1,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,-1,-1,7>(a)), (unary_ref<0,1,2,3,-1,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,-1,6,-1>(a)), (unary_ref<0,1,2,3,-1,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,-1,6,7>(a)), (unary_ref<0,1,2,3,-1,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,5,-1,-1>(a)), (unary_ref<0,1,2,3,-1,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,5,-1,7>(a)), (unary_ref<0,1,2,3,-1,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,5,6,-1>(a)), (unary_ref<0,1,2,3,-1,5,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,-1,5,6,7>(a)), (unary_ref<0,1,2,3,-1,5,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,-1,-1,-1>(a)), (unary_ref<0,1,2,3,4,-1,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,-1,-1,7>(a)), (unary_ref<0,1,2,3,4,-1,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,-1,6,-1>(a)), (unary_ref<0,1,2,3,4,-1,6,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,-1,6,7>(a)), (unary_ref<0,1,2,3,4,-1,6,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,5,-1,-1>(a)), (unary_ref<0,1,2,3,4,5,-1,-1>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,5,-1,7>(a)), (unary_ref<0,1,2,3,4,5,-1,7>(a)) );
  STF_ALL_EQUAL( (shuffle<0,1,2,3,4,5,6,-1>(a)), (unary_ref<0,1,2,3,4,5,6,-1>(a)) );
}