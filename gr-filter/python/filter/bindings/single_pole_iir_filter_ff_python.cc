/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/single_pole_iir_filter_ff.h>

void bind_single_pole_iir_filter_ff(py::module& m)
{
    using single_pole_iir_filter_ff    = gr::filter::single_pole_iir_filter_ff;


    py::class_<single_pole_iir_filter_ff,gr::sync_block,
        std::shared_ptr<single_pole_iir_filter_ff>>(m, "single_pole_iir_filter_ff")

        .def(py::init(&single_pole_iir_filter_ff::make),
           py::arg("alpha"), 
           py::arg("vlen") = 1 
        )
        

        .def("set_taps",&single_pole_iir_filter_ff::set_taps,
            py::arg("alpha") 
        )
        .def("to_basic_block",[](std::shared_ptr<single_pole_iir_filter_ff> p){
            return p->to_basic_block();
        })
        ;


} 