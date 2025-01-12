/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(decoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(cbb67b408431fa0272f9cd6095801212)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/decoder.h>
// pydoc.h is automatically generated in the build directory
#include <decoder_pydoc.h>

void bind_decoder(py::module& m)
{

    using decoder = ::gr::fec::decoder;


    py::class_<decoder, gr::block, gr::basic_block, std::shared_ptr<decoder>>(
        m, "decoder", D(decoder))

        .def(py::init(&decoder::make),
             py::arg("my_decoder"),
             py::arg("input_item_size"),
             py::arg("output_item_size"),
             D(decoder, make))


        .def("general_work",
             &decoder::general_work,
             py::arg("noutput_items"),
             py::arg("ninput_items"),
             py::arg("input_items"),
             py::arg("output_items"),
             D(decoder, general_work))


        .def("fixed_rate_ninput_to_noutput",
             &decoder::fixed_rate_ninput_to_noutput,
             py::arg("ninput"),
             D(decoder, fixed_rate_ninput_to_noutput))


        .def("fixed_rate_noutput_to_ninput",
             &decoder::fixed_rate_noutput_to_ninput,
             py::arg("noutput"),
             D(decoder, fixed_rate_noutput_to_ninput))

        ;
}
