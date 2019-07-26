#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"


NetworkDevice::NetworkDevice(int id, int bandwidth) : Device(id), _bandwidth(bandwidth)
{
    std::cout << "NetworkDevice constructor" << std::endl;
}
