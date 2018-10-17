find_package(GMP)
find_package(MPIR)

if(GMP_FOUND)
    set(GR_MPLIB_GMP True)
    set(MPLIB_DEFINITIONS "-DGR_MPLIB_GMP" ${GMP_DEFINITIONS})
    set(MPLIB_INCLUDE_DIR ${GMP_INCLUDE_DIR})
    set(MPLIB_LIBRARY ${GMP_LIBRARY})
    set(MPLIBXX_LIBRARY ${GMPXX_LIBRARY})
    set(MPLIB_PC_ADD_CFLAGS ${GMP_PC_ADD_CFLAGS})
    set(MPLIB_PC_ADD_LIBS ${GMP_PC_ADD_LIBS})
else(GMP_FOUND)
    set(GR_MPLIB_MPIR True)
    set(MPLIB_DEFINITIONS "-DGR_MPLIB_MPIR" ${MPIR_DEFINITIONS})
    set(MPLIB_INCLUDE_DIR ${MPIR_INCLUDE_DIR})
    set(MPLIB_LIBRARY ${MPIR_LIBRARY})
    set(MPLIBXX_LIBRARY ${MPIRXX_LIBRARY})
    set(MPLIB_PC_ADD_CFLAGS ${MPIR_PC_ADD_CFLAGS})
    set(MPLIB_PC_ADD_LIBS ${MPIR_PC_ADD_LIBS})
endif(GMP_FOUND)

set(MPLIB_INCLUDE_DIRS ${MPLIB_INCLUDE_DIR})
set(MPLIB_LIBRARIES ${MPLIBXX_LIBRARY} ${MPLIB_LIBRARY})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(MPLIB DEFAULT_MSG MPLIBXX_LIBRARY MPLIB_LIBRARY MPLIB_INCLUDE_DIR)
mark_as_advanced(MPLIBXX_LIBRARY MPLIB_LIBRARY MPLIB_INCLUDE_DIR)