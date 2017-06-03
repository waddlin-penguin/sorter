/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   visualizer.h
 * Author: jonathan
 *
 * Created on June 3, 2017, 3:38 PM
 */

#include <vector>

#ifndef VISUALIZER_H
#define VISUALIZER_H

class Visualizer {
public:
    Visualizer();
    Visualizer(const Visualizer& orig);
    virtual ~Visualizer();
    void drawFrame(std::vector<int> elements);
private:

};

#endif /* VISUALIZER_H */

