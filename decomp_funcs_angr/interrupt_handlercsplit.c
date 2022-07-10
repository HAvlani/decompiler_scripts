extern char remove_files;

int interrupt_handler()
{
    unsigned int v2;  // edi

    if (((long long)remove_files) != 0)
    {
        delete_all_files.part.0();
        signal(v2, 0x0);
    }
    else
    {
        signal(v2, 0x0);
    }
}
