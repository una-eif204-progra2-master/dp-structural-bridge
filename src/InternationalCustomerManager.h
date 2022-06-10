//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_INTERNATIONALCUSTOMERMANAGER_H
#define DP_STRUCTURAL_BRIDGE_INTERNATIONALCUSTOMERMANAGER_H

#include <ostream>
#include <iostream>
#include <vector>
#include "IManager.h"

using namespace std;

/*
 * Concrete Implementors for international customers
 * implement the Implementor interface and define concrete implementations
 */
class InternationalCustomerManager : public IManager{
private:
    vector<string> customers;
    int current = 0;
    string country;
public:

    InternationalCustomerManager(const vector<string> &customers, const string &country);

    ~InternationalCustomerManager() override;

    void nextRecord() override;

    void previousRecord() override;

    void newRecord(string customer) override;

    void deleteRecord(string customer) override;

    void displayRecord() override;

    void displayAllRecord() override;

};


#endif //DP_STRUCTURAL_BRIDGE_INTERNATIONALCUSTOMERMANAGER_H
