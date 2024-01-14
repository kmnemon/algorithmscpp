#include <gtest/gtest.h>

#include <vector>

using namespace std;

#include "binary_search/binary_search.h"


//bazel test --cxxopt=-std=c++14 --test_output=all --test_filter=binarysearch //:search-test
//bazel test --cxxopt=-std=c++14 --test_output=all //search_test:search-test


TEST(SearchTest, BinarySearch) {
  vector<int> a {1,2,3,4,5,6};

  int pos = binarysearch(a, 3);
  EXPECT_EQ(pos, 2);

}