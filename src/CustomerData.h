//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_CUSTOMERDATA_H
#define DP_STRUCTURAL_BRIDGE_CUSTOMERDATA_H

#include <ostream>
#include <iostream>
#include <vector>
#include "IDataObject.h"

using namespace std;

/*
 * Concrete Implementors
 * implement the Implementor interface and define concrete implementations
 */
class CustomerData : public IDataObject{
private:
    vector<string> customers;
    int current = 0;
    string city;
public:

    CustomerData(const vector<string> &customers, const string &city);

    virtual ~CustomerData();

    void nextRecord() override;

    void previousRecord() override;

    void newRecord(string customer) override;

    void deleteRecord(string customer) override;

    void displayRecord() override;

    void displayAllRecord() override;

};


#endif //DP_STRUCTURAL_BRIDGE_CUSTOMERDATA_H
