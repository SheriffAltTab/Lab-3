#pragma once

#include "Product.h"

class DairyProduct : public Product {
private:
    std::string expiryDate;  // Дата закінчення терміну придатності молочного продукту

public:
    // Конструктор класу DairyProduct, приймає назву, ціну та дату закінчення терміну придатності молочного продукту
    DairyProduct(const std::string& dairyProductName, double dairyProductPrice, const std::string& dairyProductExpiryDate)
        : Product(dairyProductName, dairyProductPrice), expiryDate(dairyProductExpiryDate) {};

    // Перевизначений метод display() для виведення інформації про молочний продукт
    void display() const override;
};
