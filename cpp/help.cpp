#include <iostream>

void version();

using namespace std;

void help() {
 string cmd = "kali, cli, help, version, banner,\
 cli, cli-a, cli-b, cli-c, cli-d, cli-e, cli-f,\
 install, install-mini, install-all, ndk,";

  version();

  cout << endl << "keys:" << endl << endl;
  cout << "    -h, --help, help" <<  endl;
  cout << "    -v, --version, version" <<  endl;
  cout << "    tools [ command ]" <<  endl << endl;

  cout << "current functions:" << endl << endl;

  cout << cmd << endl << endl;

}
