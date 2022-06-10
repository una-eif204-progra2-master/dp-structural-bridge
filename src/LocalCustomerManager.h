//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_LOCALCUSTOMERMANAGER_H
#define DP_STRUCTURAL_BRIDGE_LOCALCUSTOMERMANAGER_H

#include <ostream>
#include <iostream>
#include <vector>
#include "IManager.h"

using namespace std;

/*
 * Concrete Implementors for Local Customers
 * implement the Implementor interface and define concrete implementations
 */
class LocalCustomerManager : public IManager {
private:
    vector<string> customers;
    int current = 0;
    string city;
public:

    LocalCustomerManager(const vector<string> &customers, string city);

    ~LocalCustomerManager() override;


    void nextRecord() override;

    void previousRecord() override;

    void newRecord(string customer) override;

    void deleteRecord(string customer) override;

    void displayRecord() override;

    void displayAllRecord() override;

};


#endif //DP_STRUCTURAL_BRIDGE_LOCALCUSTOMERMANAGER_H
