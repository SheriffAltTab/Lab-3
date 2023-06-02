#pragma once

#include "Product.h"

class Toy : public Product {
private:
	std::string manufacturer;  // Виробник іграшки

public:
	// Конструктор класу Toy, приймає назву, ціну та виробника іграшки
	Toy(const std::string& toyName, double toyPrice, const std::string& toyManufacturer)
		: Product(toyName, toyPrice), manufacturer(toyManufacturer) {};

	// Перевизначений метод display() для виведення інформації про іграшку
	void display() const override;
};
