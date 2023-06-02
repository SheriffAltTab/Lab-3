#include <iostream>
#include <vector>
#include <string>
#include "Toy.h"
#include "Product.h"
#include "DairyProduct.h"
#include "ProductCollection.h"

int main() {
    ProductCollection collection;
    int choice;

    while (true) {
        std::cout << "===== Menu =====" << std::endl;
        std::cout << "1. Add Product" << std::endl;
        std::cout << "2. Display All Products" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "================" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            double price;
            std::string manufacturer;
            std::string expiryDate;

            std::cout << "Enter product name: ";
            std::cin >> name;
            std::cout << "Enter product price: ";
            std::cin >> price;

            std::cout << "Is it a toy? (y/n): ";
            char isToy;
            std::cin >> isToy;
            if (isToy == 'y' || isToy == 'Y') {
                std::cout << "Enter toy manufacturer: ";
                std::cin >> manufacturer;
                Toy* toy = new Toy(name, price, manufacturer);
                collection.addProduct(toy);
            }
            else {
                std::cout << "Is it a dairy product? (y/n): ";
                char isDairyProduct;
                std::cin >> isDairyProduct;
                if (isDairyProduct == 'y' || isDairyProduct == 'Y') {
                    std::cout << "Enter dairy product expiry date: ";
                    std::cin >> expiryDate;
                    DairyProduct* dairyProduct = new DairyProduct(name, price, expiryDate);
                    collection.addProduct(dairyProduct);
                }
                else {
                    Product* product = new Product(name, price);
                    collection.addProduct(product);
                }
            }

            std::cout << "Product added successfully!" << std::endl;
        }
        else if (choice == 2) {
            std::cout << "----- Products -----" << std::endl;
            collection.displayProducts();
            std::cout << "---------------------" << std::endl;
        }
        else if (choice == 0) {
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
