typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
} struct_2;

extern struct_1 column_vector;
extern struct_0 columns;
extern struct_0 files_ready_to_read;
extern char storing_columns;

int reset_status()
{
    unsigned long long|struct_2 * v1;  // rax
    unsigned long|unsigned int v2;  // ecx
    unsigned long long v3;  // rsi
    struct_2 *v4;  // rdi

    v1 = ((long long)columns);
    v4 = column_vector;
    if (columns != 0)
    {
        v2 = ((int)files_ready_to_read);
        v1 = column_vector;
        v3 = 0;
        do
        {
            if (v1->field_10 == 2)
            {
                v1->field_10 = 0;
                v2 = ((long long)v2) + 1;
                v3 = 1;
            }
            v1 += 64;
        }
        while (v1 != (((long long)(((long long)columns) - 1)) + 1 << 6) + column_vector);
        if (((long long)v3) != 0)
        {
            files_ready_to_read = v2;
        }
    }
    if (storing_columns != 0)
    {
        v1 = 0;
        v1 = ((char)(v4->field_10 != 3));
        files_ready_to_read = ((int)(v4->field_10 != 3));
        return v1;
    }
    return v1;
}
