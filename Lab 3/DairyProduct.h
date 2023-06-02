#pragma once

#include "Product.h"

class DairyProduct : public Product {
private:
    std::string expiryDate;  // ���� ��������� ������ ���������� ��������� ��������

public:
    // ����������� ����� DairyProduct, ������ �����, ���� �� ���� ��������� ������ ���������� ��������� ��������
    DairyProduct(const std::string& dairyProductName, double dairyProductPrice, const std::string& dairyProductExpiryDate)
        : Product(dairyProductName, dairyProductPrice), expiryDate(dairyProductExpiryDate) {};

    // �������������� ����� display() ��� ��������� ���������� ��� �������� �������
    void display() const override;
};
