// Part of ImGui Bundle - MIT License - Copyright (c) 2022-2024 Pascal Thomet - https://github.com/pthom/imgui_bundle
#include <array>   // std::array
#include <memory>  // std::make_unique

#include <nanobind/ndarray.h>
#include <nanobind/nanobind.h>
#include <nanobind/make_iterator.h>

#include <nanobind/stl/tuple.h>
#include <nanobind/stl/string.h>
#include <nanobind/stl/optional.h>

#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_pywrappers.h"
#include "misc/cpp/imgui_stdlib.h"

using uint = unsigned int;
using uchar = unsigned char;

namespace py = nanobind;


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// <litgen_glue_code>  // Autogenerated code below! Do not edit!

// </litgen_glue_code> // Autogenerated code end
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


void py_init_module_imgui_main(py::module_& m) {

    ///////////////////////////////////////////////////////////////////////////
    // Manual patches for elements whose signature is too esoteric
    // and cannot be automatically bound
    ///////////////////////////////////////////////////////////////////////////

    // FLT_MIN & FLT_MAX
    m.attr("FLT_MIN") = (float) FLT_MIN;
    m.attr("FLT_MAX") = (float) FLT_MAX;


    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // <litgen_pydef>  // Autogenerated code below! Do not edit!

    // </litgen_pydef> // Autogenerated code end
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

}
