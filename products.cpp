#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include "products.hpp"

using namespace std;



Products::Products()
{
  elementNum = 0;
  elements = nullptr;
}

Products::~Products()
{
  delete [] elements;
}

void Products::setProduct(int code, string name, double cost)
{
  int MAX = getNumElements();

  Member * temp = nullptr;
  temp = new Member[MAX + 1];

  //copy contents
  for(int i = 0; i < MAX; i++)
  {
    temp[i].productCode = elements[i].productCode;
    temp[i].productName = elements[i].productName;
    temp[i].productCost = elements[i].productCost;
  }

  //add new data

    temp[elementNum].productName = name;
    temp[elementNum].productCost = cost;
    temp[elementNum].productCode = code;

    if(elementNum > 0)
      delete [] elements;

    elements = nullptr;
    elements = temp;

    elementNum++;
}

string Products::getNameFromCode(int code)
{
    for(int i = 0; i < getNumElements(); i++)
    {
      if(elements[i].productCode == code)
        return elements[i].productName;
    }
    return "";
}


double Products::getCostFromCode(int code)
{
  for(int i = 0; i < getNumElements(); i++)
  {
    if(elements[i].productCode == code)
    {
      return elements[i].productCost;
    }
  }
  return -1;
}
