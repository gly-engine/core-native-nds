#include "zeebo.h"

/**
 * @todo remove
 */
#include <nds.h>

#define FPS_DELTA (16u)

void runtime(lua_State* L)
{
    lua_getglobal(L, "native_callback_loop");
    int native_callback_loop = luaL_ref(L, LUA_REGISTRYINDEX);

    lua_getglobal(L, "native_callback_draw");
    int native_callback_draw = luaL_ref(L, LUA_REGISTRYINDEX);
    
    lua_getglobal(L, "native_callback_keyboard");
    int native_callback_keyboard = luaL_ref(L, LUA_REGISTRYINDEX);

    static uint8_t page = 0;
    static uint8_t frameskip = 0;
    
    while (1) {
        keys_callback_update(L, native_callback_keyboard);
        loop_callback_update(L, native_callback_loop, FPS_DELTA);
        draw_queue_page(page++);
        draw_callback_update(L, native_callback_draw);
        draw_cmd_mode(0, 1, 0, 1);
        draw_queue_burn(page++);
        draw_cmd_mode(0, 0, 0, 1);
        draw_queue_burn(page++);
        swiWaitForVBlank();
    }
}
