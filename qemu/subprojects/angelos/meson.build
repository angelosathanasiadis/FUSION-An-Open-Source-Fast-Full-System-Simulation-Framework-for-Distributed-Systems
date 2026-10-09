project('angelos', 'cpp')
inc = include_directories('include')
src = files('src/angelos.cpp')

# build a .so
libangelos = shared_library(
  'angelos', src,
  include_directories: inc,
  install: false,         # no system install
  pic: true,
)
# export a dependency object
angelos_dep = declare_dependency(
  link_with: libangelos,
  include_directories: inc,
)
