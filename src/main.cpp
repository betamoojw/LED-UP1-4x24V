#include "OpenKNX.h"
#include "Logic.h"
// #include "BinaryInputModule.h" // ToDo: Implement BinaryInputModule
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"



void setup()
{
    const uint8_t firmwareRevision = 0;
    openknx.init(firmwareRevision);

    openknx.addModule(3, openknxVirtualButtonModule);
    openknx.addModule(1, openknxLogic);
    openknx.addModule(9, openknxFileTransferModule);
    openknx.setup();
}

void loop()
{
    openknx.loop();
}