typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int settime()
{
    BOT tmp_35;  // tmp #35
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    struct_0 *|unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5[2];  // rbx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12

    v5 = v6;
    v7 = clock_settime(0x0, ((int)v6));
    if (((int)v7) != 0)
    {
        v3 = __errno_location();
        if (v3->field_0 != 1)
        {
            tmp_35 = v5[1];
            v0 = v5[0];
            v1 = (((long long)(tmp_35 * 2361183241434822607 >> 64)) >> 7) - (tmp_35 >> 63);
            v3 = settimeofday(((int)&v0), 0x0, ((int)((((long long)(tmp_35 * 2361183241434822607 >> 64)) >> 7) - (tmp_35 >> 63))), ((int)(tmp_35 >> 63)));
            v7 = v3;
            v4 = v7;
            return v4;
        }
        v4 = v7;
        return v4;
    }
    v4 = v7;
    return v4;
}
