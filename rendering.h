//
// Created by Kim on 26-09-2018.
//

#ifndef RENDERING_H
#define RENDERING_H

#include <mcomp/mcomp.h>

component(render_ctx_t, {
    char title[128];
    v2i size;
    bool full_screen;
    u8 swap_interval;
})

void use_rendering();

#endif
