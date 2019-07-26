#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"


USBDevice::USBDevice(int id, int usbType) : Device(id), _usbType(usbType)
{
    std::cout << "USBDevice constructor" << std::endl;
}
