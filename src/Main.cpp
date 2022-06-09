//
// Created by Maikol Guzman on 3/18/22.
//
#include <ostream>
#include <iostream>
#include <vector>
#include "IDataObject.h"
#include "CustomerData.h"
#include "IManager.h"
#include "CustomerManager.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Structural pattern - Bridge" << endl;

    vector<string> initDataList;

    initDataList.push_back("Mike Guzman");
    initDataList.push_back("Sebastián Gutierrez");
    initDataList.push_back("Emma Rojas");
    initDataList.push_back("Pedro Rodríguez");

    IDataObject* customerData = new CustomerData(initDataList, "Costa Rica");

    IManager* manager = new CustomerManager(customerData, "Costa Rica");

    manager->display();
    manager->next();
    manager->display();
    manager->next();
    manager->display();
    manager->newObj("Mark Zuckerberg ");
    manager->displayAll();
    manager->deleteObj("Mike Guzman");
    manager->displayAll();
    return 0;
}
