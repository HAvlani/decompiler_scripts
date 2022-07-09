extern struct_1 g_41d870;
extern struct_0 saved_line;
extern char unique;

int write_unique()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long v5;  // rdi
    uint128_t v6[2];  // rdi

    if (saved_line != 0)
    {
        v1 = v4;
        v0 = v5;
        v3 = compare();
        v6 = v0;
        if (((int)v3) != 0)
        {
            saved_line = v6[0];
            g_41d870 = v6[1];
        }
        else
        {
            return v3;
        }
    }
    else
    {
        saved_line = v6[0];
        g_41d870 = v6[1];
    }
}
