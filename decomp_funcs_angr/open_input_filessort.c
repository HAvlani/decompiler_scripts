typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char field_c;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 compress_program;
extern unsigned int g_415580;
extern unsigned int g_416c29;

int open_input_files()
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    struct_0 *v13;  // rdx
    struct_3 *|struct_1 * v14;  // rbx
    unsigned long long|unsigned int v15;  // ebp
    unsigned long v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // r12
    unsigned long long v19;  // r12
    char v2;  // [bp-0x44]
    unsigned int v20;  // r14d
    struct_2 *|struct_0 * v21;  // r15
    unsigned long long v6;  // rax

    v14 = v17;
    v6 = xnmalloc();
    v13->field_0 = &stack_base+0;
    if (v16 != 0)
    {
        v15 = v6;
        v18 = 0;
        v0 = &stack_base-72;
        while (true)
        {
            v21 = v14->field_8;
            if (v14->field_8 != 0)
            {
                v6 = ((long long)v21->field_c);
                if (((long long)v21->field_c) != 0)
                {
                    if (v6 == 1)
                    {
                        wait_proc();
                    }
                    v20 = open(v21 + 13, 0x0, v13);
                    if (v20 >= 0)
                    {
                        v10 = pipe_fork();
                        if (v10 == -1)
                        {
                            v14 = __errno_location();
                            if (v14->field_0 == 24)
                            {
                                close(v20);
                                v14->field_0 = 24;
                                *(v15 + v18 * 8) = 0;
                                v11 = v18;
                                return v11;
                            }
                            v19 = (long long)quotearg_style();
                            error(0x2, v14->field_0, dcgettext(0x0, &g_415580, 0x5));
                        }
                        else if (v10 != 0)
                        {
                            v21->field_8 = v10;
                            v21 = v15 + v18 * 8;
                            register_proc();
                            close(v20);
                            close(v2);
                            v6 = fdopen(v1, "r");
                            if (v6 != 0)
                            {
                                *(v15 + v18 * 8) = v6;
                                /* goto 4237553; */
                            }
                            else
                            {
                                v15 = ((int)v14->field_0);
                                close(v1);
                                v21->field_0 = 0;
                                *(__errno_location() + None) = v15;
                                v11 = v18;
                                return v11;
                            }
                        }
                        if (v10 == 0)
                        {
                            close(v1);
                            if (v20 != 0)
                            {
                                move_fd.part.0();
                            }
                            if (v2 != 1)
                            {
                                move_fd.part.0();
                                execlp(((int)compress_program), ((int)compress_program), &g_416c29);
                                __errno_location();
                            }
                            else
                            {
                                execlp(((int)compress_program), ((int)compress_program), &g_416c29);
                                __errno_location();
                                async_safe_die(); /* do not return */
                            }
                        }
                    }
                    else
                    {
                        *(v15 + v18 * 8) = 0;
                        v11 = v18;
                        return v11;
                    }
                }
            }
            if (((long long)v21->field_c) == 0 || v14->field_8 == 0)
            {
                v6 = stream_open();
                *(v15 + 0 * 8) = v6;
                if (v6 == 0)
                {
                    v11 = v18;
                    return v11;
                }
            }
            if ((((long long)v21->field_c) != 0 || v6 != 0) && (v14->field_8 != 0 || v6 != 0) && (((long long)v21->field_c) == 0 || v14->field_8 == 0 || v6 != 0) && (((long long)v21->field_c) == 0 || v14->field_8 == 0 || v20 >= 0) && (((long long)v21->field_c) == 0 || v14->field_8 == 0 || v10 != 0) && (((long long)v21->field_c) == 0 || v14->field_8 == 0 || v10 != -1))
            {
                v18 = 1;
                v14 += 16;
                v11 = v18;
                return v11;
            }
        }
        async_safe_die(); /* do not return */
    }
    v18 = 0;
    v11 = v18;
    return v11;
}
