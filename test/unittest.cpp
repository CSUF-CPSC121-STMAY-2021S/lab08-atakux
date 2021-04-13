#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../products.hpp"
#include "gtest_ext.h"

using ::testing::HasSubstr;

TEST(Products, Constructor) {
  Products products;
  ASSERT_EQ(products.getNumElements(), 0) << "### ERROR calling constructor, the number of elements should be  \'0\' ###";
}

TEST(Products, ProductEntry) {
  Products products;
  products.setProduct(1234,"Test",79.58);
  ASSERT_EQ(products.getNameFromElement(0), "Test") << "### ERROR calling getNameFromElement when setProduct was called providing the Name \'Test\', it was not returned.###";
}

TEST(Products, ProductSearch) {
  Products products;
  products.setProduct(9476,"Apple",0.58);
  products.setProduct(6392,"Banana",1.00);
  products.setProduct(112,"Cereal",4.59);
  products.setProduct(7562,"Coffee",7.56);
  products.setProduct(5295,"Milk",3.29);
  products.setProduct(4439,"Butter",5.00);
  ASSERT_EQ(products.getNameFromCode(4439), "Butter") << "### ERROR calling getNameFromCode when setProduct was called providing the Name \'Butter\', it was not returned.###";
}

TEST(Products, ProductSearchFail) {
  Products products;
  products.setProduct(9476,"Apple",0.58);
  products.setProduct(6392,"Banana",1.00);
  products.setProduct(112,"Cereal",4.59);
  products.setProduct(7562,"Coffee",7.56);
  products.setProduct(5295,"Milk",3.29);
  products.setProduct(4439,"Butter",5.00);
  ASSERT_EQ(products.getNameFromCode(555), "") << "### ERROR calling getNameFromCode when invalid code was searched, should have returned an empty string.###";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
    return RUN_ALL_TESTS();
}
