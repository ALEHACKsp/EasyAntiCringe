extern "C" {
    __declspec(dllexport) int* __stdcall CreateGameClient(char* InterfaceVersion) {
        return reinterpret_cast<int*>(0x1); //Returns a GameClient instance I guess
    }
    
    __declspec(dllexport) void __stdcall GameClient_Initialize(int* Instance, void* OnProgress, void* OnFinished, int* CallbackParameter) {
        reinterpret_cast<void(*)(int, char*, int*)>(OnFinished)(0, nullptr, nullptr); //Call OnFinished callback with success status
    }
}

int __stdcall DllMain(void* hModule, unsigned long ul_reason_for_call, void* lpReserved) {
    return 1;
}