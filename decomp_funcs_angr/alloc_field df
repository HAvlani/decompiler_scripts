extern struct_1 columns;
extern <missing-type> field_data;
extern struct_1 ncolumns;

int alloc_field()
{
    unsigned long long v1;  // rbx
    unsigned long v2;  // rsi
    unsigned long v3;  // rdi

    v1 = v3;
    ncolumns = ncolumns + 1;
    columns = (long long)xreallocarray();
    *(columns + ncolumns * 8 + 8) = v1 * 48 + &field_data;
    if (v2 != 0)
    {
        *(v3 * 48 + &field_data + 24) = v2;
        if (*(&field_data + (v3 + (v3 << 1) << 4) + 44) == 0)
        {
            *(&field_data + v3 * 48 + 44) = 1;
            return v3 * 48;
        }
        __assert_fail(); /* do not return */
    }
    else if (*(&field_data + (v3 + (v3 << 1) << 4) + 44) == 0)
    {
        *(&field_data + v3 * 48 + 44) = 1;
        return v3 * 48;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
