typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 file_list;
extern <missing-type> g_404a3b;
extern <missing-type> g_404a84;
extern unsigned int g_40c04f;
extern unsigned long long in_stream;
extern char *stdout;

int check_and_close()
{
    struct_1 *|unsigned long long v1;  // rax
    char *v10;  // rdi
    unsigned int v11;  // edi
    unsigned long long v12;  // cc_op
    unsigned long long v13;  // cc_op
    unsigned long long v14;  // cc_op
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep1
    unsigned long long v18;  // cc_dep2
    unsigned long long v19;  // cc_dep2
    unsigned long long v20;  // cc_dep2
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char v6[2];  // rax
    unsigned long long v7;  // rax
    char *v8;  // rdx
    unsigned long long|unsigned int v9;  // rbp

    rsp<8> = &stack_base-8;
    v9 = v11;
    v10 = in_stream;
    v1 = 1;
    v13 = 20;
    v17 = in_stream;
    v19 = 0;
    if (in_stream != 0)
    {
        v9 = ((long long)(((long long)(*(v10) & 32)) == 0? 0 : ((int)rbp<8>)));
        v6 = *(file_list + 8);
        v13 = 5;
        v17 = ((long long)*(*(file_list + 8)));
        v19 = 45;
        if (*(*(file_list + 8)) == 45)
        {
            v13 = 5;
            v17 = ((long long)v6[1]);
            v19 = 0;
            if (v6[1] == 0)
            {
                rsp<8> = &stack_base-16;
                v1 = clearerr_unlocked();
            }
        }
        if (*(*(file_list + 8)) != 45 || v6[1] != 0)
        {
            rsp<8> = &stack_base-16;
            v1 = rpl_fclose();
            v13 = 19;
            v17 = v1;
            v19 = 0;
            if (((int)v1) != 0)
            {
                v13 = 19;
                v17 = v9;
                v19 = 0;
                if (((int)v9) == 0)
                {
                    rsp<8> = &stack_base-16;
                    v1 = __errno_location();
                    v9 = ((long long)v1->field_0);
                }
            }
        }
        if (((int)v1) == 0 || ((int)v9) == 0 || *(*(file_list + 8)) == 45 && v6[1] == 0)
        {
            v1 = 1;
            v13 = 19;
            v17 = v9;
            v19 = 0;
        }
        if (((int)v9) != 0 || ((int)v1) != 0 && ((int)v9) != 0 && *(*(file_list + 8)) != 45 || ((int)v1) != 0 && ((int)v9) != 0 && v6[1] != 0)
        {
            rsp<8> = &stack_base-16;
            v3 = quotearg_n_style_colon();
            rsp<8> = &stack_base-16;
            v5 = error(0x0, ((int)v9), "%s");
            v13 = 19;
            v17 = 0;
            v19 = 0;
            v1 = 0;
        }
        in_stream = 0;
    }
    v8 = stdout;
    v14 = 17;
    v16 = ((long long)(*(stdout) & 32));
    v20 = 0;
    if (((long long)(*(stdout) & 32)) == 0)
    {
        rip<8> = &g_404a3b;
        rsp<8> = &stack_base+8;
        return v1;
    }
    rsp<8> = &stack_base-16;
    rsp<8> = &stack_base-16;
    v7 = error(0x0, 0x0, dcgettext(0x0, &g_40c04f, 0x5));
    v12 = 19;
    v15 = 0;
    v18 = 0;
    v4 = 0;
    rip<8> = &g_404a84;
    rsp<8> = &stack_base+8;
    return 0;
}
