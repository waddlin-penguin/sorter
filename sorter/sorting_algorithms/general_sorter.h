/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   general_sorter.h
 * Author: jonathan
 *
 * Created on June 3, 2017, 3:35 PM
 */

#include <vector>

#ifndef GENERAL_SORTER_H
#define GENERAL_SORTER_H

class GeneralSorter {
public:
    GeneralSorter();
    GeneralSorter(const GeneralSorter& orig);
    virtual ~GeneralSorter();
    virtual void stepSolve() = 0;
    virtual std::vector<int> snapshot() = 0;
private:
    std::vector<int> elements;
};

#endif /* GENERAL_SORTER_H */

