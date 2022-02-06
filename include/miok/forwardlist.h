//
// file: package.h
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef MIOK_FLIST_PACKAGE_H
#define MIOK_FLIST_PACKAGE_H

#ifdef __cplusplus
extern "C"
{
#endif

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_MIOK_FLIST_PACKAGE
#define MIOK_FLIST_PUBLIC __attribute__((visibility("default")))
#else
#define MIOK_FLIST_PUBLIC
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c23 standard. If you wish to use a version of this library
// that targets an older version of C append "-support" at the end of the
// package name and everything should just work.
//

typedef struct ForwardListOf ForwardListOf;

MIOK_FLIST_PUBLIC ForwardListOf *miok_forward_list_create(void);
MIOK_FLIST_PUBLIC void miok_forward_list_erase(ForwardListOf **structure_ref);
MIOK_FLIST_PUBLIC void miok_forward_list_push(ForwardListOf *structure_ptr, const char *data);
MIOK_FLIST_PUBLIC char *miok_forward_list_pop(ForwardListOf *structure_ptr);
MIOK_FLIST_PUBLIC char *miok_forward_list_peek(ForwardListOf *structure_ptr);
MIOK_FLIST_PUBLIC unsigned int miok_forward_list_its_empty(ForwardListOf *structure_ptr);
MIOK_FLIST_PUBLIC unsigned int miok_forward_list_not_empty(ForwardListOf *structure_ptr);

#ifdef __cplusplus
}
#endif

#endif // end of MIOK_PACKAGE_H
