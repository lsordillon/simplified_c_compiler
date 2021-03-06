#pragma once
#include "SyntaxModel/Else.h"
#include "SyntaxModel/Structure.h"

using namespace std;

namespace SyntaxModel {
    struct If final : public Structure {
        If(const Expression* condition, const std::vector<const Instruction*>& instructions, const Else* else_clause);
        virtual ~If();

        const Else* else_clause;
    };
}
