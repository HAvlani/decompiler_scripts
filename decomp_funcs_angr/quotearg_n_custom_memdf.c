extern struct_0 default_quoting_options;
extern struct_0 g_418550;
extern struct_0 g_418560;
extern struct_1 g_418570;

int quotearg_n_custom_mem()
{
    unsigned int|BOT v0;  // [bp-0x48]
    BOT v1;  // [bp-0x38]
    BOT v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v7;  // rdx
    unsigned long v8;  // rsi

    v0 = default_quoting_options;
    v4 = g_418570;
    v0 = 10;
    v1 = g_418550;
    v2 = g_418560;
    v3 = v8;
    v4 = v7;
    return quotearg_n_options();
}
