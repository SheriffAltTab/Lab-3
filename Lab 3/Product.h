#pragma once

#include <iostream>
#include <vector>
#include <string>

class Product {
protected:
    std::string name;   // ����� ��������
    double price;       // ֳ�� ��������

public:
    // ����������� �����, ������ ����� �������� �� ����
    Product(const std::string& productName, double productPrice) : name(productName), price(productPrice) {};

    // ³��������� ����� ��� ��������� ���������� ��� �������
    virtual void display() const;

    // ³��������� ����������
    virtual ~Product() {};
};
