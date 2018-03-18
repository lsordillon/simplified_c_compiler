#pragma once
#include <string>

namespace SyntaxModel {

    class Identificateur final {
    public:
        Identificateur(const std::string& name);

    private:
        const std::string _name;
    };
}
