#include "DairyProduct.h"

void DairyProduct::display() const
{
	// Виведення інформації про молочний продукт
	std::cout << "Dairy Product: " << name << ", Price: $" << price << ", Expiry Date: " << expiryDate << std::endl;
}
