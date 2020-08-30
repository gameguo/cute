#include "BaseApplication.h"

// Parse command line, read configuration, initialize all sub modules
int Cute::BaseApplication::Initialize()
{
    m_bQuit = false;
    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files.
void Cute::BaseApplication::Finalize()
{

}

// One cycle of the main loop
void Cute::BaseApplication::Tick()
{

}

bool Cute::BaseApplication::IsQuit()
{
    return m_bQuit;
}
