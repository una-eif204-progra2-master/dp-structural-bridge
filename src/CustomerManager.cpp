//
// Created by Maikol Guzman Alan on 6/9/22.
//

#include "CustomerManager.h"

CustomerManager::CustomerManager(IDataObject *customerData, const string &city) : customerData(customerData),
                                                                                  city(city) {}

void CustomerManager::next() {
    customerData->nextRecord();
}

void CustomerManager::previous() {
    customerData->previousRecord();
}

void CustomerManager::newObj(string customer) {
    customerData->newRecord(customer);
}

void CustomerManager::deleteObj(string customer) {
    customerData->deleteRecord(customer);
}

void CustomerManager::display() {
    customerData->displayRecord();
}

void CustomerManager::displayAll() {
    customerData->displayAllRecord();
}

