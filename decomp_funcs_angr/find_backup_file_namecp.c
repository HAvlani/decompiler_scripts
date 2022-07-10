int find_backup_file_name()
{
    unsigned long long v1;  // rax

    v1 = backupfile_internal();
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
