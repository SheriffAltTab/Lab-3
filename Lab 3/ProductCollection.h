#pragma once

#include <vector> 
#include "Product.h"

class ProductCollection {
private:
	std::vector<Product*> products;  // Колекція продуктів

public:
	// Додати продукт до колекції
	void addProduct(Product* product);

	// Вивести інформацію про всі продукти в колекції
	void displayProducts() const;

	// Деструктор класу, видаляє всі об'єкти продуктів
	~ProductCollection();
};

