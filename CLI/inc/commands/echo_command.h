#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "result.h"
#include "commands/command.h"
#include "commands/execution_result.h"

namespace NCLI::NCommand {

    class EchoCommand : public Command {
    public:
        EchoCommand(const std::string& text) : text_(text) {};
        virtual ExecutionResult execute(std::istream& is, std::ostream& os) override;

        static Result<std::shared_ptr<Command>, std::string> create_command(std::vector<std::string> args);
    private:
        std::string text_;
    };

} // namespace NCLI::NCommand
