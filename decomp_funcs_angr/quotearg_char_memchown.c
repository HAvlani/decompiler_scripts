extern struct_2 default_quoting_options;
extern struct_2 g_412210;
extern struct_2 g_412220;
extern struct_1 g_412230;

int quotearg_char_mem()
{
    BOT v0;  // [bp-0x48]
    BOT v1;  // [bp-0x38]
    BOT v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v6;  // rdx

    v0 = default_quoting_options;
    v3 = g_412230;
    v1 = g_412210;
    v2 = g_412220;
    *(&stack_base-72 + v6 % 32 * 4 + 8) = ...;
    return quotearg_n_options();
}