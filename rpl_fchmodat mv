typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int fmt.5703;
extern unsigned int g_417903;

int rpl_fchmodat()
{
    struct_0 *v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0xfc]
    unsigned int v10;  // esi
    unsigned int v11;  // edi
    unsigned long|unsigned int v12;  // r12d
    unsigned long long v13;  // r13
    unsigned int v14;  // r15d
    char v2;  // [bp-0xf8]
    unsigned int v3;  // [bp-0xe0]
    char v4;  // [bp-0x68]
    unsigned long long v7;  // rax
    unsigned int v8;  // ecx
    unsigned int v9;  // edx

    v12 = v8;
    if (v8 != 0x100)
    {
        fchmodat(v11, v10, v9, v12);
        v7 = v13;
        return v7;
    }
    v13 = openat(v11, v10, 0x2a0000);
    if (((int)v13) < 0)
    {
        v7 = v13;
        return v7;
    }
    else
    {
        v12 = __fxstatat(0x1, ((int)v13), &g_417903, ((int)&v2), 0x1000);
        v0 = __errno_location();
        if (!(((int)v12) == 0))
        {
            close(((int)v13));
            v0->field_0 = ((int)v0->field_0);
            v7 = v13;
            return v7;
        }
        else if ((((short)v3) & 0xf000) != 0xa000)
        {
            __sprintf_chk(((int)&v4), 0x1, 0x1a, &fmt.5703, ((int)v13));
            v14 = chmod(((int)&v4), v9);
            v1 = v0->field_0;
            close(((int)v13));
            if (v14 == 0)
            {
                v7 = v13;
                return v7;
            }
            else if (v1 == 2)
            {
                fchmodat(v11, v10, v9, v12);
                v7 = v13;
                return v7;
            }
            else
            {
                v0->field_0 = ((int)v1);
                v7 = v13;
                return v7;
            }
        }
        else
        {
            close(((int)v13));
            v0->field_0 = 95;
            v7 = v13;
            return v7;
        }
    }
}
