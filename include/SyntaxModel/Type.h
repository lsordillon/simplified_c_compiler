#pragma once

#include "AtomicType.h"

namespace SyntaxModel {
  class Type final : public AtomicType {
    public:
      Type();
      virtual ~Type() = default;
  };
}