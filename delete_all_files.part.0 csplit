typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int files_created;

int delete_all_files.part.0()
{
    struct_0 * v2;  // rax
    unsigned long long|unsigned int v3;  // rbx
    struct_0 *v4;  // rbp
    char v5;  // dil

    v3 = ((int)(files_created - 1));
    if (((int)(((long long)files_created) - 1)) >= 0)
    {
        do
        {
            v2 = unlink((long long)make_filename());
            if (((int)v2) != 0)
            {
                v2 = __errno_location();
                v4 = v2;
                if (((long long)v5) == 0 && v2->field_0 != 2)
                {
                    quotearg_n_style_colon();
                    v2 = error(0x0, v4->field_0, "%s");
                }
            }
            v3 = ((long long)((unsigned int)v3)) - 1;
        }
        while (((int)v3) != -1);
        files_created = 0;
        return v2;
    }
    files_created = 0;
    return v2;
}
