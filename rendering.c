//
// Created by Kim on 26-09-2018.
//

#include "rendering.h"
#include <stddef.h>

def_comp(render_ctx_t)
    def_field(render_ctx_t, string, title)
    def_field(render_ctx_t, v2i, size)
    def_field(render_ctx_t, bool, full_screen)
    def_field(render_ctx_t, string, swap_interval)
def_end

void use_rendering() {
    use_component();

    reg_comp(render_ctx_t);
}
