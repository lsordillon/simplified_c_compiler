#pragma once

#include "Identificateur.h"
#include "Instruction.h"
#include "AtomicType.h"

namespace SyntaxModel {

    class Declaration final : public Instruction {
    public:
        Declaration(const Identifier& id);
        virtual ~Declaration() = default;

    private:
        Identificateur _nom;
        AtomicType _type;
    };
}
