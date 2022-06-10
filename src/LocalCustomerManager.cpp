//
// Created by Maikol Guzman Alan on 6/9/22.
//

#include "LocalCustomerManager.h"

#include <utility>

LocalCustomerManager::LocalCustomerManager(const vector<string> &customers, string city) : customers(customers),
                                                                                                  city(std::move(city)) {}

LocalCustomerManager::~LocalCustomerManager() = default;

void LocalCustomerManager::nextRecord() {
    if (current <= customers.size() - 1) {
        current++;
    }
}

void LocalCustomerManager::previousRecord() {
    if (current > 0) {
        current--;
    }
}

void LocalCustomerManager::newRecord(string customer) {
    customers.push_back(customer);
}

void LocalCustomerManager::deleteRecord(string customer) {
    std::remove(customers.begin(), customers.end(), customer);
}

void LocalCustomerManager::displayRecord() {
    cout << "------------------------ LOCAL CUSTOMERS";
    cout << "------------------------" << endl << "City: " + city << endl;
    cout << customers[current] << endl;
}

void LocalCustomerManager::displayAllRecord() {
    cout << "------------------------ LOCAL CUSTOMERS";
    cout << "------------------------" << endl << "City: " + city << endl;
    for (const auto &customer: customers) {
        if (!customer.empty()) {
            cout << customer << ", ";
        }
    }
    cout << endl;
}

