#pragma once

#include "ControllerHelpers.h"
#include "SwitchVirtualGamepadHandler.h"

namespace syscon::handler
{
    bool IsAtControllerLimit();

    Result Insert(std::unique_ptr<IController> &&controllerPtr);
    std::vector<std::unique_ptr<SwitchVirtualGamepadHandler>>& Get();

    //void Remove(void Remove(bool (*func)(std::unique_ptr<SwitchVirtualGamepadHandler> a)));;

    void Initialize();
    void Reset();
    void Exit();
}