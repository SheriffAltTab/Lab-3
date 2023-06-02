#include "Product.h"

void Product::display() const
{
    // Виведення інформації про продукт
    std::cout << "Product: " << name << ", Price: $" << price << std::endl;
}
