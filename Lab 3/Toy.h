#pragma once

#include "Product.h"

class Toy : public Product {
private:
	std::string manufacturer;  // �������� �������

public:
	// ����������� ����� Toy, ������ �����, ���� �� ��������� �������
	Toy(const std::string& toyName, double toyPrice, const std::string& toyManufacturer)
		: Product(toyName, toyPrice), manufacturer(toyManufacturer) {};

	// �������������� ����� display() ��� ��������� ���������� ��� �������
	void display() const override;
};
