extern struct_0 default_quoting_options;
extern struct_0 g_40e270;
extern struct_0 g_40e280;
extern struct_1 g_40e290;

int quotearg_n_custom_mem()
{
    BOT|unsigned int v0;  // [bp-0x48]
    BOT v1;  // [bp-0x38]
    BOT v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v7;  // rdx
    unsigned long v8;  // rsi

    v0 = default_quoting_options;
    v4 = g_40e290;
    v0 = 10;
    v1 = g_40e270;
    v2 = g_40e280;
    v3 = v8;
    v4 = v7;
    return quotearg_n_options();
}