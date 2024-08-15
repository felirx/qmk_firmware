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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
