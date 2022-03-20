#ifndef IMGUI_IMGUI_FORK_H_
#define IMGUI_IMGUI_FORK_H_

#include "imgui.h"

namespace ImGui
{

/**
 * Is current window active and visible?
 * ((window->Active) && (!window->Hidden))
 */
IMGUI_API bool IsWindowActiveAndVisible();

}  // namespace ImGui

#endif  // IMGUI_IMGUI_FORK_H_
