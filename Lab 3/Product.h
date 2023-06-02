#pragma once

#include <iostream>
#include <vector>
#include <string>

class Product {
protected:
    std::string name;   // Назва продукту
    double price;       // Ціна продукту

public:
    // Конструктор класу, приймає назву продукту та ціну
    Product(const std::string& productName, double productPrice) : name(productName), price(productPrice) {};

    // Віртуальний метод для виведення інформації про продукт
    virtual void display() const;

    // Віртуальний деструктор
    virtual ~Product() {};
};
