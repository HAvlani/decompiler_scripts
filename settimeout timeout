typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_407004;
extern unsigned int g_40701b;

int settimeout()
{
    unsigned long|unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x50]
    struct_1 *v10;  // rbx
    unsigned long long|char v12;  // dil
    struct_0 *v13;  // fs
    unsigned long long v14;  // xmm0lq
    unsigned long long v15;  // xmm0lq
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    v0 = v14;
    v2 = 0;
    v5 = v9;
    v3 = 0;
    v4 = (long long)dtotimespec();
    v8 = timer_create(0x0, 0x0, ((int)&v1));
    v15 = v0;
    if (v8 != 0)
    {
        if (((long long)v12) != 0)
        {
            v0 = v0;
            v15 = v0;
            v10 = __errno_location();
            if (v10->field_0 != 38)
            {
                error(0x0, v10->field_0, dcgettext(0x0, &g_40701b, 0x5));
                if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
                {
                    alarm();
                    return v6 ^ *(v13 + 0x28);
                }
            }
        }
        if (((long long)v12) == 0 || v10->field_0 == 38)
        {
            if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
            {
                alarm();
                return v6 ^ *(v13 + 0x28);
            }
        }
    }
    v8 = timer_settime(((int)v1), 0x0, ((int)&v2), 0x0);
    if (v8 == 0)
    {
        return v6 ^ *(v13 + 0x28);
    }
    else
    {
        v15 = v0;
        if (((long long)v12) != 0)
        {
            error(0x0, *(__errno_location()), dcgettext(0x0, &g_407004, 0x5));
            v15 = v0;
        }
        v12 = v1;
        v0 = v15;
        timer_delete(v12);
        if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
        {
            alarm();
            return v6 ^ *(v13 + 0x28);
        }
    }
    if (...)
    {
        alarm();
        return v6 ^ *(v13 + 0x28);
    }
}
