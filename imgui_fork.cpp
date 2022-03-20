#include "imgui_fork.h"
#include "imgui_internal.h"

static bool IsWindowActiveAndVisible(ImGuiWindow* window)
{
    return (window->Active) && (!window->Hidden);
}

bool ImGui::IsWindowActiveAndVisible()
{
    ImGuiWindow* window = GetCurrentWindowRead();
    return IsWindowActiveAndVisible(window);
}
