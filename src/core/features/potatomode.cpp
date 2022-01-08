#include "features.hpp"

void Features::PotatoMode::createMove()
{
    static auto mat_picmip = Interfaces::convar->FindVar("mat_picmip");
    static int ogVal;
    static bool doneOnce;
    if (!doneOnce) {
        ogVal = mat_picmip->GetInt();
        mat_picmip->fnChangeCallback = 0;
        doneOnce = true;
    }
    mat_picmip->SetValue(CONFIGBOOL("Misc>Misc>Misc>Potato Mode") ? CONFIGINT("Misc>Misc>Misc>Potato Amount") : ogVal);
}