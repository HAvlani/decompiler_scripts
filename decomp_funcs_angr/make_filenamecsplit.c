extern struct_1 digits;
extern struct_0 filename_space;
extern unsigned int g_418004;
extern struct_0 prefix;
extern struct_0 suffix;

int make_filename()
{
    unsigned int v2;  // edi

    strcpy(filename_space, prefix);
    if (suffix != 0)
    {
        __sprintf_chk(((int)(filename_space + strlen(prefix))), 0x1, 0xffffffff, ((int)suffix), v2);
        return filename_space;
    }
    __sprintf_chk(((int)(filename_space + strlen(prefix))), 0x1, 0xffffffff, &g_418004, digits);
    return filename_space;
}
