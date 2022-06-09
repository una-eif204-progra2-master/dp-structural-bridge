//
// Created by Maikol Guzman Alan on 6/9/22.
//

#include "InternationalCustomerManager.h"

InternationalCustomerManager::InternationalCustomerManager(const vector<string> &customers, const string &country)
        : customers(customers), country(country) {
    this->country = country;
}

InternationalCustomerManager::~InternationalCustomerManager() = default;

void InternationalCustomerManager::nextRecord() {
    if (current <= customers.size() - 1) {
        current++;
    }
}

void InternationalCustomerManager::previousRecord() {
    if (current > 0) {
        current--;
    }
}

void InternationalCustomerManager::newRecord(string customer) {
    customers.push_back(customer);
}

void InternationalCustomerManager::deleteRecord(string customer) {
    std::remove(customers.begin(), customers.end(), customer);
}

void InternationalCustomerManager::displayRecord() {
    cout << "------------------------ INTERNATIONAL CUSTOMERS";
    cout << "------------------------" << endl << "Country: " + country << endl;
    cout << customers[current] << endl;
}

void InternationalCustomerManager::displayAllRecord() {
    cout << "------------------------ INTERNATIONAL CUSTOMERS";
    cout << "------------------------" << endl << "Country: " + country << endl;
    for (const auto &customer: customers) {
        if (!customer.empty()) {
            cout << customer << ", ";
        }
    }
    cout << endl;
}
