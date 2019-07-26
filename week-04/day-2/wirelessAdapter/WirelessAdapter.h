#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H


class WirelessAdapter : public USBDevice, public NetworkDevice
{
public:

    WirelessAdapter(int id, int usbType, int bandwidth);

    void info();
};


#endif //WIRELESSADAPTER_WIRELESSADAPTER_H
