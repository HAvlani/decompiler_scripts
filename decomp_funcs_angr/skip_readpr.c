typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[49];
    char field_39;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[49];
    char field_39;
} struct_4;

typedef struct struct_5 {
    char padding_0[57];
    char field_39;
} struct_5;

extern struct_1 column_vector;
extern struct_0 columns;
extern char last_line;
extern struct_0 line_count;
extern char parallel_files;
extern char skip_count;

int skip_read()
{
    struct_5 *|unsigned long long v1;  // rax
    struct_2 *|unsigned long|unsigned long long [3] v10;  // rdi
    char|unsigned long long v11;  // r12b
    struct_4 *v12;  // r13
    char *v3;  // rax
    unsigned long long|char * v4;  // rax
    char *v5;  // rax
    char *v6;  // rax
    char *v7;  // rax
    unsigned long long v8[3];  // rbp
    unsigned int v9;  // esi

    v12 = v10;
    v8 = v10->field_0;
    v3 = v10->field_0->field_8;
    if (v10->field_0->field_8 < v10->field_0->field_10)
    {
        v10->field_0->field_8 = v10->field_0->field_8 + 1;
        v4 = ((long long)*(v3));
    }
    else
    {
        v10 = v10->field_0;
        v4 = __uflow(v10);
    }
    if (v4 != 12)
    {
        v12->field_39 = 0;
        v11 = 0;
    }
    else if (v12->field_39 != 0)
    {
        v7 = v8[1];
        if (v8[1] < v8[2])
        {
            v8[1] = v7 + 1;
            v4 = ((long long)*(v7));
        }
        else
        {
            v4 = __uflow(((int)v8));
        }
        if (((int)v4) == 10)
        {
            v4 = v8[1];
            if (v8[1] < v8[2])
            {
                v8[1] = v4 + 1;
                v4 = ((int)*(v4));
            }
            else
            {
                v4 = __uflow(((int)v8));
            }
        }
        v12->field_39 = 0;
        v11 = ((char)(v4 == 12));
    }
    else
    {
        v11 = ((long long)last_line);
        v1 = ((long long)last_line);
        if (((long long)last_line) != 0)
        {
            v12->field_39 = 1;
        }
        else
        {
            v11 = 1;
            /* goto 4211709; */
        }
    }
    if (v4 != 12 || v12->field_39 != 0)
    {
        if (last_line != 0)
        {
            v12->field_39 = 1;
        }
    }
    if (last_line == 0 && v4 != 12 || last_line == 0 && v12->field_39 != 0 || v4 != 12 && ((int)rax<8>) != 10 || ((int)rax<8>) != 10 && v12->field_39 != 0)
    {
        while (true)
        {
            v5 = v8[1];
            if (v8[1] < v8[2])
            {
                v8[1] = v5 + 1;
                v4 = ((long long)*(v5));
            }
            else
            {
                v4 = __uflow(((int)v8));
            }
        }
        if (((int)v4) != 10 && ((int)rax<8>) != 12)
        {
            close_file();
        }
        else if (((int)v4) != 10)
        {
            v1 = ((long long)last_line);
        }
        v1 = ((long long)last_line);
        close_file();
    }
    if (last_line == 0 && v4 != 12 || last_line == 0 && v12->field_39 != 0 || v4 != 12 && ((int)rax<8>) != 10 || ((int)rax<8>) != 10 && v12->field_39 != 0 || v4 == 12 && v12->field_39 == 0 && ((long long)last_line) != 0)
    {
        if (((long long)v1) != 0)
        {
            if (parallel_files == 0)
            {
                v1 = column_vector;
                if (columns != 0)
                {
                    do
                    {
                        v1->field_39 = 0;
                        v1 += 64;
                    }
                    while (v1 != (((long long)(columns - 1)) + 1 << 6) + column_vector);
                }
            }
            else
            {
                v12->field_39 = 0;
            }
        }
    }
    if (last_line == 0 || ((int)rax<8>) != 10 || v4 == 12 && v12->field_39 == 0)
    {
        v6 = v8[1];
        if (v8[1] < v8[2])
        {
            v8[1] = v6 + 1;
            v10 = ((long long)*(v6));
        }
        else
        {
            v10 = __uflow(((int)v8));
        }
        if (((int)v10) == 10)
        {
            hold_file.isra.0();
        }
        else
        {
            ungetc(v10, v8);
            hold_file.isra.0();
        }
    }
    if (skip_count != 0)
    {
        if (parallel_files == 1)
        {
            if (v9 != 1)
            {
                return rax<8>;
            }
        }
        if (v9 == 1 || parallel_files != 1)
        {
            if (((long long)v11) == 0)
            {
                line_count = line_count + 1;
                return rax<8>;
            }
            return rax<8>;
        }
    }
    return rax<8>;
}
