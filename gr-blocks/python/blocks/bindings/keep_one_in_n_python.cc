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

#include <gnuradio/blocks/keep_one_in_n.h>

void bind_keep_one_in_n(py::module& m)
{
    using keep_one_in_n    = gr::blocks::keep_one_in_n;


    py::class_<keep_one_in_n,gr::block,
        std::shared_ptr<keep_one_in_n>>(m, "keep_one_in_n")

        .def(py::init(&keep_one_in_n::make),
           py::arg("itemsize"), 
           py::arg("n") 
        )
        

        .def("set_n",&keep_one_in_n::set_n,
            py::arg("n") 
        )
        .def("to_basic_block",[](std::shared_ptr<keep_one_in_n> p){
            return p->to_basic_block();
        })
        ;


} 