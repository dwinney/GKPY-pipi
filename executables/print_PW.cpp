#include "pipi.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>

using std::cout;
using std::endl;
using std::setw;

int main()
{
  // Define an I = 1 pipi object
  pipi iso_one(1);

  // File to save to
  std::ofstream outphase, outamp;
  outphase.open("p_wave_phase.dat");
  outamp.open("p_wave_PW.dat");

  for (int i = 0; i <= 100; i++)
  {
    double s = (sthPi + EPS) + double(i) * (1. - sthPi - EPS) / 100;

    // Print the phase shifts and inelasticites for p-wave
    outphase << std::left << setw(20) << s;
    outphase << setw(20) << iso_one.phase_shift(1, s);
    outphase << setw(20) << iso_one.inelasticity(1, s) << endl;

    // Print the p wave amplitude
    outamp << std::left << setw(20) << s;
    outamp << setw(25) << iso_one.partial_wave(1, s) << endl;
  }

  outamp.close(); outphase.close();
}
