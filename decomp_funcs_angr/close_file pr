typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[28];
    unsigned int field_30;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[28];
    unsigned int field_30;
} struct_4;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 column_vector;
extern struct_0 columns;
extern struct_0 files_ready_to_read;
extern char parallel_files;

int close_file()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    struct_4 *v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned int v14;  // ebp
    struct_2 *v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v19;  // r12
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int [13] v7;  // rax
    unsigned long v8;  // rax
    unsigned int v9;  // ecx

    if (v15->field_10 != 3)
    {
        v2 = v17;
        v1 = &stack_base+0;
        v0 = v13;
        v12 = v15;
        ((unsigned int)v14) = ((long long)(((long long)(v15->field_0->field_0 & 32)) == 0? 0 : *(r12<8>)));
        v6 = fileno(v15);
        if (v6 == 0)
        {
            v5 = clearerr_unlocked();
        }
        else
        {
            v5 = rpl_fclose();
            if (((int)v5) != 0)
            {
                if (((int)((unsigned int)v14)) != 0)
                {
                    quotearg_n_style_colon();
                    error(0x1, v14, "%s");
                }
                else
                {
                    v14 = ((int)*(__errno_location()));
                }
            }
        }
        if (((int)v5) == 0 || ((int)((unsigned int)v14)) == 0 || v6 == 0)
        {
            if (!(v14 == 0))
            {
                quotearg_n_style_colon();
                error(0x1, v14, "%s");
            }
            else if (parallel_files == 0)
            {
                v7 = column_vector;
                if (columns != 0)
                {
                    do
                    {
                        v9 = ((int)v7[11]);
                        v7[4] = 3;
                        if (v9 == 0)
                        {
                            v7[12] = 0;
                        }
                        v7 += 64;
                    }
                    while (v7 != (((long long)(columns - 1)) + 1 << 6) + column_vector);
                    v10 = v0;
                    files_ready_to_read = files_ready_to_read - 1;
                    v19 = v2;
                    return v7;
                }
                v10 = v0;
                files_ready_to_read = files_ready_to_read - 1;
                v19 = v2;
                return v7;
            }
            else
            {
                v12->field_10 = 3;
                v12->field_30 = 0;
                v11 = v0;
                files_ready_to_read = files_ready_to_read - 1;
                v16 = v2;
                return v5;
            }
        }
    }
    else
    {
        return v8;
    }
}
