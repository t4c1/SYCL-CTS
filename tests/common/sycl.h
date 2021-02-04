/*******************************************************************************
//
//  SYCL 2020 Conformance Test Suite
//
//  Copyright:	(c) 2017 by Codeplay Software LTD. All Rights Reserved.
//
*******************************************************************************/

#ifndef __SYCLCTS_TESTS_COMMON_H
#define __SYCLCTS_TESTS_COMMON_H

// Todo: Disable warnings generated by SYCLONE header. Remove before release.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable : 4267)
#pragma warning(disable : 4201)
#pragma warning(disable : 4189)
#include <CL/sycl.hpp>
#pragma warning(pop)
#else
#include <CL/sycl.hpp>
#endif

#endif  // __SYCLCTS_TESTS_COMMON_H