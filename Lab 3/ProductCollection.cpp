#include "ProductCollection.h"

void ProductCollection::addProduct(Product* product)
{
	products.push_back(product);  // ������ ������� �� ��������
}

void ProductCollection::displayProducts() const
{
	for (const auto& product : products) {
		product->display();  // ������� ���������� ��� �������
	}
}

ProductCollection::~ProductCollection()
{
	for (const auto& product : products) {
		delete product;  // �������� ��'���� ��������
	}
}
