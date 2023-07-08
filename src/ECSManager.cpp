//
// Created by maz on 7/8/2023.
//

#include "ECSManager.h"

void ECSManager::addSystem(SystemPtr system) {
    systems.push_back(std::move(system));
}

void ECSManager::addComponent(Entity &entity, PositionComponent &component) {
//    TODO
}

void ECSManager::updateSystems() {
    // Update all registered systems
    for (auto &system: systems) {
        // Iterate over entities with relevant components and call system update
        for (auto &entity: entitiesWithPositionComponent) {
            PositionComponent &position = getPositionComponent(entity);
            system->update(entity, position);
        }
    }
}

void ECSManager::renderSystems() {
    // Render all registered systems
    for (auto &system: systems) {
        // Iterate over entities with relevant components and call system render
        for (auto &entity: entitiesWithPositionComponent) {
            PositionComponent &position = getPositionComponent(entity);
            system->render(entity, position);
        }
    }
}

PositionComponent & ECSManager::getPositionComponent(Entity &entity) {
    // Retrieve the position component associated with the entity
    // ...
}