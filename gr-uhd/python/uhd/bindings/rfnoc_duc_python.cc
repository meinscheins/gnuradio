/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(rfnoc_duc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(6bb9196baeab5a898ddc96781051f881)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/uhd/rfnoc_duc.h>
// pydoc.h is automatically generated in the build directory
#include <rfnoc_duc_pydoc.h>

void bind_rfnoc_duc(py::module& m)
{

    using rfnoc_duc = ::gr::uhd::rfnoc_duc;


    py::class_<rfnoc_duc,
               gr::uhd::rfnoc_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<rfnoc_duc>>(m, "rfnoc_duc", D(rfnoc_duc))

        .def(py::init(&rfnoc_duc::make),
             py::arg("graph"),
             py::arg("block_args"),
             py::arg("device_select"),
             py::arg("instance"),
             D(rfnoc_duc, make))


        .def("set_freq",
             &rfnoc_duc::set_freq,
             py::arg("freq"),
             py::arg("chan"),
             py::arg("time") = 0.0,
             D(rfnoc_duc, set_freq))


        .def("set_input_rate",
             &rfnoc_duc::set_input_rate,
             py::arg("rate"),
             py::arg("chan"),
             D(rfnoc_duc, set_input_rate))

        .def("propagation",
             &rfnoc_duc::propagation,
             D(rfnoc_duc, propagation))

        ;
}
