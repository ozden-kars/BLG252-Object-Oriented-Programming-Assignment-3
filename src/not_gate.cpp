#include "../include/not_gate.h"
#include "../include/gate.h"
#include "../include/pin.h"

NOTGate::NOTGate(const std::string& id):Gate{id,1}{}

void NOTGate::evaluate() {
    output->setSignal(!(inputs[0]->getSignal()));
}