// Self-contained implementation of the GKPY paramterization for low-energy pion scattering.
// Based on: 10.1103/PhysRevD.83.074004
//
// Dependencies: constants.hpp
//
// Author:       Daniel Winney (2018)
// Affiliation:  Joint Physics Analysis Center (JPAC)
// Email:        dwinney@iu.edu
// ---------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Define an pipi object with a specified isospin:
// pipi my_pipi_amp(isospin);
//
// Evaluate the GKPY partial wave amplitude with spin j (as a complex number) at some s:
// my_pipi_amp.partial_wave(j, s);
// -----------------------------------------------------------------------------

#ifndef _PIPI_
#define _PIPI_

#include "constants.hpp"

#include <complex>
#include <iostream>
#include <stdlib.h>
#include <cmath>

class pipi
{
//-----------------------------------------------------------------------------
protected:
int pipi_qn_I;

double conformal(double s, double s0);
double elastic_mom( double s, double sth);
double legendre(int l, double x);
//-----------------------------------------------------------------------------
public:
// Constructors
pipi();
pipi(int i);

pipi(const pipi & prev)
 : pipi_qn_I(prev.pipi_qn_I)
{};

void print_I();

double phase_shift(int l, double s);
double inelasticity(int l, double s);

std::complex<double> partial_wave(int l, double s);
std::complex<double> iso_amp(double s, double z);
};
//-----------------------------------------------------------------------------
#endif
