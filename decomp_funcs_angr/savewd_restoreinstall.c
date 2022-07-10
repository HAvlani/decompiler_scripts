typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int savewd_restore()
{
    char v0;  // [bp-0x24]
    unsigned int v1;  // [bp+0x0]
    unsigned int v10;  // esi
    unsigned long|unsigned int [2] v11;  // rdi
    unsigned long|unsigned int v12;  // r12d
    struct_0 *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int v8[2];  // rbx
    struct_0 * v9;  // rbp

    v8 = v11;
    if (v11[0] != 3)
    {
        if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
        {
            if (v11[0] == 2)
            {
                v11 = ((long long)v11[1]);
                v6 = fchdir(v11);
                if (((int)v6) == 0)
                {
                    v8[0] = 1;
                    return v6;
                }
                v12 = ((int)v1);
                v9 = __errno_location();
                close(v8[1]);
                v8[0] = 4;
                v8[1] = ((int)v1);
                v9->field_0 = v12;
                v6 = -1;
                return v6;
            }
            v6 = 0;
            return v6;
        }
        if (v11[0] == 4)
        {
            v12 = ((long long)v11[1]);
            v9 = __errno_location();
            v9->field_0 = v12;
            v6 = -1;
            return v6;
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    if (!(v11[1] != 0))
    {
        _exit(v10);
    }
    else if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
    {
        v6 = 0;
        return v6;
    }
    else
    {
        while (true)
        {
            v4 = waitpid(v11[1], ((int)&v0), 0x0);
            if (v4 < 0)
            {
                v3 = __errno_location();
                __assert_fail(); /* do not return */
            }
            else
            {
                v5 = ((long long)v0);
                v11[1] = -1;
                if ((((char)v0) & 127) == 0)
                {
                    v6 = ((long long)v5);
                    return v6;
                }
                else
                {
                    raise();
                    v5 = ((long long)v0);
                    v6 = ((long long)v5);
                    break;
                }
            }
        }
        return v6;
    }
}
