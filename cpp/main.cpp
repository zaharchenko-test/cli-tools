#include <iostream>
#include "lib.h"

using namespace std;

int main(int argc, char *argv[]){
  for(int i=0;i<argc;i++){
  string a = (argv[i]);

  if( argc < 2 ) { help(); }

  if( a == "help" | a == "-h" | a == "--help" && i == 1 ) { help(); }
  if( a == "version" | a == "-v" | a == "--version" && i == 1 ) { version(); }

  if( a == "kali" && i == 1 ) { kali(); }

  if( a == "cli" && i == 1 ) { cli(); }
  if( a == "cli-a" && i == 1 ) { cli_a(); }
  if( a == "cli-b" && i == 1 ) { cli_b(); }
  if( a == "cli-c" && i == 1 ) { cli_c(); }
  if( a == "cli-d" && i == 1 ) { cli_d(); }
  if( a == "cli-e" && i == 1 ) { cli_e(); }
  if( a == "cli-f" && i == 1 ) { cli_f(); }

  if( a == "banner" && i == 1 ) { banner(); }

  if( a == "install-mini" && i == 1 ) { install_mini(); }
  if( a == "install" && i == 1 ) { install(); }
  if( a == "install-all" && i == 1 ) { install_all(); }

  if( a == "ndk" && i == 1 ) { ndk(); }


  }
}
