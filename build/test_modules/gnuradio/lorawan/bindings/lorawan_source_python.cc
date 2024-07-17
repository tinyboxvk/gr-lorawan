/*
 * Copyright 2024 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(lorawan_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(ba9abb5a098b8dbeb31355a32d21ee2d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lorawan/lorawan_source.h>
// pydoc.h is automatically generated in the build directory
#include <lorawan_source_pydoc.h>

void bind_lorawan_source(py::module& m)
{

    using lorawan_source    = gr::lorawan::lorawan_source;


    py::class_<lorawan_source, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<lorawan_source>>(m, "lorawan_source", D(lorawan_source))

        .def(py::init(&lorawan_source::make),
           D(lorawan_source,make)
        )
        



        ;




}







