//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_CUSTOMERMANAGER_H
#define DP_STRUCTURAL_BRIDGE_CUSTOMERMANAGER_H

#include "IDataObject.h"
#include "IManager.h"

/*
 * RefinedAbstraction
 * extends the interface defined by Abstraction
 */
class CustomerManager : public IManager {
private:
    IDataObject* customerData;
    string city;

public:
    CustomerManager(IDataObject *customerData, const string &city);

    void next() override;

    void previous() override;

    void newObj(string customer) override;

    void deleteObj(string customer) override;

    void display() override;

    void displayAll() override;

};


#endif //DP_STRUCTURAL_BRIDGE_CUSTOMERMANAGER_H
