typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int caught_signals;
extern struct_0 compress_program;
extern unsigned int g_4155d8;
extern unsigned int g_415628;
extern struct_0 temp_dir_count;
extern unsigned long long temp_dir_index.8870;
extern struct_0 temp_dirs;
extern unsigned long long temptail;

int maybe_create_temp()
{
    unsigned int v0;  // [bp-0xcc]
    char v1;  // [bp-0xc8]
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    struct_0 *|unsigned long long v14;  // rax
    struct_3 *v15;  // rbx
    unsigned long v16;  // rbx
    unsigned long|unsigned int v17;  // ebp
    unsigned long v18;  // rsi
    struct_0 *v19;  // rdi
    char v2;  // [bp-0xc4]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r12
    unsigned long v22;  // r12
    unsigned int v23;  // r14d
    unsigned long long v24;  // r15
    char v3;  // [bp-0xc0]
    unsigned long long v9;  // rax

    v0 = ((int)v18);
    v16 = strlen(*(temp_dirs + temp_dir_index.8870 * 8));
    v24 = v22 + 13;
    v22 = (long long)xmalloc();
    memcpy(v22 + 13, *(temp_dirs + temp_dir_index.8870 * 8), v16);
    *(v21 + v16 + 13) = 6365935330447553327;
    *(v24 + v16 + 8) = 5789784;
    *(v21) = 0;
    v9 = temp_dir_index.8870 + 1;
    temp_dir_index.8870 = temp_dir_index.8870 + 1;
    if (v9 == temp_dir_count)
    {
        temp_dir_index.8870 = 0;
    }
    v1 = ((char)(pthread_sigmask(0x0, &caught_signals, ((int)&v3)) == 0));
    v17 = (long long)mkostemp_safer();
    v15 = __errno_location();
    if (((int)v17) >= 0)
    {
        v14 = temptail;
        temptail = v21;
        v14->field_0 = v21;
        if (v1 != 0)
        {
            v23 = ((int)v15->field_0);
            cs_leave.part.0();
            v15->field_0 = v23;
        }
        *(v21 + 12) = 0;
        if (compress_program != 0)
        {
            v14 = pipe_fork();
            *(v21 + 8) = ((int)v14);
            if (!(((int)v14) <= 0))
            {
                close(((int)v17));
                close(v1);
                v17 = ((int)v2);
                register_proc();
            }
            else if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                close(v2);
                if (((int)v17) != 1)
                {
                    move_fd.part.0();
                }
                if (v1 != 0)
                {
                    move_fd.part.0();
                    execlp(((int)compress_program), ((int)compress_program), 0x0);
                    async_safe_die(); /* do not return */
                }
                execlp(((int)compress_program), ((int)compress_program), 0x0);
                async_safe_die(); /* do not return */
            }
        }
        if (compress_program == 0 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))) || ((int)v14) > 0)
        {
            v10 = fdopen(v17, "w");
            v19->field_0 = v10;
            if (v10 != 0)
            {
                v12 = v21;
                return v12;
            }
            dcgettext(0x0, &g_415628, 0x5);
            sort_die(); /* do not return */
        }
    }
    v17 = ((int)v15->field_0);
    if (v1 != 0)
    {
        cs_leave.part.0();
        v15->field_0 = v17;
    }
    if (!(v17 == 24))
    {
        v20 = (long long)quotearg_style();
        error(0x2, v15->field_0, dcgettext(0x0, &g_4155d8, 0x5));
    }
    else if (((char)v0) == 1)
    {
        v21 = 0;
        rpl_free();
        v12 = v21;
        return v12;
    }
    else
    {
        v20 = (long long)quotearg_style();
        error(0x2, v15->field_0, dcgettext(0x0, &g_4155d8, 0x5));
    }
}
