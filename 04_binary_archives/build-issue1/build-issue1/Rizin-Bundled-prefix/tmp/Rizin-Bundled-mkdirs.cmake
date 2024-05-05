# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/rizin"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src/Rizin-Bundled-build"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/tmp"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src/Rizin-Bundled-stamp"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src"
  "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src/Rizin-Bundled-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src/Rizin-Bundled-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-Bundled-prefix/src/Rizin-Bundled-stamp${cfgdir}") # cfgdir has leading slash
endif()
