#include <Windows.h>

void initialize() {

}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(initialize), nullptr, 0, nullptr);
    }

    return TRUE;
}

