#include "cosmotyl.h"
#include "print.h"

 void pointing_device_init_user(void) {
    pointing_device_set_cpi(PMW33XX_CPI);
    pmw33xx_init(0);         // index 1 is the second device.
    pmw33xx_set_cpi(0, PMW33XX_CPI); // applies to first sensor
}

report_mouse_t pointing_device_task_user(report_mouse_t report) {
    //int cpi = pointing_device_get_cpi();
    //uprintf("cpi is %d\n", cpi);

    //This is a hack of the gods, I don't know what's overriding the cpi
    pmw33xx_set_cpi(0, PMW33XX_CPI);
    return report;
}
