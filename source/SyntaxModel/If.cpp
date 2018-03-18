#include "SyntaxModel/If.h"

namespace SyntaxModel {

    If::If(const Expression* condition, const std::vector<const Instruction*>& instructions, const Else* else_clause)
        : Structure(condition, instructions)
        , _else_clause(else_clause)
    {
    }

    If::~If()
    {
        delete _else_clause;
    }
}
