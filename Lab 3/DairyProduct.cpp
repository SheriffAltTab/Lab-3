#include "DairyProduct.h"

void DairyProduct::display() const
{
	// ��������� ���������� ��� �������� �������
	std::cout << "Dairy Product: " << name << ", Price: $" << price << ", Expiry Date: " << expiryDate << std::endl;
}
