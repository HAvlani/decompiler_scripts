typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_416be1;
extern struct_2 nmerge;

int merge()
{
    BOT tmp_48;  // tmp #48
    BOT tmp_25;  // tmp #25
    unsigned long v0;  // [bp-0x110]
    unsigned long|unsigned long long v1;  // [bp-0x108]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long v17;  // rcx
    unsigned long long v18;  // rcx
    unsigned long|unsigned long long v19;  // rdx
    unsigned long|unsigned long long v2;  // [bp-0x100]
    unsigned long|unsigned long long|unsigned int v20;  // rbx
    void *|char *[2]|unsigned long long v21;  // rbp
    char [2]|unsigned long long v22;  // rsi
    void *v23;  // rdi
    unsigned long long v24;  // r10
    unsigned long|unsigned long long|unsigned long long [2] v25;  // r12
    void * v26;  // r12
    unsigned long long v27;  // r13
    unsigned long long v28;  // r13
    unsigned long v29;  // r13
    unsigned long|unsigned long long v3;  // [bp-0xf8]
    unsigned long long v30;  // r14
    unsigned long long v31;  // r15
    struct_0 *v32;  // fs
    char *v4;  // [bp-0xf0]
    char v5;  // [bp-0xd8]
    unsigned long v6;  // [bp-0xd0]
    unsigned long v7;  // [bp-0x40]
    struct_2 *|unsigned long long v9;  // rax

    v30 = v23;
    v25 = v22;
    v4 = v17;
    v18 = ((long long)nmerge);
    v1 = v19;
    if (((long long)nmerge) < v19)
    {
        while (true)
        {
            v27 = 0;
            v20 = 0;
            if (v1 >= v18)
            {
                while (true)
                {
                    v31 = (long long)maybe_create_temp();
                    v0 = v31 + 13;
                    v9 = mergefiles();
                    v18 = ((long long)nmerge);
                    v20 += v9;
                    v22 = v1 - v20;
                    v25 -= (v9 <= v25? v9 : v25);
                    tmp_48 = v27;
                    v27 += 1;
                    *(v30 + tmp_48 * 16) = v0;
                    *(v30 + tmp_48 * 16 + 8) = v31;
                    if (((long long)nmerge) > v1 - v20)
                    {
                        break;
                    }
                }
                v19 = ((long long)((0 CONCAT v27) % v18 >> 64));
                v31 = v27 * 16 + v30;
                v24 = v20 * 16 + v30;
                v14 = v18 - ((long long)((0 CONCAT v27) % v18 >> 64));
            }
            else
            {
                v22 = v1;
                v14 = v18;
                v31 = v30;
                v24 = v30;
                v19 = 0;
            }
            if (rsi<8> > rax<8>)
            {
                v3 = r10<8>;
                v0 = rsi<8> + v19 + 1 - rcx<8>;
                v2 = (long long)maybe_create_temp();
                v0 = v2 + 13;
                v14 = mergefiles();
                v20 += v14;
                *(v31) = v0;
                *(v31 + 8) = v2;
                v25 -= (v14 <= v25? v14 : v25);
                v24 = v20 * 16 + v30;
            }
            v25 = r12<8> + r13<8>;
            memmove(v31, r10<8>, (v1 - rbx<8>) * 16);
            v18 = ((long long)nmerge);
            v1 += r13<8> - rbx<8>;
            if (((long long)nmerge) >= v1)
            {
                break;
            }
        }
    }
    if (v1 > v25)
    {
        v2 = v30;
        v31 = v25;
        v0 = &v5;
        v27 = 0;
        v21 = v25 * 16 + v30;
        v3 = v25;
        while (true)
        {
            v22 = v21[0];
            v20 = ((int)(((int)v21[0][0]) - 45));
            if (v21[0][0] == 45)
            {
                v20 = ((long long)v22[1]);
            }
            if (v4 != 0)
            {
                v9 = strcmp(v4, v22);
                if (reg_40<4> == 0 && v9 == 0)
                {
                    v25 = (long long)get_outstatus();
                    if (v25 == 0)
                    {
                        break;
                    }
                }
            }
            if (v4 == 0 || v9 != 0)
            {
                v25 = (long long)get_outstatus();
                if (v25 == 0)
                {
                    break;
                }
                if (reg_40<4> != 0 && v25 != 0)
                {
                    v9 = __xstat(0x1, ((int)v21[0]), ((int)&v5));
                }
            }
            if ((reg_40<4> == 0 || v9 == 0) && (reg_40<4> == 0 || v4 != 0) && (v9 == 0 || v25 != 0) && (v25 != 0 || v4 != 0) && (reg_40<4> == 0 || v4 == 0 || v9 != 0) && (v4 == 0 || v9 != 0 || v25 != 0))
            {
                v9 = __fxstat(0x1, 0x0, ((int)&v5));
            }
            if (...)
            {
                v31 += 1;
                v21 += 16;
                if (v1 == v31)
                {
                    break;
                }
            }
            if (...)
            {
                v20 = v27 + 13;
                if (v27 == 0)
                {
                    v20 = v27 + 13;
                    v27 = (long long)maybe_create_temp();
                    mergefiles();
                }
                v21[0] = v20;
                v31 += 1;
                v21 += 16;
                v21[1] = r13<8>;
                if (v1 == v31)
                {
                    break;
                }
            }
        }
        v30 = v2;
        v25 = v3;
    }
    v0 = v25;
    v28 = v1;
    v3 = &stack_base-232;
    while (true)
    {
        v21 = (long long)open_input_files();
        if (v28 == v21)
        {
            v13 = stream_open();
            if (v13 == 0)
            {
                v9 = __errno_location();
                if (!(v9->field_0 == 24))
                {
                    dcgettext(0x0, &g_416be1, 0x5);
                    sort_die(); /* do not return */
                }
                else if (v28 <= 2)
                {
                    dcgettext(0x0, &g_416be1, 0x5);
                    sort_die(); /* do not return */
                }
            }
            mergefps();
            return v7 ^ *(v32 + 0x28);
        }
        else if (v21 <= 2)
        {
            dcgettext(0x0, &g_416be1, 0x5);
            sort_die(); /* do not return */
        }
        if ((v9->field_0 == 24 || v28 != v21) && (v13 == 0 || v28 != v21) && (v28 == v21 || v21 > 2) && (v28 > 2 || v28 != v21))
        {
            v31 = v21 - 1;
            v26 = v30 + (v21 - 1) * 16;
            while (true)
            {
                v21 = v26;
                xfclose();
                v26 -= 16;
                v9 = maybe_create_temp();
                if (v2 != 0)
                {
                    break;
                }
                v31 -= 1;
            }
            v2 = v9;
            tmp_25 = v0;
            v1 = v2 + 13;
            v25 = (!(tmp_25 <= v31)? v31 : tmp_25);
            v29 = v28 - v31;
            mergefps();
            v19 = v29 * 16;
            v28 = v29 + 1;
            *(v30) = v1;
            *(v30 + 8) = v2;
            memmove(v30 + 16, v21, v19);
            v0 = v0 - v25 + 1;
        }
    }
}
