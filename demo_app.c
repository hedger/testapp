#include <furi.h>

/* generated by fbt from .png files in images folder */
#include <demo_app_icons.h>

int32_t demo_app_app(void* p) {
    UNUSED(p);
    FURI_LOG_I("TEST", "Hello world");
    for(int i = 0; i < 10; i++) {
        FURI_LOG_I("TEST", "i = %d", i);
        furi_delay_ms(10000);
    }
    FURI_LOG_I("TEST", "I'm demo_app!");

    return 0;
}
