//Name: Angela DeLeo
//Date: 04.12.2021
//Exercise: Lab10 Solution

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "products.hpp"

using namespace std;

int main()
{
  string name;
  double cost;
  int choice, code, c1, c2;
  Products p;

  do {
  cout << "\t*** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***\t" << endl << endl;
  cout << "1) Enter product information" << endl;
  cout << "2) Display product list" << endl;
  cout << "3) Display details on a specific product" << endl;
  cout << "4) Exit the program" << endl << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case 1:
      cin.ignore();
      cout << "Enter name: ";
      getline(cin, name);
      cout << endl;

      cout << "Enter cost: ";
      cin >> cost;
      cout << endl;

      cout << "Enter code: ";
      cin >> code;
      cout << endl;

      p.setProduct(code, name, cost);
      break;
    case 2:
      cout << "============= PRODUCT LIST ==============" << endl;
      cout << "Name                         Cost Code   " << endl;
      cout << "========================= ======= =======" << endl;
      for(int i = 0; i < p.getNumElements(); i++)
      {
        cout << left << setw(28) << p.getNameFromElement(i)
             << right << setw(5) << p.getCostFromElement(i) << " "
             << left << setw(25) << p.getCodeFromElement(i)
             << setw(25) << setfill(' ') << endl;
      }
      break;

    case 3:
      cout << "Enter Code: ";
      cin >> code;
      cout << endl << endl;

      cout << endl << "Name: " << p.getNameFromCode(code) << endl;
      cout << "Cost: $" << p.getCostFromCode(code) << endl;
      cout << "Code: " << code << endl << endl;
      break;

    case 4:
      exit(1);
      break;
    default:
      cout << "invalid choice" << endl;
      break;
  }
}while(choice != 4);


  return 0;
}
