extern struct_0 fs_exclude_list;

int excluded_fstype()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long [2] v3;  // rbx
    char *v4;  // rdi
    unsigned long long v5;  // r12
    char v6;  // r12b

    v3 = fs_exclude_list;
    v6 = ((char)(v4 == 0)) | ((char)(fs_exclude_list == 0));
    if (((long long)(((char)(v4 == 0)) | ((char)(fs_exclude_list == 0)))) == 0)
    {
        while (true)
        {
            v2 = strcmp(v4, v3[0]);
            if (v2 != 0)
            {
                v3 = v3[1];
                v1 = v5;
                return v1;
            }
            return 1;
        }
    }
    return 0;
}
