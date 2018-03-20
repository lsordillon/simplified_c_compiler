#include "SyntaxModel/Else.h"
#include "utils.h"

namespace SyntaxModel {

    Else::Else(const std::vector<const Instruction*>& instructions)
        : _instructions(instructions)
    {
    }

    Else::~Else()
    {
        utils::delete_all(_instructions);
    }
}
