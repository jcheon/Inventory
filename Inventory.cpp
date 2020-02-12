#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  

// Inventory object constructor
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// Inventory method that decrements stocks when it is sold 
// or prints sold out if there is none. 
void Inventory::sell()
{
  if(m_in_stock > 0)
    m_in_stock--;
  else
    std::cout << "Sorry, that item is out of stock" << std::endl; 
}

// Prints name and price
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
