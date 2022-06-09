//
// Created by Maikol Guzman Alan on 6/9/22.
//

#include "CustomerData.h"

CustomerData::CustomerData(const vector<string> &customers, const string &city) : customers(customers), city(city) {
    this->city = city;
}

CustomerData::~CustomerData() {

}

void CustomerData::nextRecord() {
    if (current <= customers.size() - 1) {
        current ++;
    }
}

void CustomerData::previousRecord() {
    if (current > 0) {
        current --;
    }
}

void CustomerData::newRecord(string customer) {
    customers.push_back(customer);
}

void CustomerData::deleteRecord(string customer) {
    std::remove(customers.begin(), customers.end(), customer);
}

void CustomerData::displayRecord() {
    cout << customers[current] << endl;
}

void CustomerData::displayAllRecord() {
    cout << city << endl;
    for (auto customer : customers){
        cout << customer << endl;
    }
}
