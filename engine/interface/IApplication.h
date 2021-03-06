#pragma once

#include "Interface.h"
#include "IRuntimeModule.h"

namespace Cute {
    _Interface_ IApplication : _inherits_ IRuntimeModule {
public:
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        // One cycle of the main loop
        virtual void Tick() = 0;

        virtual bool IsQuit() = 0;
    };
}
