#include "../include/circuit.h"

Circuit::~Circuit(){
    for(int i = 0; i < static_cast<int> (components.size()); i++){
        delete components[i];
    }
    for(int i = 0; i< static_cast<int> (wires.size()); i++){
        delete wires[i];
    }

}

void Circuit::addComponent(Component* comp){
    components.push_back(comp);
}

void Circuit::addWire(Wire* wire){
     wires.push_back(wire);
}

void Circuit::simulate(){

    for(int i = 0; i< static_cast<int> (components.size()); i++){
        for (int j = 0; j < static_cast<int> (wires.size());j++){
            wires[j]->propagateSignal();
        }
        components[i]->evaluate();
    }

    for (int j = 0; j < static_cast<int> (wires.size()) ;j++){
            wires[j]->propagateSignal();
        }

}