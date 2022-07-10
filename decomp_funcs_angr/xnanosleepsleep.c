typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xnanosleep()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    struct_0 *v5;  // rbx
    unsigned long v6;  // xmm0lq

    v5 = __errno_location();
    if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
    {
        while (true)
        {
            pause();
            if (v5->field_0 != 4)
            {
                break;
            }
            pause();
            break;
        }
    }
    v0 = (long long)dtotimespec();
    v1 = v4;
    while (true)
    {
        v5->field_0 = 0;
        v3 = rpl_nanosleep();
        if (((int)v3) != 0)
        {
            v3 = -1;
            break;
        }
        else
        {
            return v3;
        }
    }
    return v3;
}
