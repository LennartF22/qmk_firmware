#include "quantum.h"

void keyboard_pre_init_kb(void) {
#ifdef LED_WIN_LOCK_PIN
    setPinOutput(LED_WIN_LOCK_PIN);
    writePin(LED_WIN_LOCK_PIN, !LED_PIN_ON_STATE);
#endif
#ifdef LED_MACRO_PIN
    setPinOutput(LED_MACRO_PIN);
    writePin(LED_MACRO_PIN, !LED_PIN_ON_STATE);
#endif
}
