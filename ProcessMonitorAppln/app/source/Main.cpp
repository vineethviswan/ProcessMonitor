/* ---------------------------------------------------------------------------------
 * Process Monitor
 * Started  : 05-Apr-2026
 * Finished : 
 * ---------------------------------------------------------------------------------*/

#include <imgui.h>

#include "Logger.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"

int main ()
{
    Logger::Log (Logger::Level::INFO, "Process Monitor!!!");
   
    return 0;
}
