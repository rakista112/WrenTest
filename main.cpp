#include <iostream>
#include "wren.hpp"

void writeFn(WrenVM* vm, const char* text) {
  std::cout << text << std::endl;
}

int main(int, char**) {


    WrenConfiguration config;
    wrenInitConfiguration(&config);
    config.writeFn = &writeFn;
    WrenVM *vm = wrenNewVM(&config);
    WrenInterpretResult result = wrenInterpret(
    vm,
    "my_module",
    "System.print(\"I am running in a VM!\")");
    wrenFreeVM(vm);

}
