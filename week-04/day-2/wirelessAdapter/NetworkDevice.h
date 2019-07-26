#ifndef WIRELESSADAPTER_NETWORKDEVICE_H
#define WIRELESSADAPTER_NETWORKDEVICE_H


class NetworkDevice : virtual public Device
{
public:
    NetworkDevice(int id, int bandwidth);

protected:
    int _bandwidth;
};


#endif //WIRELESSADAPTER_NETWORKDEVICE_H
