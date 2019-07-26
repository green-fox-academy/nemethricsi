#ifndef WIRELESSADAPTER_USBDEVICE_H
#define WIRELESSADAPTER_USBDEVICE_H


class USBDevice : virtual public Device
{
public:
    USBDevice(int id, int usbType);

protected:
    int _usbType;

};


#endif //WIRELESSADAPTER_USBDEVICE_H
