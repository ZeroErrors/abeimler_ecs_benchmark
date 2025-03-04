#ifndef ECS_BENCHMARKS_ENTITYX_MORECOMPLEXSYSTEM_H_
#define ECS_BENCHMARKS_ENTITYX_MORECOMPLEXSYSTEM_H_

#include "base/systems/HeroMonsterSystems.h"
#include "base/systems/MoreComplexSystem.h"
#include <entityx/entityx.h>

namespace ecs::benchmarks::entityx::systems {

class MoreComplexSystem final : public ::entityx::System<MoreComplexSystem>,
                                ecs::benchmarks::base::systems::MoreComplexSystem<::entityx::EntityManager, float> {
public:
  using EventManager = ::entityx::EventManager;

  void update(EntityManager& entities, EventManager& events, TimeDelta dt) override;

  void update(EntityManager& entities, TimeDelta dt) override;
};

class HealthSystem final : public ::entityx::System<MoreComplexSystem>,
                           ecs::benchmarks::base::systems::HealthSystem<::entityx::EntityManager, float> {
public:
  using EventManager = ::entityx::EventManager;

  void update(EntityManager& entities, EventManager& events, TimeDelta dt) override;

  void update(EntityManager& entities, TimeDelta dt) override;
};

class DamageSystem final : public ::entityx::System<MoreComplexSystem>,
                           ecs::benchmarks::base::systems::DamageSystem<::entityx::EntityManager, float> {
public:
  using EventManager = ::entityx::EventManager;

  void update(EntityManager& entities, EventManager& events, TimeDelta dt) override;

  void update(EntityManager& entities, TimeDelta dt) override;
};

} // namespace ecs::benchmarks::entityx::systems

#endif