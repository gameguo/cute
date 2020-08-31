#include <stdio.h>
#include "IApplication.h"

using namespace Cute;

namespace Cute{
    extern IApplication* g_pApp;
}

int main(int argc, char** argv){
    int ret;
    
    if ((ret = g_pApp->Initialize()) != 0){
        printf("Cute Initialize failed! ");
        return ret;
    }

    printf("Cute Engine Start! ");

    while (!g_pApp->IsQuit()){
        g_pApp->Tick();
    }

    g_pApp->Finalize();
    
    return 0;
}
