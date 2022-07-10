extern char g_4077b0;
extern char have_read_stdin;

int cleanup_file_list_stdin()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax

    if (have_read_stdin == 0)
    {
        return v2;
    }
    v1 = rpl_fclose();
    if (((int)v1) == 0)
    {
        return v1;
    }
    else
    {
        error(0x1, *(__errno_location()), &g_4077b0);
    }
}
