#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"


WirelessAdapter::WirelessAdapter(int id, int usbType, int bandwidth) : Device(id), USBDevice(id, usbType),
                                                                       NetworkDevice(id, bandwidth)
{}

void WirelessAdapter::info()
{
    std::cout << "ID: " << _id << std::endl;
    std::cout << "USB Type: " << _usbType << std::endl;
    std::cout << "Bandwidth: " << _bandwidth << std::endl;
}
