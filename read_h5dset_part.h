#ifndef _READ_H5DSET_PART_H_
#define _READ_H5DSET_PART_H_


#include <hdf5.h>


int read_h5dset_part(hid_t, char*, hsize_t*, hsize_t*, hid_t, void*);


#endif /* _READ_H5DSET_PART_H_ */
