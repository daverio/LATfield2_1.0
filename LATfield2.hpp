#ifndef LATFIELD2_HPP
#define LATFIELD2_HPP

/*! \file LATfield2.hpp
 \brief LATfield2 header
 \author David Daverio,Neil Bevis
 
 */ 

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>


#ifdef FFT3D
#include "fftw3.h"
#endif


using namespace std;






#ifdef EXTERNAL_IO
#include "LATfield2_IO_server.hpp"
IOserver IO_Server;
#endif

#include "LATfield2_parallel2d.hpp"
Parallel2d parallel;


//IOserver Io_Server;
#include "LATfield2_SettingsFile.hpp"


#ifdef HDF5
#include "hdf5.h"
#ifdef H5_HAVE_PIXIE
#include "LATfield2_save_hdf5_pixie.h"
#else
#include "LATfield2_save_hdf5.h"
#endif
#endif





namespace LATfield2
{
    #include "int2string.hpp"
    #include "Imag.hpp"
	#include "LATfield2_Lattice.hpp"
	#include "LATfield2_Site.hpp"
	#include "LATfield2_Field.hpp"
	#ifdef FFT3D
	#include "LATfield2_PlanFFT.hpp"
	#endif
}

#endif


