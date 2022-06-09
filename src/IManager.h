//
// Created by Maikol Guzman Alan on 6/9/22.
//

#ifndef DP_STRUCTURAL_BRIDGE_IMANAGER_H
#define DP_STRUCTURAL_BRIDGE_IMANAGER_H
#include <ostream>
#include <iostream>
using namespace std;

/*
 * Implementor
 * defines the interface for implementation classes
 */
class IManager {
public:
    virtual void nextRecord() = 0;
    virtual void previousRecord() = 0;
    virtual void newRecord(string customer) = 0;
    virtual void deleteRecord(string customer) = 0;
    virtual void displayRecord() = 0;
    virtual void displayAllRecord() = 0;

    virtual ~IManager() = default;

};
#endif //DP_STRUCTURAL_BRIDGE_IMANAGER_H
