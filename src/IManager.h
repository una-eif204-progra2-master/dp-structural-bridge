//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_IMANAGER_H
#define DP_STRUCTURAL_BRIDGE_IMANAGER_H
#include <ostream>
#include <iostream>
using namespace std;

/*
 * Abstraction
 * defines the abstraction's interface
 */
class IManager {
public:
    virtual void next() = 0;

    virtual void previous() = 0;

    virtual void newObj(string customer) = 0;

    virtual void deleteObj(string customer) = 0;

    virtual void display() = 0;

    virtual void displayAll() = 0;

    virtual ~IManager() {}
};
#endif //DP_STRUCTURAL_BRIDGE_IMANAGER_H
