extern struct_1 default_quoting_options;
extern struct_1 g_413250;
extern struct_1 g_413260;
extern struct_0 g_413270;

int quotearg_char_mem()
{
    BOT v0;  // [bp-0x48]
    BOT v1;  // [bp-0x38]
    BOT v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v6;  // rdx

    v0 = default_quoting_options;
    v3 = g_413270;
    v1 = g_413250;
    v2 = g_413260;
    *(&stack_base-72 + v6 % 32 * 4 + 8) = ...;
    return quotearg_n_options();
}
