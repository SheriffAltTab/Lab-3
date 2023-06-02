#include "ProductCollection.h"

void ProductCollection::addProduct(Product* product)
{
	products.push_back(product);  // Додати продукт до колекції
}

void ProductCollection::displayProducts() const
{
	for (const auto& product : products) {
		product->display();  // Вивести інформацію про продукт
	}
}

ProductCollection::~ProductCollection()
{
	for (const auto& product : products) {
		delete product;  // Видалити об'єкти продуктів
	}
}
