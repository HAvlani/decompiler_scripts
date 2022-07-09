typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int rpl_nanosleep()
{
    unsigned long|unsigned long long v0;  // [bp-0x38]
    unsigned long|unsigned long long v1;  // [bp-0x30]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    struct_1 *v5;  // rbp
    unsigned long long v6;  // rsi
    unsigned long long v7[2];  // rdi

    if (v7[1] <= 999999999)
    {
        v4 = v7[0];
        v1 = v7[1];
        v5 = v6;
        if (v4 <= 0x1fa400)
        {
            v0 = v4;
            v3 = nanosleep(((int)&v0), ((int)v6));
            return v3;
        }
        while (true)
        {
            v0 = 0x1fa400;
            v4 -= 0x1fa400;
            v3 = nanosleep(((int)&v0), ((int)v6));
            if (((int)v3) == 0)
            {
                v1 = 0;
                v0 = v4;
                v3 = nanosleep(((int)&v0), ((int)v6));
                return v3;
            }
            else if (v6 != 0)
            {
                return v3;
                v5->field_0 = v5->field_0 + v4;
                break;
            }
        }
        return v3;
    }
    *(__errno_location() + None) = 22;
    v3 = -1;
    return v3;
}
