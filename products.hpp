#ifndef PRODUCTS_HPP
#define PRODUCTS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct Member
{
      int productCode;
      double productCost;
      string productName;
};

class Products
{
private:
  int elementNum = 0;
  Member * elements;

public:
  Products();
  ~Products();
  void setProduct(int, string, double);

  int getNumElements()
  {
    return elementNum;
  }

  string getNameFromElement(int x)
  {
    return elements[x].productName;
  }

  int getCodeFromElement(int x)
  {
    return elements[x].productCode;
  }

  double getCostFromElement(int x)
  {
    return elements[x].productCost;
  }

  string getNameFromCode(int);
  double getCostFromCode(int);

};






#endif
