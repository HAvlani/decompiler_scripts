extern char g_407748;
extern char have_read_stdin;

int cleanup_file_list_stdin()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax

    if (have_read_stdin == 0)
    {
        return v1;
    }
    v2 = rpl_fclose();
    if (((int)v2) == 0)
    {
        return v2;
    }
    else
    {
        error(0x1, *(__errno_location()), &g_407748);
    }
}
