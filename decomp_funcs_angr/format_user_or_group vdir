extern struct_0 dired_pos;

int format_user_or_group()
{
    unsigned long long v1;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rbx
    char *v6;  // rdi

    v5 = v4;
    if (v6 != 0)
    {
        v5 = ((int)(((int)(v5 - (long long)gnu_mbswidth())) < 0? 0 : ((int)(v5 - (long long)gnu_mbswidth()))));
        strlen(v6);
        dired_outbuf();
        while (true)
        {
            v5 = ((long long)v5) - 1;
            if (((int)v5) == -1)
            {
                break;
            }
        }
        return dired_outbyte();
    }
    v1 = __printf_chk(0x1, "%*lu ");
    dired_pos = dired_pos + ((long long)v1);
    return v1;
}
