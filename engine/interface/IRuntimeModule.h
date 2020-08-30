#pragma once

#include "Interface.h"

namespace Cute
{
    Interface IRuntimeModule
    {
public:
        // 析构
        virtual ~IRuntimeModule() {};
        
        // 初始化模块
        virtual int Initialize() = 0;
        // 模块结束
        virtual void Finalize() = 0;
        // 模块执行
        virtual void Tick() = 0;
    };
}