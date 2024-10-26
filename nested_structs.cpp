#include <iostream>
#include <string>
#include "nested_structs.hpp"
using namespace std;
// Function to input a single customer's details
 void inputCustomer(Customer& customer) {
    cout << "\nEnter Customer ID: ";
    cin >> customer.customer_id;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customer.name);

    cout << "Enter Customer Email: ";
    getline(cin, customer.email);


    cout << "Enter Street: ";
    getline(cin, customer.address.street);

    cout << "Enter City: ";
    getline(cin, customer.address.city);

    cout << "Enter Zipcode: ";
    getline(cin, customer.address.zipcode);
}

// print customer details
 void printCustomer(const Customer& customer) {
    cout << "\nCustomer Details:\n";
    cout << "ID: " << customer.customer_id << "\n"
        << "Name: " << customer.name << "\n"
        << "Email: " << customer.email << "\n"
        << "Address: " << customer.address.street << ", "
        << customer.address.city << " " << customer.address.zipcode << "\n";
}