#include "object3d.h"

Object3D::Object3D(std::vector<Vector3> state0, std::vector<Plane> &colliders, FileLogger &logger):
    state{state0}, statePrev{state0}, state0{state0}, colliders{colliders}, logger{logger} {}

void Object3D::reset() {
    state = state0;
    statePrev = state0;
}
