#ifdef NO_TFT
#include "HardwareTFT.h"
#include "../../Attacks/Ducky/DuckyPayload.h"

namespace Devices
{
    HardwareTFT TFT;
}

void HardwareTFT::display(const int &x, const int &y, const std::string &str)
{
}

void HardwareTFT::clearScreen()
{
}

void HardwareTFT::powerOff()
{
}

void HardwareTFT::powerOn()
{
}

void HardwareTFT::displayPng(HardwareStorage &storage, const std::string &filename)
{
}

HardwareTFT::HardwareTFT()
{
}

void HardwareTFT::loop(Preferences &prefs)
{
}

void HardwareTFT::begin(Preferences &prefs)
{
    Attacks::Ducky.registerDynamicVariable([this]()
    {
        return std::pair("#_DISPLAY_WIDTH_", "0");
    });
    Attacks::Ducky.registerDynamicVariable([this]()
    {
        return std::pair("#_DISPLAY_HEIGHT_", "0");
    });
}
#endif