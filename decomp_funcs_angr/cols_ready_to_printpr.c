extern struct_1 column_vector;
extern struct_0 columns;
extern char storing_columns;

int cols_ready_to_print()
{
    unsigned int [13] v1;  // rax
    unsigned long long v2;  // r8

    v2 = ((long long)columns);
    v1 = column_vector;
    if (columns != 0)
    {
        v2 = 0;
        do
        {
            if (v1[4] <= 1 || v1[11] > 0 && ((long long)storing_columns) != 0 && v1[12] > 0)
            {
                v2 = ((long long)(((int)v2) + 1));
            }
            v1 += 64;
        }
        while (v1 != (((long long)(((long long)columns) - 1)) + 1 << 6) + column_vector);
        return v2;
    }
    return v2;
}
