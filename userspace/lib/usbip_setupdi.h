#pragma

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <setupapi.h>

typedef unsigned char	devno_t;

typedef int (*walkfunc_t)(HDEVINFO dev_info, PSP_DEVINFO_DATA pdev_info_data, devno_t devno, void *ctx);

int traverse_usbdevs(walkfunc_t walker, BOOL present_only, void *ctx);

char *get_id_hw(HDEVINFO dev_info, PSP_DEVINFO_DATA pdev_info_data);
char *get_upper_filters(HDEVINFO dev_info, PSP_DEVINFO_DATA pdev_info_data);
char *get_id_inst(HDEVINFO dev_info, PSP_DEVINFO_DATA pdev_info_data);