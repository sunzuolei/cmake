FILE(REMOVE_RECURSE
  "CMakeFiles/hello.dir/hello.c.o"
  "../lib/libhello.pdb"
  "../lib/libhello.so"
  "../lib/libhello.so.1.2"
  "../lib/libhello.so.1"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/hello.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
