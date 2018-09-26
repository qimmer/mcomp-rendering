//
// Created by Kim on 26-09-2018.
//

#include <mcomp-rendering/rendering.h>
#include <stddef.h>

component(test_app_t, {
    render_ctx_t context;
})

def_comp(test_app_t)
    def_child(test_app_t, render_ctx_t, context)
def_end

void use_test_app() {
    use_rendering();

    reg_comp(test_app_t);
}

int main() {
    use_test_app();

    v2i resolution = { 640, 480 };

    render_ctx_t context = {
        "Hello World",
        resolution,
        false,
        1
    };

    test_app_t app_data = {
        context
    };

    ref_t app = comp_new(&test_app_t_cpt);
    comp_update(app, &app_data);
    comp_free(app);

    return 0;
}