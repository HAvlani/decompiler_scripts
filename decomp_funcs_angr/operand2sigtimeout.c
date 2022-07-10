typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407b3b;

int operand2sig()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_9;  // tmp #9
    unsigned int v0;  // [bp-0x4c]
    char v1;  // [bp-0x48]
    char *v10;  // rdi
    unsigned long long v11;  // r12
    char v12[3];  // r14
    char [3] v13;  // r15
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char [3]|unsigned long long v6;  // rax
    unsigned int v7;  // edx
    struct_0 *|unsigned long|unsigned long long|unsigned int v8;  // rbx
    struct_0 *v9;  // rbx

    if (((int)*(v10)) - 48 <= 9)
    {
        v9->field_0 = 0;
        v9 = __errno_location();
        v4 = strtol(v10, &v1, 0xa);
        if (v1 != v10)
        {
            if (*(v1) == 0)
            {
                if (v8->field_0 == 0)
                {
                    v7 = ((int)v4);
                    if (v7 != -1)
                    {
                        v0 = (254 < v7? 255 : 127) & v7;
                        /* goto 4209313; */
                    }
                }
            }
        }
        if (v1 == v10 || v7 == -1 || v8->field_0 != 0 || *(v1) != 0)
        {
            v0 = -1;
            v11 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_407b3b, 0x5));
            v5 = -1;
            return v5;
        }
    }
    v6 = xstrdup();
    v8 = ((int)v6[0]);
    v12 = v6;
    v13 = v6;
    if (((long long)v6[0]) != 0)
    {
        do
        {
            v6 = strchr("abcdefghijklmnopqrstuvwxyz", v8);
            if (v6 != 0)
            {
                v8 = ((long long)v8) - 32;
                tmp_9 = v8;
                v13[0] = tmp_9;
            }
            v8 = ((long long)v13[1]);
            v13 += 1;
            tmp_6 = v8;
        }
        while (((long long)tmp_6) != 0);
    }
    v3 = str2sig();
    if (v3 != 0)
    {
        if (v12[0] == 83)
        {
            if (v12[1] == 73)
            {
                if (v12[2] == 71)
                {
                    v3 = str2sig();
                    if (v3 == 0)
                    {
                        /* goto 4209293; */
                    }
                }
            }
        }
        if (v12[1] != 73 || v3 != 0 || v12[0] != 83 || v12[2] != 71)
        {
            v0 = -1;
        }
    }
    rpl_free();
    if (((int)v0) < 0)
    {
        v11 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_407b3b, 0x5));
        v5 = -1;
        return v5;
    }
    if (False)
    {
        /* goto 4209120; */
    }
    if ((v8->field_0 == 0 || ((int)*(v10)) - 48 > 9) && (*(v1) == 0 || ((int)*(v10)) - 48 > 9) && (((int)*(v10)) - 48 <= 9 || ((int)v0) >= 0) && (v1 != v10 || ((int)*(v10)) - 48 > 9) && (v7 != -1 || ((int)*(v10)) - 48 > 9))
    {
        v4 = sig2str();
        if (v4 != 0)
        {
            v11 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_407b3b, 0x5));
            v5 = -1;
            return v5;
        }
        v5 = ((long long)v0);
        return v5;
    }
}
