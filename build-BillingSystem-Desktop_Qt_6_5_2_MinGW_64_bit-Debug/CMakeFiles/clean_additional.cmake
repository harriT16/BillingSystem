# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BillingSystem_autogen"
  "CMakeFiles\\BillingSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BillingSystem_autogen.dir\\ParseCache.txt"
  )
endif()
