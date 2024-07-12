#include "../include/and_gate.h"
#include "../include/gate.h"
#include "../include/pin.h"

ANDGate::ANDGate(const std::string& id):Gate{id,2}{}

void ANDGate::evaluate() {
    output->setSignal(inputs[0]->getSignal() && inputs[1]->getSignal());
}