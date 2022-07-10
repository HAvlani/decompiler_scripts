int needs_quoting()
{
    char v0;  // [bp-0x22]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    char *v5;  // rdi

    if (*(v5) != v0)
    {
        v3 = 1;
        return v3;
    }
    v4 = quotearg_buffer();
    v3 = strlen(v5);
    v3 = ((char)(v3 != v4));
    return v3;
}
