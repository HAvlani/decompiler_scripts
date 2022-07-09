typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
} struct_2;

extern struct_1 column_vector;
extern struct_0 columns;
extern struct_0 files_ready_to_read;
extern char parallel_files;

int hold_file.isra.0()
{
    struct_2 * v1;  // rax
    unsigned long v2;  // rax
    struct_0 *v3;  // rsi
    struct_0 *v4;  // rsi
    struct_0 *v5;  // rdi

    if (parallel_files == 0)
    {
        v1 = column_vector;
        if (columns != 0)
        {
            do
            {
                v1->field_10 = !(0 - ((int)(((long long)*(0x41404c)) < 1))) + 2;
                v1 += 64;
            }
            while (v1 != (((long long)(columns - 1)) + 1 << 6) + column_vector);
            files_ready_to_read = files_ready_to_read - 1;
            v4->field_0 = 0;
            return v1;
        }
        files_ready_to_read = files_ready_to_read - 1;
        v4->field_0 = 0;
        return v1;
    }
    v5->field_0 = 2;
    files_ready_to_read = files_ready_to_read - 1;
    v3->field_0 = 0;
    return v2;
}
