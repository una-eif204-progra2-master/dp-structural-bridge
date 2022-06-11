//
// Created by Maikol Guzman on 3/18/22.
//
#include <ostream>
#include <iostream>
#include <vector>
#include "InternationalCustomerManager.h"
#include "ICustomer.h"
#include "Customer.h"
#include "LocalCustomerManager.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Structural pattern - Bridge" << endl << endl;

    vector<string> dataIntCustomer;
    vector<string> dataLocalCustomers;


    dataIntCustomer.emplace_back("Mike Guzman");
    dataIntCustomer.emplace_back("Sebastián Gutierrez");
    dataLocalCustomers.emplace_back("Emma Rojas");
    dataLocalCustomers.emplace_back("Pedro Rodríguez");

    ICustomer *intCustomer = new Customer(new InternationalCustomerManager(dataIntCustomer, "USA"));
    intCustomer->display();

    intCustomer->next();
    intCustomer->display();

    intCustomer->newCustomer("Mark Zuckerberg");
    intCustomer->displayAll();

    intCustomer->next();
    intCustomer->previous();
    intCustomer->display();

    intCustomer->deleteCustomer("Mike Guzman");
    intCustomer->displayAll();

    ICustomer *localCustomer = new Customer(new LocalCustomerManager(dataLocalCustomers, "Heredia"));
    localCustomer->display();

    localCustomer->next();
    localCustomer->display();

    return 0;
}
