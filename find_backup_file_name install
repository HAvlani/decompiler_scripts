int find_backup_file_name()
{
    unsigned long long v2;  // rax

    v2 = backupfile_internal();
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
