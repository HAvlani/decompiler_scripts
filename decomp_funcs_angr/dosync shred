typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40b004;
extern unsigned int g_40b015;

int dosync()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v3;  // rbx
    struct_0 *v4;  // rbx
    unsigned int v5;  // ebp
    unsigned int v6;  // edi
    unsigned long long v7;  // r13

    v1 = fdatasync();
    if (v1 != 0)
    {
        v7 = ((long long)v4->field_0);
        v4 = __errno_location();
        if (((int)(v7 - 21)) > 1)
        {
            if (((int)v7) != 9)
            {
                error(0x0, ((int)v7), dcgettext(0x0, &g_40b015, 0x5));
                v3->field_0 = ((int)v7);
                v2 = -1;
                return v2;
            }
        }
        if (((int)(v7 - 21)) <= 1 || ((int)v7) == 9)
        {
            v1 = fsync(v6);
            if (v1 != 0)
            {
                v5 = ((int)v3->field_0);
                if (((int)(((long long)v3->field_0) - 21)) > 1)
                {
                    if (v5 != 9)
                    {
                        error(0x0, v5, dcgettext(0x0, &g_40b004, 0x5));
                        v3->field_0 = v5;
                        v2 = -1;
                        return v2;
                    }
                }
                if (((int)(((long long)v3->field_0) - 21)) <= 1 || v5 == 9)
                {
                    sync();
                    v2 = 0;
                    return v2;
                }
            }
            v2 = 0;
            return v2;
        }
    }
    v2 = 0;
    return v2;
}
