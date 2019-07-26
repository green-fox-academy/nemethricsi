#include <iostream>
#include "Device.h"
#include "USBDevice.h"
#include "NetworkDevice.h"
#include "WirelessAdapter.h"

int main(int argc, char *args[])
{
    WirelessAdapter adapter(0, 2, 100);
    adapter.info();

    return 0;
}