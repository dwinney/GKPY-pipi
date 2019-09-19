# GKPY_pipi
Simple implementation of elastic pion scattering phase-shifts and inelasticities from [[1]](https://journals.aps.org/prd/abstract/10.1103/PhysRevD.83.074004) for use in other code.

The amplitudes are accessed by the `pipi` class.

Define a isospin-definite elastic pion scattering amplitude with isopin, `I = 0, 1, 2`, with:
```
pipi my_amp(I);
```
and access the phase shifts, inelaticities, or partial wave amplitude of spin `j` at energy `s` with:
```
my_amp.phase_shift(j, s);
my_amp.inelasticity(j, s);
my_amp.partial_wave(j, s);
```

An example executable to print the above quantities for the P-wave amplitude can build with `cmake`:
```
mkdir build && cd build
cmake ..
make print_PW
./print_PW
```
