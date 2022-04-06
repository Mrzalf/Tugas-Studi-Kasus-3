#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main(){
	Input input;
	input.cetak();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.toFile();

	Output output;
	output.getData();
	output.cetak();

	return 0;
}