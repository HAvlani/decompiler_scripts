typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 conversions_mask;
extern unsigned int g_40e398;
extern struct_0 ibuf;
extern struct_0 input_blocksize;
extern struct_0 page_size;

int alloc_ibuf.part.0()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long long v3;  // rbp
    struct_0 *v4;  // fs

    v0 = *(v4 + 0x28);
    ibuf = aligned_alloc(((int)page_size), ((int)(((long long)(((int)(((long long)conversions_mask) >> 7)) & 1)) + input_blocksize)));
    if (!(ibuf != 0))
    {
        v3 = (long long)human_readable();
        dcgettext(0x0, &g_40e398, 0x5);
        nl_error();
        __stack_chk_fail(); /* do not return */
    }
    else if ((v0 ^ *(v4 + 0x28)) == 0)
    {
        return v0 ^ *(v4 + 0x28);
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
