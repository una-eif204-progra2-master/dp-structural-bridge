//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_ICUSTOMER_H
#define DP_STRUCTURAL_BRIDGE_ICUSTOMER_H
#include <ostream>
#include <iostream>
using namespace std;

/*
 * Abstraction
 * defines the abstraction's interface
 */
class ICustomer {
public:
    virtual void next() = 0;

    virtual void previous() = 0;

    virtual void newCustomer(string customer) = 0;

    virtual void deleteCustomer(string customer) = 0;

    virtual void display() = 0;

    virtual void displayAll() = 0;

    virtual ~ICustomer() = default;
};
#endif //DP_STRUCTURAL_BRIDGE_ICUSTOMER_H
