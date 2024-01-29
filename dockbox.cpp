#include <iostream>
using namespace std;

int main() {
	system("clear");
	int a, b, c, d, e, f;
	cout << "In order to run dockBox, you need to install docker, did you install docker?" << endl;
	cout << "1. Yes 2. No == ";
	cin >> b;
	if (b == 2) {
		system("clear");
		cout << "What distro you use?" << endl;
		cout << "1. Debian Based 2. Red Hat Based 3. Arch Based == ";
		cin >> c;
		if (c == 2) {
			system("sudo dnf install docker");
		}  
		if (c == 1) {
			system("sudo apt install docker");
		}
		if (c == 3) {
			system("sudo pacman -S docker");
		}
	}
	


	system("clear");
	cout << "Welcome to dockBox! - Simple tool to manage VM Containers" << endl;
	cout << "Choose a distro: Ubuntu 1. Fedora 2. Arch 3. ==  ";

	cin >> a;

	if (a == 1) {
		cout << "1. Run 2. Install == ";
		cin	>> d;
		if (d == 2) {
			system("clear");
			system("sudo docker pull ubuntu:latest");
			
			
		}
		if (d == 1) {
			system("clear");
			system("sudo docker run -ti --rm ubuntu /bin/bash");
		}
		
		
	}

	if (a == 2) {
		cout << "1. Run 2. Install == ";
		cin >> d;
		if (d == 2) {
		    system("clear");
			system("sudo docker pull fedora:latest");
		}
		if (d == 1) {
			system("clear");
			system("sudo docker run -ti --rm fedora /bin/bash");
		}
	}


	if (a == 3) {
		cout << "1. Run 2. Install == ";
		cin >> f;
		if (f == 2) {
			system("clear");
			system("sudo docker pull archlinux:latest");
		}
		if (f == 1) {
			system("clear");
			system("sudo docker run -ti --rm archlinux /bin/bash");
		}
	}
	
	return 0;
}
