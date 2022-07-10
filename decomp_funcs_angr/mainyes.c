typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_406082;
extern unsigned int g_4060bd;
extern unsigned int g_406280;
extern struct_1 optind;
extern char usage;

int main()
{
    BOT tmp_0;  // tmp #0
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    char *|void * v10;  // rcx
    struct_0 * v11;  // rbx
    unsigned long long v12;  // rbx
    char * v13;  // rbp
    struct_0 *v14;  // rbp
    struct_0 *v15;  // rsi
    struct_0 *|char * v16;  // rdi
    struct_0 *v17;  // r12
    unsigned long v18;  // r12
    unsigned long long v19;  // r12
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v20;  // r13
    struct_0 * v21;  // r14
    unsigned long long v22;  // r14
    unsigned long|char * v23;  // r15
    unsigned long v3;  // [bp-0x48]
    void *v4;  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long|unsigned long long v9;  // rax

    v17 = v16;
    v14 = v15;
    set_program_name();
    setlocale();
    bindtextdomain(&g_406082, &g_406280);
    textdomain(&g_406082);
    atexit();
    v2 = 0;
    v1 = "David MacKenzie";
    v0 = &usage;
    parse_gnu_standard_options_only();
    v11 = v14 + ((long long)optind) * 8;
    v3 = v14 + v17 * 8;
    if (optind == ((int)v17))
    {
        *(v15 + v16 * 8) = "y";
        v3 = v15 + v16 * 8 + 8;
    }
    v13 = v11->field_0;
    v21 = v11;
    v20 = 1;
    v19 = 0;
    v23 = v11->field_0;
    while (true)
    {
        v21 += 8;
        v6 = strlen(v23) + 1;
        v19 += v6;
        if (v21 >= v3)
        {
            break;
        }
        tmp_0 = v6 + v23;
        v23 = v21->field_0;
        v20 = ((long long)(tmp_0 != v21->field_0? 0 : ((int)r13<8>)));
    }
    if (v19 > 0x1000)
    {
    }
    else
    {
        v19 = 0x2000;
    }
    if (((long long)v20) == 0 || v19 <= 0x1000)
    {
        v20 = 0;
        v13 = (long long)xmalloc();
    }
    v22 = 0;
    do
    {
        v16 = v11->field_0;
        v4 = v11->field_0;
        v23 = strlen(v16);
        if (((long long)v20) == 0)
        {
            memcpy(v13 + v22, v4, v23);
        }
        tmp_13 = v22 + v23;
        v11 += 8;
        v22 = v22 + v23 + 1;
        v10 = tmp_13 + v13;
        *(tmp_13 + v13) = 32;
    }
    while (v3 > v11);
    *(v10) = 10;
    v9 = ((long long)((0 CONCAT v19) % v22));
    v18 = ((long long)((0 CONCAT v19) % v22));
    v12 = v9 - 1;
    if (v9 != 1)
    {
        v10 = v13 + v22;
        do
        {
            v10 = memcpy(v10, v13, v22) + v22;
            v12 -= 1;
        }
        while (v12 != 1);
        v22 = v18 * v22;
    }
    while (true)
    {
        v9 = full_write();
        if (v22 != v9)
        {
            break;
        }
    }
    error(0x0, *(__errno_location()), dcgettext(0x0, &g_4060bd, 0x5));
    return 1;
}
