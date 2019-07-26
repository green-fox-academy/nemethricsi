#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"


Device::Device(int id) : _id(id)
{
    std::cout << "Device constructor" << std::endl;
}

int Device::getId() const
{
    return _id;
}
