# GKPY_pipi
Simple implementation of elastic pion scattering phase-shifts and inelasticities from [[1]](https://journals.aps.org/prd/abstract/10.1103/PhysRevD.83.074004) for use in other code.

The amplitudes are accessed by the `pipi` class.

Define a isospin-definite elastic pion scattering amplitude with isopin, `int I = 0, 1, 2`, with:
```
pipi my_amp(I);
```
and access the phase shifts, inelaticities, or partial wave amplitude of spin `int j` at energy `double s < 1.4 GeV` with:
```
my_amp.phase_shift(j, s);
my_amp.inelasticity(j, s);
my_amp.partial_wave(j, s);
```

An example executable to print the above quantities for the P-wave amplitude can be built with `cmake` and run using:
```
mkdir build && cd build
cmake ..
make print_PW
./print_PW
```

The additional `omnes` class inherits from the above and can be used to access the Omnes function of isospin `int I` and spin `int j`, as well as smoothly extrapolating the phase shifts to infinity
```
omnes my_omnes(I, j);

my_omnes.extrap_phase(s); // Extrapolated phase shift valid for all real s > threshold
my_omnes.eval(s, +1); // Evaluate the omnes function with +iepsilon perscription
```
