#include <iostream>
#include "lib.h"

using namespace std;

void install() {
  system("apt update && apt upgrade && apt install clang git ndk-multilibs");
}
void install_mini() {
  system("apt update && apt upgrade && apt install zsh figlet file make");
}
void install_all() {
  install_mini();
  install();
}
