extern struct_0 nrows;
extern struct_0 table;

int alloc_table_row()
{
    unsigned long long v1;  // rax

    nrows = nrows + 1;
    table = (long long)xreallocarray();
    v1 = xnmalloc();
    *(table + nrows * 8 + 8) = v1;
    return v1;
}
