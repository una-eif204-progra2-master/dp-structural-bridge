//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_CUSTOMER_H
#define DP_STRUCTURAL_BRIDGE_CUSTOMER_H

#include "IManager.h"
#include "ICustomer.h"

/*
 * RefinedAbstraction
 * extends the interface defined by Abstraction
 */
class Customer : public ICustomer {
private:
    IManager *customerData;
public:
    explicit Customer(IManager *customerData);

    void next() override;

    void previous() override;

    void newCustomer(string customer) override;

    void deleteCustomer(string customer) override;

    void display() override;

    void displayAll() override;

};


#endif //DP_STRUCTURAL_BRIDGE_CUSTOMER_H
