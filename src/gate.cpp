#include "../include/gate.h"
#include "../include/pin.h" // Include the header file for the Pin class

Gate::Gate(const std::string& id, int numberOfInputs=2): Component{id}{
    for (int i=0; i< numberOfInputs;i++){
        Pin* new_input_pin = new Pin("input"+ (i+1) );
        inputs.push_back(new_input_pin);
    }
    Pin* new_output_pin = new Pin("output");
    output = new_output_pin;
}
Gate::~Gate(){
    for (int i=0; i< static_cast<int> (inputs.size());i++){
        delete inputs[i];
    }
    delete output;
}

Pin* Gate::getOutputPin(){
    return output;
}

Pin* Gate::getInputPin(int i){
    return inputs[i];
}
