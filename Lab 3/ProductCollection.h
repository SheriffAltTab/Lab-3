#pragma once

#include <vector> 
#include "Product.h"

class ProductCollection {
private:
	std::vector<Product*> products;  // �������� ��������

public:
	// ������ ������� �� ��������
	void addProduct(Product* product);

	// ������� ���������� ��� �� �������� � ��������
	void displayProducts() const;

	// ���������� �����, ������� �� ��'���� ��������
	~ProductCollection();
};

