typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int fmt.5703;

int rpl_fchmodat()
{
    struct_0 *v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0xfc]
    unsigned int v10;  // edi
    unsigned long|unsigned int v11;  // r12d
    unsigned long long v12;  // r13
    unsigned int v2;  // [bp-0xe0]
    char v3;  // [bp-0x68]
    unsigned long long v6;  // rax
    unsigned long v7;  // rcx
    unsigned int v8;  // edx
    unsigned int v9;  // esi

    v11 = v7;
    if (((int)v7) != 0x100)
    {
        fchmodat(v10, v9, v8, v11);
        v6 = v12;
        return v6;
    }
    v12 = openat();
    if (((int)v12) < 0)
    {
        v6 = v12;
        return v6;
    }
    else
    {
        v11 = __fxstatat(0x1);
        v0 = __errno_location();
        if (!(v11 == 0))
        {
            close(((int)v12));
            v0->field_0 = ((int)v0->field_0);
            v6 = v12;
            return v6;
        }
        else if ((((short)v2) & 0xf000) != 0xa000)
        {
            __sprintf_chk(((int)&v3), 0x1, 0x1a, &fmt.5703, ((int)v12));
            v1 = v0->field_0;
            close(((int)v12));
            if (chmod() == 0)
            {
                v6 = v12;
                return v6;
            }
            else if (v1 == 2)
            {
                fchmodat(v10, v9, v8, v11);
                v6 = v12;
                return v6;
            }
            else
            {
                v0->field_0 = ((int)v1);
                v6 = v12;
                return v6;
            }
        }
        else
        {
            close(((int)v12));
            v0->field_0 = 95;
            v6 = v12;
            return v6;
        }
    }
}
