extern struct_1 col_sep_length;
extern struct_0 col_sep_string;

int separator_string()
{
    unsigned long v2;  // rax
    char *v3;  // rdi

    v2 = strlen(v3);
    if (((long long)col_sep_length) <= 2147483647)
    {
        col_sep_string = v3;
        col_sep_length = v2;
        return ((long long)col_sep_length);
    }
    integer_overflow(); /* do not return */
}
