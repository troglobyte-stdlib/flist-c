miok_flist_lib = static_library('miok-flist-c',
    'package.c',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

miok_flist_dep = declare_dependency(
    link_with: miok_flist_lib,
    include_directories: inc_dir)
