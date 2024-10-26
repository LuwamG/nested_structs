#ifndef NESTED_STRUCTS_HPP
#define NESTED_STRUCTS_HPP

using namespace std;
struct Customer {
    int customer_id;
    string name;
    string email;

    // Address struct
    struct Address {
        string street;
        string city;
        string zipcode;
    } address;
};
#endif