//
// Created by Maikol Guzman Alan on 6/9/22.
//

#include "Customer.h"

Customer::Customer(IManager *customerData) : customerData(customerData) {}

void Customer::next() {
    customerData->nextRecord();
}

void Customer::previous() {
    customerData->previousRecord();
}

void Customer::newCustomer(string customer) {
    customerData->newRecord(customer);
}

void Customer::deleteCustomer(string customer) {
    customerData->deleteRecord(customer);
}

void Customer::display() {
    customerData->displayRecord();
}

void Customer::displayAll() {
    customerData->displayAllRecord();
}

