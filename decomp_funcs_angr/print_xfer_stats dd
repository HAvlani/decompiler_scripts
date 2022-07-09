typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40e010;
extern unsigned int g_40e020;
extern unsigned int g_40e039;
extern unsigned int g_40e051;
extern unsigned int g_40e348;
extern struct_2 progress_len;
extern struct_0 reported_w_bytes;
extern struct_0 start_time;
extern unsigned long long stderr[7];
extern struct_0 w_bytes;

int print_xfer_stats()
{
    BOT tmp_20;  // tmp #20
    BOT tmp_21;  // tmp #21
    BOT tmp_2;  // tmp #2
    BOT tmp_27;  // tmp #27
    unsigned long|struct_3 * v0;  // [bp-0x828]
    struct_3 *v1;  // [bp-0x820]
    unsigned long long v10;  // rbp
    struct_3 *|unsigned long long|unsigned int v11;  // rbp
    unsigned long long v12;  // rdi
    char *v13;  // r9
    char *v14;  // r12
    unsigned long long v15;  // r13
    struct_0 *v16;  // fs
    unsigned long v17;  // xmm0lq
    uint128_t v18;  // xmm0lq
    unsigned long|uint128_t v2;  // [bp-0x810]
    char v3;  // [bp-0x2ec]
    unsigned long v4;  // [bp-0x40]
    struct_3 *|char * v6;  // rax
    char *|unsigned long long v7;  // rax
    unsigned long long v9;  // rdx

    v10 = v12;
    if (v12 == 0)
    {
        v10 = (long long)gethrxtime();
    }
    v14 = (long long)human_readable();
    v15 = (long long)human_readable();
    if (start_time < v10)
    {
        v18 = 0;
        tmp_20 = BinaryOp FPConvert;
        v17 = tmp_20;
        tmp_27 = xmm0<16>;
        v2 = ((long long)(tmp_27 / 0x41cdcd6500000000));
        v11 = (long long)human_readable();
        v6 = strlen(v11);
        v18 = v2;
        *(v11 + v6) = 29487;
        *(v11 + v6 + 2) = 0;
    }
    else
    {
        dcgettext(0x0, &g_40e010, 0x5);
        v11 = &v3;
        __snprintf_chk();
        v18 = 0;
    }
    if (v12 != 0)
    {
        v6 = *(stderr + 40);
        if (*(stderr + 40) < *(stderr + 48))
        {
            *(stderr + 40) = *(stderr + 40) + 1;
            *(v6) = 13;
        }
        else
        {
            v2 = v18;
            __overflow();
        }
    }
    __snprintf_chk();
    v7 = strlen(v14);
    if (*(v14 + v7 + 2) != 32)
    {
        v7 = strlen(v13);
        if (*(v13 + v7 + 2) != 32)
        {
            v1 = v11;
            v0 = &stack_base-88;
            v9 = dcgettext(0x0, &g_40e348, 0x5);
        }
        else
        {
            v0 = v11;
            v9 = dcgettext(0x0, &g_40e051, 0x5);
        }
        v11 = __fprintf_chk();
    }
    else
    {
        dcngettext(0x0, &g_40e039, &g_40e020, ((int)w_bytes), 0x5);
        v11 = __fprintf_chk();
    }
    if (!(v12 != 0))
    {
        v7 = *(stderr + 40);
        if (*(stderr + 40) < *(stderr + 48))
        {
            *(stderr + 40) = *(stderr + 40) + 1;
            *(v7) = 10;
            reported_w_bytes = w_bytes;
            return v4 ^ *(v16 + 0x28);
        }
        __overflow();
        reported_w_bytes = w_bytes;
        return v4 ^ *(v16 + 0x28);
    }
    else if (!(v11 >= 0))
    {
        progress_len = v11;
        reported_w_bytes = w_bytes;
        return v4 ^ *(v16 + 0x28);
    }
    else if (progress_len <= v11)
    {
        progress_len = v11;
        reported_w_bytes = w_bytes;
        return v4 ^ *(v16 + 0x28);
    }
    else
    {
        __fprintf_chk();
        progress_len = v11;
        reported_w_bytes = w_bytes;
        return v4 ^ *(v16 + 0x28);
    }
}
