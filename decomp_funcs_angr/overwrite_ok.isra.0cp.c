typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
    char field_18;
} struct_0;

extern unsigned int g_414ba8;
extern unsigned int g_414bd8;
extern unsigned int g_41516c;

int overwrite_ok.isra.0()
{
    unsigned long v0;  // [bp-0x58]
    char v1;  // [bp-0x32]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rdi

    if ((long long)writable_destination() == 0)
    {
        strmode();
        v1 = 0;
        v6 = (long long)quotearg_style();
        if (v7->field_18 == 0)
        {
            if ((((int)v7->field_14) & 0xffff00) == 0)
            {
                v5 = dcgettext(0x0, &g_414bd8, 0x5);
                v0 = &stack_base-59;
                __fprintf_chk();
                v4 = yesno();
                return v4;
            }
        }
        if ((((int)v7->field_14) & 0xffff00) != 0 || v7->field_18 != 0)
        {
            v5 = dcgettext(0x0, &g_414ba8, 0x5);
            v0 = &stack_base-59;
            __fprintf_chk();
            v4 = yesno();
            return v4;
        }
    }
    v6 = (long long)quotearg_style();
    dcgettext(0x0, &g_41516c, 0x5);
    __fprintf_chk();
    v4 = yesno();
    return v4;
}
