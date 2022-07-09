extern struct_0 g_40e078;
extern unsigned int nslots;
extern unsigned long long slot0;
extern struct_1 *slotvec;
extern unsigned long long slotvec0;

int quotearg_free()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // rbx
    unsigned long long v3;  // rbp

    if (nslots > 1)
    {
        v3 = slotvec + 24;
        v2 = 1;
        while (true)
        {
            ((unsigned int)v2) = ((long long)((unsigned int)v2)) + 1;
            v3 += 16;
            v1 = rpl_free();
            if (nslots <= ((int)((unsigned int)v2)))
            {
                break;
            }
        }
    }
    if (*(slotvec + 8) != 4252000)
    {
        v1 = rpl_free();
        g_40e078 = &slot0;
        slotvec0 = 0x100;
    }
    if (slotvec != 4251760)
    {
        v1 = rpl_free();
        slotvec = &slotvec0;
        nslots = 1;
        return v1;
    }
    nslots = 1;
    return v1;
}
