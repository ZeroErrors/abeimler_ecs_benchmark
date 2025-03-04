#ifndef ECS_BENCHMARKS_GINSENG_APPLICATION_H_
#define ECS_BENCHMARKS_GINSENG_APPLICATION_H_

#include "base/Application.h"
#include "systems/DataSystem.h"
#include "systems/MoreComplexSystem.h"
#include "systems/MovementSystem.h"
#include <ginseng/ginseng.hpp>

namespace ecs::benchmarks::ginseng {
class GinsengApplication final
    : public ecs::benchmarks::base::Application<::ginseng::database, float, systems::MovementSystem,
                                                systems::DataSystem, systems::MoreComplexSystem, systems::HealthSystem,
                                                systems::DamageSystem> {
public:
  GinsengApplication() = default;

  explicit GinsengApplication(bool add_more_complex_system) : Application(add_more_complex_system) {}

  ~GinsengApplication() = default;

  GinsengApplication(const GinsengApplication&) = delete;

  GinsengApplication& operator=(const GinsengApplication&) = delete;

  GinsengApplication(GinsengApplication&&) = default;

  GinsengApplication& operator=(GinsengApplication&&) = default;
};
} // namespace ecs::benchmarks::ginseng

#endif // ECS_BENCHMARKS_GINSENG_APPLICATION_H_
