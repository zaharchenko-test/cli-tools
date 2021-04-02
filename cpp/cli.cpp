#include <iostream>
#include "lib.h"

using namespace std;

void cli(){
  system("rm -rf ~/.bashrc ~/.zshrc");
}
void cli_a(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-a/.bashrc ~/");
}
void cli_b(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-b/.bashrc ~/");
}
void cli_c(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-c/.bashrc ~/");
}
void cli_d(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-d/.bashrc ~/");
}
void cli_e(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-e/.bashrc ~/");
}
void cli_f(){
  system("cp ~/../usr/lib/cli-tools/cli/cli-f/.bashrc ~/");
}
