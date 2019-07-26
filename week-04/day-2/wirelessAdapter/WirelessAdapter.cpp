#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"


WirelessAdapter::WirelessAdapter(int id, int usbType, int bandwidth) : Device(id), USBDevice(usbType), NetworkDevice(bandwidth)
{
    std::cout << "WirelessAdapter constructor" << std::endl;
}

void WirelessAdapter::info()
{

}
