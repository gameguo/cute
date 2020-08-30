#pragma once

#include "IApplication.h"

namespace Cute
{
    class BaseApplication : implements IApplication
    {
public:
        virtual int Initialize();
        virtual void Finalize();
        // One cycle of the main loop
        virtual void Tick();

        virtual bool IsQuit();

protected:
        // Flag if need quit the main loop of the application
        bool m_bQuit;
    };
}