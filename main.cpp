#include <mod/amlmod.h>

MYMOD(net.rusjj.fixradar, GTA:SA Fix Radar, 1.0, RusJJ)

extern "C" void OnModLoad()
{
    uintptr_t pGTASA = aml->GetLib("libGTASA.so");
    if(pGTASA <= 0) return;

    aml->Unprot(pGTASA + 0x437ABC, 0x43801C - 0x437ABC);

    if(*(char*)(pGTASA + 0x437ED4) != 0) return;
    
    *(char*)(pGTASA + 0x437ED4) = 0xFF;
    *(char*)(pGTASA + 0x437ED6) = 0xFF;
    *(char*)(pGTASA + 0x437EE2) = 0xFF;

    *(char*)(pGTASA + 0x437F1E) = 0xFF;
    *(char*)(pGTASA + 0x437F20) = 0xFF;
    *(char*)(pGTASA + 0x437F24) = 0xFF;

    *(char*)(pGTASA + 0x437F4E) = 0xFF;
    *(char*)(pGTASA + 0x437F50) = 0xFF;
    *(char*)(pGTASA + 0x437F54) = 0xFF;

    *(char*)(pGTASA + 0x437F7A) = 0xFF;
    *(char*)(pGTASA + 0x437F7C) = 0xFF;
    *(char*)(pGTASA + 0x437F7E) = 0xFF;
}